#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("A_0_address0", 4, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("A_0_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("A_0_q0", 32, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("A_1_address0", 4, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("A_1_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("A_1_q0", 32, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("A_2_address0", 4, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("A_2_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("A_2_q0", 32, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("A_3_address0", 4, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("A_3_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("A_3_q0", 32, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("A_4_address0", 4, hls_out, 4, "ap_memory", "mem_address", 1),
	Port_Property("A_4_ce0", 1, hls_out, 4, "ap_memory", "mem_ce", 1),
	Port_Property("A_4_q0", 32, hls_in, 4, "ap_memory", "mem_dout", 1),
	Port_Property("A_5_address0", 4, hls_out, 5, "ap_memory", "mem_address", 1),
	Port_Property("A_5_ce0", 1, hls_out, 5, "ap_memory", "mem_ce", 1),
	Port_Property("A_5_q0", 32, hls_in, 5, "ap_memory", "mem_dout", 1),
	Port_Property("A_6_address0", 4, hls_out, 6, "ap_memory", "mem_address", 1),
	Port_Property("A_6_ce0", 1, hls_out, 6, "ap_memory", "mem_ce", 1),
	Port_Property("A_6_q0", 32, hls_in, 6, "ap_memory", "mem_dout", 1),
	Port_Property("A_7_address0", 4, hls_out, 7, "ap_memory", "mem_address", 1),
	Port_Property("A_7_ce0", 1, hls_out, 7, "ap_memory", "mem_ce", 1),
	Port_Property("A_7_q0", 32, hls_in, 7, "ap_memory", "mem_dout", 1),
	Port_Property("A_8_address0", 4, hls_out, 8, "ap_memory", "mem_address", 1),
	Port_Property("A_8_ce0", 1, hls_out, 8, "ap_memory", "mem_ce", 1),
	Port_Property("A_8_q0", 32, hls_in, 8, "ap_memory", "mem_dout", 1),
	Port_Property("A_9_address0", 4, hls_out, 9, "ap_memory", "mem_address", 1),
	Port_Property("A_9_ce0", 1, hls_out, 9, "ap_memory", "mem_ce", 1),
	Port_Property("A_9_q0", 32, hls_in, 9, "ap_memory", "mem_dout", 1),
	Port_Property("B_0_V_address0", 4, hls_out, 10, "ap_memory", "mem_address", 1),
	Port_Property("B_0_V_ce0", 1, hls_out, 10, "ap_memory", "mem_ce", 1),
	Port_Property("B_0_V_we0", 1, hls_out, 10, "ap_memory", "mem_we", 1),
	Port_Property("B_0_V_d0", 22, hls_out, 10, "ap_memory", "mem_din", 1),
	Port_Property("B_1_V_address0", 4, hls_out, 11, "ap_memory", "mem_address", 1),
	Port_Property("B_1_V_ce0", 1, hls_out, 11, "ap_memory", "mem_ce", 1),
	Port_Property("B_1_V_we0", 1, hls_out, 11, "ap_memory", "mem_we", 1),
	Port_Property("B_1_V_d0", 22, hls_out, 11, "ap_memory", "mem_din", 1),
	Port_Property("B_2_V_address0", 4, hls_out, 12, "ap_memory", "mem_address", 1),
	Port_Property("B_2_V_ce0", 1, hls_out, 12, "ap_memory", "mem_ce", 1),
	Port_Property("B_2_V_we0", 1, hls_out, 12, "ap_memory", "mem_we", 1),
	Port_Property("B_2_V_d0", 22, hls_out, 12, "ap_memory", "mem_din", 1),
	Port_Property("B_3_V_address0", 4, hls_out, 13, "ap_memory", "mem_address", 1),
	Port_Property("B_3_V_ce0", 1, hls_out, 13, "ap_memory", "mem_ce", 1),
	Port_Property("B_3_V_we0", 1, hls_out, 13, "ap_memory", "mem_we", 1),
	Port_Property("B_3_V_d0", 22, hls_out, 13, "ap_memory", "mem_din", 1),
	Port_Property("B_4_V_address0", 4, hls_out, 14, "ap_memory", "mem_address", 1),
	Port_Property("B_4_V_ce0", 1, hls_out, 14, "ap_memory", "mem_ce", 1),
	Port_Property("B_4_V_we0", 1, hls_out, 14, "ap_memory", "mem_we", 1),
	Port_Property("B_4_V_d0", 22, hls_out, 14, "ap_memory", "mem_din", 1),
	Port_Property("B_5_V_address0", 4, hls_out, 15, "ap_memory", "mem_address", 1),
	Port_Property("B_5_V_ce0", 1, hls_out, 15, "ap_memory", "mem_ce", 1),
	Port_Property("B_5_V_we0", 1, hls_out, 15, "ap_memory", "mem_we", 1),
	Port_Property("B_5_V_d0", 22, hls_out, 15, "ap_memory", "mem_din", 1),
	Port_Property("B_6_V_address0", 4, hls_out, 16, "ap_memory", "mem_address", 1),
	Port_Property("B_6_V_ce0", 1, hls_out, 16, "ap_memory", "mem_ce", 1),
	Port_Property("B_6_V_we0", 1, hls_out, 16, "ap_memory", "mem_we", 1),
	Port_Property("B_6_V_d0", 22, hls_out, 16, "ap_memory", "mem_din", 1),
	Port_Property("B_7_V_address0", 4, hls_out, 17, "ap_memory", "mem_address", 1),
	Port_Property("B_7_V_ce0", 1, hls_out, 17, "ap_memory", "mem_ce", 1),
	Port_Property("B_7_V_we0", 1, hls_out, 17, "ap_memory", "mem_we", 1),
	Port_Property("B_7_V_d0", 22, hls_out, 17, "ap_memory", "mem_din", 1),
	Port_Property("B_8_V_address0", 4, hls_out, 18, "ap_memory", "mem_address", 1),
	Port_Property("B_8_V_ce0", 1, hls_out, 18, "ap_memory", "mem_ce", 1),
	Port_Property("B_8_V_we0", 1, hls_out, 18, "ap_memory", "mem_we", 1),
	Port_Property("B_8_V_d0", 22, hls_out, 18, "ap_memory", "mem_din", 1),
	Port_Property("B_9_V_address0", 4, hls_out, 19, "ap_memory", "mem_address", 1),
	Port_Property("B_9_V_ce0", 1, hls_out, 19, "ap_memory", "mem_ce", 1),
	Port_Property("B_9_V_we0", 1, hls_out, 19, "ap_memory", "mem_we", 1),
	Port_Property("B_9_V_d0", 22, hls_out, 19, "ap_memory", "mem_din", 1),
};
const char* HLS_Design_Meta::dut_name = "inverse";