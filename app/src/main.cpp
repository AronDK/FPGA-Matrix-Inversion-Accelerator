#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/time.h>

#include <cstdint>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <cstring>

#include "dma_proxy_helper.hpp"

#define USER_IP_ADDR_LOW 0xB0010000
#define USER_IP_ADDR_HIGH 0xB001FFFF

// find the offset from your Vitis HLS project synthesis summary
#define USER_IP_ADDR_OFFSET_FILTER_0 0x10

#define FIR_TAP_DEPTH 64
#define N 10 // size of NxN matrix
#define N_aug 20 // twice of N
#define SIZE 1000 // size of matrix

void initialize_hw(void);
void maintoAXI(int (&inputArr)[N][N], float (&invArr)[N][N]);
void inverse(int (&A)[N][N], float (&B)[N][N]);

int main(void) {
    initialize_hw();
    sleep(5);
	int inputArr[N][N];
	float invArr[N][N];
	float invArr2[N][N];
	float goldenArr[N][N];
	float totalError = 0.0;

	std::ifstream ifileMat("/lib/firmware/xilinx/matrices.dat", std::ios::in | std::ios::binary);
	std::ifstream ifileGold("/lib/firmware/xilinx/golden.dat", std::ios::in | std::ios::binary);

	struct timeval start, end;
	int tmp = 0;

	while (ifileMat.read(reinterpret_cast<char*>(inputArr), N * N * sizeof(int))) {

		for (int i = 0; i < N; i++) {
			ifileGold.read(reinterpret_cast<char*>(goldenArr[i]), N * sizeof(float));
		}

		gettimeofday(&start, NULL);
		maintoAXI(inputArr, invArr);
		gettimeofday(&end, NULL);
		
		std::cout << "The matrix inversion took " << (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.0 << " seconds." << std::endl;

		gettimeofday(&start, NULL);
		inverse(inputArr, invArr2);
		gettimeofday(&end, NULL);

		std::cout << "The matrix inversion took " << (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.0 << " seconds." << std::endl;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (tmp != 0) totalError += std::abs(goldenArr[i][j] - invArr[i][j]);
			}
		}
		std::cout << "The golden matrix is: " << std::endl;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				std::cout << goldenArr[i][j] << "\t";
			}
			std::cout << std::endl;
		}
		std::cout << "The inverted matrix (FPGA) is " << std::endl;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				std::cout << invArr[i][j] << "\t";
			}
			std::cout << std::endl;
		}
		std::cout << "The inverted matrix (SW) is " << std::endl;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				std::cout << invArr2[i][j] << "\t";
			}
			std::cout << std::endl;
		}
		tmp++;
	}
	std::cout << "The total absolute error is: " << totalError << std::endl;

	return 0;
}

void initialize_hw(void) {
    if (getuid() != 0) {
        printf("Reconfiguration flow requires super user!\n");
        return;
    }
    // configure FPGA & device tree
    system("sudo rmmod dma_proxy");
    system("sudo rmmod dma-proxy"); // remove dma-proxy driver kernel module, dma-proxy drive must be reloaded after new dt overlay to recognize new nodes
    system("sudo xmutil unloadapp"); // remove existing dt overlay
    system("sudo xmutil loadapp my_app"); // program FPGA and load dt overlay
    system("sudo insmod /lib/modules/5.10.0-xilinx-v2021.2/extra/dma-proxy.ko"); // load dma-proxy driver module and create character devices for DMA channels
}

void maintoAXI(int (&inputArr)[N][N], float (&invArr)[N][N]) {
	dmaProxy::DMAProxy axiDmaProxy("/dev/dma_proxy_rx", "/dev/dma_proxy_tx");

	// bit hacky, should be properly mapped as userspace i/o instead
	auto fd = open("/dev/mem", O_RDWR | O_SYNC);
	if (fd == -1) {
		perror("/dev/mem open");
		return;
	}
	uint64_t axiBasePtr = (uint64_t)mmap(NULL, USER_IP_ADDR_HIGH - USER_IP_ADDR_LOW, PROT_READ | PROT_WRITE, MAP_SHARED, fd, USER_IP_ADDR_LOW);
	close(fd); // fd can be closed after mmap is created
	if ((void*)axiBasePtr == MAP_FAILED) {
		perror("Error mapping the device to memory.\n");
		exit(EXIT_FAILURE);
	}
	
	int inputArrFlat[N * N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			inputArrFlat[i * N + j] = inputArr[i][j];
		}
	}

	auto tx_status = axiDmaProxy.startTx(N * N * sizeof(int), true);
	axiDmaProxy.startRx(N * N * sizeof(float), true);

	int* txBuffer = reinterpret_cast<int*>(axiDmaProxy.getTxBuffer());

	printf("DMA TX error %d.\n", tx_status);
	for (int i = 0; i < N * N; i++) {
		txBuffer[i] = inputArrFlat[i];
		// std::cout << txBuffer[i] << "\t";
	}

	// wait for the DMA transfer to complete
	// axiDmaProxy.waitTx();
	printf("DMA RX error %d.\n", axiDmaProxy.getRxStatus());

	unsigned int* rxBuffer = axiDmaProxy.getRxBuffer();

	// axiDmaProxy.waitRx();
	for (int i = 0; i < N * N; i++) {
		invArr[i / N][i % N] = reinterpret_cast<float*>(rxBuffer)[i];
	}
}

void inverse(int (&A)[N][N], float (&B)[N][N]) {
	int i, j, k;
	float temp;

	// Create an augmented matrix with A and identity matrix
	float aug[N][N_aug];
	float temp_aug[N][N_aug];

	// Initialize augmented matrix
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			aug[i][j] = A[i][j];
			temp_aug[i][j] = A[i][j];
		}
		for (j = N; j < N_aug; j++) {
			aug[i][j] = (i == j - N) ? 1.0 : 0.0;
			temp_aug[i][j] = (i == j - N) ? 1.0 : 0.0;
		}
	}

	// Perform row operations to convert A to identity matrix
	for (i = 0; i < N; i++) {
		temp = aug[i][i];

		// Normalize the pivot row in temp_aug
		for (j = 0; j < N_aug; j++) {
			temp_aug[i][j] = aug[i][j] / temp;
		}

		// Update aug with the normalized pivot row
		for (j = 0; j < N_aug; j++) {
			aug[i][j] = temp_aug[i][j];
		}

		// Eliminate other rows
		for (j = 0; j < N; j++) {
			if (i != j) {
				temp = aug[j][i];
				for (k = 0; k < N_aug; k++) {
					temp_aug[j][k] = aug[j][k] - aug[i][k] * temp;
				}
			}
		}

		// Update aug with the results of the elimination
		for (j = 0; j < N; j++) {
			if (i != j) {
				for (k = 0; k < N_aug; k++) {
					aug[j][k] = temp_aug[j][k];
				}
			}
		}
	}

	// Extract the inverse matrix from the augmented matrix
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			B[i][j] = aug[i][j + N];
		}
	}
}

