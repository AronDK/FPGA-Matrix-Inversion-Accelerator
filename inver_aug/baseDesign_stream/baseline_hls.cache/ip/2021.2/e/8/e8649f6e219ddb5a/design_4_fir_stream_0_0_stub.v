// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.2 (lin64) Build 3367213 Tue Oct 19 02:47:39 MDT 2021
// Date        : Fri Apr 14 19:31:12 2023
// Host        : junningfan-B550-AORUS-PRO-AX running 64-bit Ubuntu 20.04.6 LTS
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_4_fir_stream_0_0_stub.v
// Design      : design_4_fir_stream_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xck26-sfvc784-2LV-c
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "fir_stream,Vivado 2021.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(ap_local_block, s_axi_control_AWADDR, 
  s_axi_control_AWVALID, s_axi_control_AWREADY, s_axi_control_WDATA, s_axi_control_WSTRB, 
  s_axi_control_WVALID, s_axi_control_WREADY, s_axi_control_BRESP, s_axi_control_BVALID, 
  s_axi_control_BREADY, s_axi_control_ARADDR, s_axi_control_ARVALID, 
  s_axi_control_ARREADY, s_axi_control_RDATA, s_axi_control_RRESP, s_axi_control_RVALID, 
  s_axi_control_RREADY, ap_clk, ap_rst_n, interrupt, input_r_TVALID, input_r_TREADY, 
  input_r_TDATA, input_r_TLAST, input_r_TKEEP, input_r_TSTRB, output_r_TVALID, 
  output_r_TREADY, output_r_TDATA, output_r_TLAST, output_r_TKEEP, output_r_TSTRB)
/* synthesis syn_black_box black_box_pad_pin="ap_local_block,s_axi_control_AWADDR[9:0],s_axi_control_AWVALID,s_axi_control_AWREADY,s_axi_control_WDATA[31:0],s_axi_control_WSTRB[3:0],s_axi_control_WVALID,s_axi_control_WREADY,s_axi_control_BRESP[1:0],s_axi_control_BVALID,s_axi_control_BREADY,s_axi_control_ARADDR[9:0],s_axi_control_ARVALID,s_axi_control_ARREADY,s_axi_control_RDATA[31:0],s_axi_control_RRESP[1:0],s_axi_control_RVALID,s_axi_control_RREADY,ap_clk,ap_rst_n,interrupt,input_r_TVALID,input_r_TREADY,input_r_TDATA[7:0],input_r_TLAST[0:0],input_r_TKEEP[0:0],input_r_TSTRB[0:0],output_r_TVALID,output_r_TREADY,output_r_TDATA[15:0],output_r_TLAST[0:0],output_r_TKEEP[1:0],output_r_TSTRB[1:0]" */;
  output ap_local_block;
  input [9:0]s_axi_control_AWADDR;
  input s_axi_control_AWVALID;
  output s_axi_control_AWREADY;
  input [31:0]s_axi_control_WDATA;
  input [3:0]s_axi_control_WSTRB;
  input s_axi_control_WVALID;
  output s_axi_control_WREADY;
  output [1:0]s_axi_control_BRESP;
  output s_axi_control_BVALID;
  input s_axi_control_BREADY;
  input [9:0]s_axi_control_ARADDR;
  input s_axi_control_ARVALID;
  output s_axi_control_ARREADY;
  output [31:0]s_axi_control_RDATA;
  output [1:0]s_axi_control_RRESP;
  output s_axi_control_RVALID;
  input s_axi_control_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  input input_r_TVALID;
  output input_r_TREADY;
  input [7:0]input_r_TDATA;
  input [0:0]input_r_TLAST;
  input [0:0]input_r_TKEEP;
  input [0:0]input_r_TSTRB;
  output output_r_TVALID;
  input output_r_TREADY;
  output [15:0]output_r_TDATA;
  output [0:0]output_r_TLAST;
  output [1:0]output_r_TKEEP;
  output [1:0]output_r_TSTRB;
endmodule
