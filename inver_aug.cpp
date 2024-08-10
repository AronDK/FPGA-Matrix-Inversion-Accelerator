#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include "inver_aug.h"

//void axiToInverse(hls::stream<intSdCh> &inStream, hls::stream<intModRet> &outStream) {
//#pragma HLS INTERFACE axis port=inStream
//#pragma HLS INTERFACE axis port=outStream
//	intSdCh in;
//	intModRet out;
//	MatInputType input[N][N];
//	InvType output[N][N];
//
//	// Saving streaming data
//	loop_input_row:
//	for (int row = 0; row < N; row ++) {
//		loop_input_col:
//		for (int col = 0; col < N; col ++){
//			#pragma HLS PIPELINE
//			in = inStream.read();
//			input[row][col] = in.data;
//		}
//	}
//
//	inverse(input, output);
//
//	// Streaming output data back
//	loop_output_row:
//	for (int row = 0; row < N; row ++) {
//		loop_output_col:
//		for (int col = 0; col < N; col ++){
//			#pragma HLS PIPELINE
//			out.data = output[row][col];
//			if ((row == N - 1) && (col == N - 1)) {
//				out.last = 1;
//			} else {
//				out.last = 0;
//			}
//			outStream.write(out);
//		}
//	}
//}

void inverse(hls::stream<intSdCh> &inStream, hls::stream<intModRet> &outStream) {
#pragma HLS INTERFACE axis register both port=outStream
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE axis register both port=inStream
	intSdCh in;
	intModRet out;
	MatInputType A[N][N];
	InvType B[N][N];

	// Saving streaming data
	loop_input_row:
	for (int row = 0; row < N; row ++) {
		loop_input_col:
		for (int col = 0; col < N; col ++){
			#pragma HLS PIPELINE
			in = inStream.read();
			A[row][col] = in.data;
		}
	}


	int i, j, k;
	InvType temp;

	// Create an augmented matrix with A and identity matrix
	InvType aug[N][N_aug];

	// Initialize augmented matrix
	Ini_Aug_loop:
	for (i = 0; i < N; i++) {
		Ini_Aug_loop_1:
		for (j = 0; j < N; j++) {
			aug[i][j] = A[i][j];
		}
		Ini_Aug_loop_2:
		for (j = N; j < N_aug; j++) {
			aug[i][j] = (i == j - N) ? 1.0 : 0.0;
		}
	}

	// Perform row operations to convert A to identity matrix
	Row_Operation:
	for (i = 0; i < N; i++) {
		// Ensure the pivot is not zero or near-zero after potential skipping

		// Normalize the pivot row
		temp = aug[i][i];
		for (j = 0; j < N_aug; j++) {
			aug[i][j] /= temp;
		}

		// Eliminate other rows
		for (j = 0; j < N; j++) {
			if (i != j) {
				temp = aug[j][i];
				for (k = 0; k < N_aug; k++) {
					aug[j][k] -= aug[i][k] * temp;
				}
			}
		}
	}

	// Extract the inverse matrix from the augmented matrix
	Extract_loop:
	for (i = 0; i < N; i++) {
		Extract_loop_1:
		for (j = 0; j < N; j++) {
			B[i][j] = aug[i][j + N];
		}
	}

	// Streaming output data back
	loop_output_row:
	for (int row = 0; row < N; row ++) {
		loop_output_col:
		for (int col = 0; col < N; col ++){
			#pragma HLS PIPELINE
			out.data = B[row][col];
			if ((row == N - 1) && (col == N - 1)) {
				out.last = 1;
			} else {
				out.last = 0;
			}
			outStream.write(out);
		}
	}
}

//void inverse(MatInputType A[N][N], InvType B[N][N]) {
//	int i, j, k;
//	InvType temp;
//
//	// Create an augmented matrix with A and identity matrix
//	InvType aug[N][N_aug];
//
//	// Initialize augmented matrix
//	Ini_Aug_loop:
//	for (i = 0; i < N; i++) {
//		Ini_Aug_loop_1:
//		for (j = 0; j < N; j++) {
//			aug[i][j] = A[i][j];
//		}
//		Ini_Aug_loop_2:
//		for (j = N; j < N_aug; j++) {
//			aug[i][j] = (i == j - N) ? 1.0 : 0.0;
//		}
//	}
//
//	// Perform row operations to convert A to identity matrix
//	Row_Operation:
//	for (i = 0; i < N; i++) {
//		// Ensure the pivot is not zero or near-zero after potential skipping
//
//		// Normalize the pivot row
//		temp = aug[i][i];
//		for (j = 0; j < N_aug; j++) {
//			aug[i][j] /= temp;
//		}
//
//		// Eliminate other rows
//		for (j = 0; j < N; j++) {
//			if (i != j) {
//				temp = aug[j][i];
//				for (k = 0; k < N_aug; k++) {
//					aug[j][k] -= aug[i][k] * temp;
//				}
//			}
//		}
//	}
//
//	// Extract the inverse matrix from the augmented matrix
//	Extract_loop:
//	for (i = 0; i < N; i++) {
//		Extract_loop_1:
//		for (j = 0; j < N; j++) {
//			B[i][j] = aug[i][j + N];
//		}
//	}
//}

