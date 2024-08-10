// (c) Copyright 1995-2023 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.

// IP VLNV: junning:hls:fir_stream:1.0
// IP Revision: 2112991688

// The following must be inserted into your Verilog file for this
// core to be instantiated. Change the instance name and port connections
// (in parentheses) to your own signal names.

//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
fir_stream_0 your_instance_name (
  .ap_local_block(ap_local_block),                // output wire ap_local_block
  .s_axi_control_AWADDR(s_axi_control_AWADDR),    // input wire [9 : 0] s_axi_control_AWADDR
  .s_axi_control_AWVALID(s_axi_control_AWVALID),  // input wire s_axi_control_AWVALID
  .s_axi_control_AWREADY(s_axi_control_AWREADY),  // output wire s_axi_control_AWREADY
  .s_axi_control_WDATA(s_axi_control_WDATA),      // input wire [31 : 0] s_axi_control_WDATA
  .s_axi_control_WSTRB(s_axi_control_WSTRB),      // input wire [3 : 0] s_axi_control_WSTRB
  .s_axi_control_WVALID(s_axi_control_WVALID),    // input wire s_axi_control_WVALID
  .s_axi_control_WREADY(s_axi_control_WREADY),    // output wire s_axi_control_WREADY
  .s_axi_control_BRESP(s_axi_control_BRESP),      // output wire [1 : 0] s_axi_control_BRESP
  .s_axi_control_BVALID(s_axi_control_BVALID),    // output wire s_axi_control_BVALID
  .s_axi_control_BREADY(s_axi_control_BREADY),    // input wire s_axi_control_BREADY
  .s_axi_control_ARADDR(s_axi_control_ARADDR),    // input wire [9 : 0] s_axi_control_ARADDR
  .s_axi_control_ARVALID(s_axi_control_ARVALID),  // input wire s_axi_control_ARVALID
  .s_axi_control_ARREADY(s_axi_control_ARREADY),  // output wire s_axi_control_ARREADY
  .s_axi_control_RDATA(s_axi_control_RDATA),      // output wire [31 : 0] s_axi_control_RDATA
  .s_axi_control_RRESP(s_axi_control_RRESP),      // output wire [1 : 0] s_axi_control_RRESP
  .s_axi_control_RVALID(s_axi_control_RVALID),    // output wire s_axi_control_RVALID
  .s_axi_control_RREADY(s_axi_control_RREADY),    // input wire s_axi_control_RREADY
  .ap_clk(ap_clk),                                // input wire ap_clk
  .ap_rst_n(ap_rst_n),                            // input wire ap_rst_n
  .ap_start(ap_start),                            // input wire ap_start
  .ap_done(ap_done),                              // output wire ap_done
  .ap_idle(ap_idle),                              // output wire ap_idle
  .ap_ready(ap_ready),                            // output wire ap_ready
  .input_r_TVALID(input_r_TVALID),                // input wire input_r_TVALID
  .input_r_TREADY(input_r_TREADY),                // output wire input_r_TREADY
  .input_r_TDATA(input_r_TDATA),                  // input wire [7 : 0] input_r_TDATA
  .input_r_TLAST(input_r_TLAST),                  // input wire [0 : 0] input_r_TLAST
  .input_r_TKEEP(input_r_TKEEP),                  // input wire [0 : 0] input_r_TKEEP
  .input_r_TSTRB(input_r_TSTRB),                  // input wire [0 : 0] input_r_TSTRB
  .output_r_TVALID(output_r_TVALID),              // output wire output_r_TVALID
  .output_r_TREADY(output_r_TREADY),              // input wire output_r_TREADY
  .output_r_TDATA(output_r_TDATA),                // output wire [15 : 0] output_r_TDATA
  .output_r_TLAST(output_r_TLAST),                // output wire [0 : 0] output_r_TLAST
  .output_r_TKEEP(output_r_TKEEP),                // output wire [1 : 0] output_r_TKEEP
  .output_r_TSTRB(output_r_TSTRB)                // output wire [1 : 0] output_r_TSTRB
);
// INST_TAG_END ------ End INSTANTIATION Template ---------

