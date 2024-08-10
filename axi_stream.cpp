#include "inver_aug.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maintoAXI(MatInputType A[N][N], InvType B[N][N]) {
#pragma HLS PIPELINE enable_flush rewind
	intSdCh input;
	intModRet output;
	hls::stream<intSdCh> inStream;
	hls::stream<intModRet> outStream;


	// Saving data to streaming variables
	loop_input_row:
	for (int row = 0; row < N; row ++) {
		loop_input_col:
		for (int col = 0; col < N; col ++) {
			input.data = A[row][col];
			#pragma HLS PIPELINE
			if ((row == N - 1) && (col == N - 1)) {
				input.last = 1;
			} else {
				input.last = 0;
			}
			inStream.write(input);
		}
	}

	inverse(inStream, outStream);

	// Saving return data
	loop_output_row:
	for (int row = 0; row < N; row ++) {
		loop_output_col:
		for (int col = 0; col < N; col ++) {
		#pragma HLS PIPELINE
			outStream.read(output);
			B[row][col] = output.data;
		}
	}
}





