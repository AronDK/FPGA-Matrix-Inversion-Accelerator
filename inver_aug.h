#include "ap_fixed.h"
#define N 10
#define N_aug 20 // twice of N
#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include "C:\Xilinx\Vivado\2020.1\include\gmp.h"
//#include <gmp.h>
#define __gmp_const const


typedef int MatInputType;
//typedef float InvType;
typedef ap_fixed<30,8> InvType;
typedef ap_int<8> DetType;
struct intSdCh {
	MatInputType data;
	ap_uint<1> last;
};
struct intModRet {
	InvType data;
	ap_uint<1> last;
};

void printMatrixA(MatInputType matrix[N][N]);
void printMatrixB(InvType matrix[N][N]);
//void inverse(MatInputType A[N][N], InvType B[N][N]);
void inverse(hls::stream<intSdCh> &inStream, hls::stream<intModRet> &outStream);

// AXI funcs
void maintoAXI(MatInputType A[N][N], InvType B[N][N]);
//void axiToInverse(hls::stream<intSdCh> &inStream, hls::stream<intModRet> &outStream);
