// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "A"
#define AUTOTB_TVIN_A  "../tv/cdatafile/c.inverse.autotvin_A.dat"
// wrapc file define: "B_V"
#define AUTOTB_TVOUT_B_V  "../tv/cdatafile/c.inverse.autotvout_B_V.dat"
#define AUTOTB_TVIN_B_V  "../tv/cdatafile/c.inverse.autotvin_B_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "B_V"
#define AUTOTB_TVOUT_PC_B_V  "../tv/rtldatafile/rtl.inverse.autotvout_B_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			A_depth = 0;
			B_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{A " << A_depth << "}\n";
			total_list << "{B_V " << B_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int A_depth;
		int B_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void inverse (
int A[10][10],
ap_fixed<22, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> B[10][10]);

void AESL_WRAP_inverse (
int A[10][10],
ap_fixed<22, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> B[10][10])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "B_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_B_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_B_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_B_V, AESL_token); // data

			sc_bv<22> *B_V_pc_buffer = new sc_bv<22>[100];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'B_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'B_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					B_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_B_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_B_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: B_V
				{
					// bitslice(21, 0)
					// {
						// celement: B.V(21, 0)
						// {
							sc_lv<22>* B_V_lv0_0_9_1_lv1_0_9_1 = new sc_lv<22>[100];
						// }
					// }

					// bitslice(21, 0)
					{
						int hls_map_index = 0;
						// celement: B.V(21, 0)
						{
							// carray: (0) => (9) @ (1)
							for (int i_0 = 0; i_0 <= 9; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
									{
										B_V_lv0_0_9_1_lv1_0_9_1[hls_map_index].range(21, 0) = sc_bv<22>(B_V_pc_buffer[hls_map_index].range(21, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(21, 0)
					{
						int hls_map_index = 0;
						// celement: B.V(21, 0)
						{
							// carray: (0) => (9) @ (1)
							for (int i_0 = 0; i_0 <= 9; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : B[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : B[0][0]
									// output_left_conversion : (B[i_0][i_1]).range()
									// output_type_conversion : (B_V_lv0_0_9_1_lv1_0_9_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(B[i_0][i_1]).range() = (B_V_lv0_0_9_1_lv1_0_9_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] B_V_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "A"
		char* tvin_A = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A);

		// "B_V"
		char* tvin_B_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_V);
		char* tvout_B_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_B_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_A, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A, tvin_A);

		sc_bv<32>* A_tvin_wrapc_buffer = new sc_bv<32>[100];

		// RTL Name: A
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: A(31, 0)
				{
					// carray: (0) => (9) @ (1)
					for (int i_0 = 0; i_0 <= 9; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_tvin_wrapc_buffer[hls_map_index].range(31, 0) = A_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 100; i++)
		{
			sprintf(tvin_A, "%s\n", (A_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A, tvin_A);
		}

		tcl_file.set_num(100, &tcl_file.A_depth);
		sprintf(tvin_A, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A, tvin_A);

		// release memory allocation
		delete [] A_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_V, tvin_B_V);

		sc_bv<22>* B_V_tvin_wrapc_buffer = new sc_bv<22>[100];

		// RTL Name: B_V
		{
			// bitslice(21, 0)
			{
				int hls_map_index = 0;
				// celement: B.V(21, 0)
				{
					// carray: (0) => (9) @ (1)
					for (int i_0 = 0; i_0 <= 9; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B_V
							// input_type_conversion : (B[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<22> B_V_tmp_mem;
								B_V_tmp_mem = (B[i_0][i_1]).range().to_string(SC_BIN).c_str();
								B_V_tvin_wrapc_buffer[hls_map_index].range(21, 0) = B_V_tmp_mem.range(21, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 100; i++)
		{
			sprintf(tvin_B_V, "%s\n", (B_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_V, tvin_B_V);
		}

		tcl_file.set_num(100, &tcl_file.B_V_depth);
		sprintf(tvin_B_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_V, tvin_B_V);

		// release memory allocation
		delete [] B_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		inverse(A, B);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_B_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_B_V, tvout_B_V);

		sc_bv<22>* B_V_tvout_wrapc_buffer = new sc_bv<22>[100];

		// RTL Name: B_V
		{
			// bitslice(21, 0)
			{
				int hls_map_index = 0;
				// celement: B.V(21, 0)
				{
					// carray: (0) => (9) @ (1)
					for (int i_0 = 0; i_0 <= 9; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B_V
							// input_type_conversion : (B[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<22> B_V_tmp_mem;
								B_V_tmp_mem = (B[i_0][i_1]).range().to_string(SC_BIN).c_str();
								B_V_tvout_wrapc_buffer[hls_map_index].range(21, 0) = B_V_tmp_mem.range(21, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 100; i++)
		{
			sprintf(tvout_B_V, "%s\n", (B_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_B_V, tvout_B_V);
		}

		tcl_file.set_num(100, &tcl_file.B_V_depth);
		sprintf(tvout_B_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_B_V, tvout_B_V);

		// release memory allocation
		delete [] B_V_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "A"
		delete [] tvin_A;
		// release memory allocation: "B_V"
		delete [] tvout_B_V;
		delete [] tvin_B_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

