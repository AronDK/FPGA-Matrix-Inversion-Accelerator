// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module fir_stream_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 10,
    C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    output wire [7:0]                    filter_0_V,
    output wire [7:0]                    filter_1_V,
    output wire [7:0]                    filter_2_V,
    output wire [7:0]                    filter_3_V,
    output wire [7:0]                    filter_4_V,
    output wire [7:0]                    filter_5_V,
    output wire [7:0]                    filter_6_V,
    output wire [7:0]                    filter_7_V,
    output wire [7:0]                    filter_8_V,
    output wire [7:0]                    filter_9_V,
    output wire [7:0]                    filter_10_V,
    output wire [7:0]                    filter_11_V,
    output wire [7:0]                    filter_12_V,
    output wire [7:0]                    filter_13_V,
    output wire [7:0]                    filter_14_V,
    output wire [7:0]                    filter_15_V,
    output wire [7:0]                    filter_16_V,
    output wire [7:0]                    filter_17_V,
    output wire [7:0]                    filter_18_V,
    output wire [7:0]                    filter_19_V,
    output wire [7:0]                    filter_20_V,
    output wire [7:0]                    filter_21_V,
    output wire [7:0]                    filter_22_V,
    output wire [7:0]                    filter_23_V,
    output wire [7:0]                    filter_24_V,
    output wire [7:0]                    filter_25_V,
    output wire [7:0]                    filter_26_V,
    output wire [7:0]                    filter_27_V,
    output wire [7:0]                    filter_28_V,
    output wire [7:0]                    filter_29_V,
    output wire [7:0]                    filter_30_V,
    output wire [7:0]                    filter_31_V,
    output wire [7:0]                    filter_32_V,
    output wire [7:0]                    filter_33_V,
    output wire [7:0]                    filter_34_V,
    output wire [7:0]                    filter_35_V,
    output wire [7:0]                    filter_36_V,
    output wire [7:0]                    filter_37_V,
    output wire [7:0]                    filter_38_V,
    output wire [7:0]                    filter_39_V,
    output wire [7:0]                    filter_40_V,
    output wire [7:0]                    filter_41_V,
    output wire [7:0]                    filter_42_V,
    output wire [7:0]                    filter_43_V,
    output wire [7:0]                    filter_44_V,
    output wire [7:0]                    filter_45_V,
    output wire [7:0]                    filter_46_V,
    output wire [7:0]                    filter_47_V,
    output wire [7:0]                    filter_48_V,
    output wire [7:0]                    filter_49_V,
    output wire [7:0]                    filter_50_V,
    output wire [7:0]                    filter_51_V,
    output wire [7:0]                    filter_52_V,
    output wire [7:0]                    filter_53_V,
    output wire [7:0]                    filter_54_V,
    output wire [7:0]                    filter_55_V,
    output wire [7:0]                    filter_56_V,
    output wire [7:0]                    filter_57_V,
    output wire [7:0]                    filter_58_V,
    output wire [7:0]                    filter_59_V,
    output wire [7:0]                    filter_60_V,
    output wire [7:0]                    filter_61_V,
    output wire [7:0]                    filter_62_V,
    output wire [7:0]                    filter_63_V
);
//------------------------Address Info-------------------
// 0x000 : reserved
// 0x004 : reserved
// 0x008 : reserved
// 0x00c : reserved
// 0x010 : Data signal of filter_0_V
//         bit 7~0 - filter_0_V[7:0] (Read/Write)
//         others  - reserved
// 0x014 : reserved
// 0x018 : Data signal of filter_1_V
//         bit 7~0 - filter_1_V[7:0] (Read/Write)
//         others  - reserved
// 0x01c : reserved
// 0x020 : Data signal of filter_2_V
//         bit 7~0 - filter_2_V[7:0] (Read/Write)
//         others  - reserved
// 0x024 : reserved
// 0x028 : Data signal of filter_3_V
//         bit 7~0 - filter_3_V[7:0] (Read/Write)
//         others  - reserved
// 0x02c : reserved
// 0x030 : Data signal of filter_4_V
//         bit 7~0 - filter_4_V[7:0] (Read/Write)
//         others  - reserved
// 0x034 : reserved
// 0x038 : Data signal of filter_5_V
//         bit 7~0 - filter_5_V[7:0] (Read/Write)
//         others  - reserved
// 0x03c : reserved
// 0x040 : Data signal of filter_6_V
//         bit 7~0 - filter_6_V[7:0] (Read/Write)
//         others  - reserved
// 0x044 : reserved
// 0x048 : Data signal of filter_7_V
//         bit 7~0 - filter_7_V[7:0] (Read/Write)
//         others  - reserved
// 0x04c : reserved
// 0x050 : Data signal of filter_8_V
//         bit 7~0 - filter_8_V[7:0] (Read/Write)
//         others  - reserved
// 0x054 : reserved
// 0x058 : Data signal of filter_9_V
//         bit 7~0 - filter_9_V[7:0] (Read/Write)
//         others  - reserved
// 0x05c : reserved
// 0x060 : Data signal of filter_10_V
//         bit 7~0 - filter_10_V[7:0] (Read/Write)
//         others  - reserved
// 0x064 : reserved
// 0x068 : Data signal of filter_11_V
//         bit 7~0 - filter_11_V[7:0] (Read/Write)
//         others  - reserved
// 0x06c : reserved
// 0x070 : Data signal of filter_12_V
//         bit 7~0 - filter_12_V[7:0] (Read/Write)
//         others  - reserved
// 0x074 : reserved
// 0x078 : Data signal of filter_13_V
//         bit 7~0 - filter_13_V[7:0] (Read/Write)
//         others  - reserved
// 0x07c : reserved
// 0x080 : Data signal of filter_14_V
//         bit 7~0 - filter_14_V[7:0] (Read/Write)
//         others  - reserved
// 0x084 : reserved
// 0x088 : Data signal of filter_15_V
//         bit 7~0 - filter_15_V[7:0] (Read/Write)
//         others  - reserved
// 0x08c : reserved
// 0x090 : Data signal of filter_16_V
//         bit 7~0 - filter_16_V[7:0] (Read/Write)
//         others  - reserved
// 0x094 : reserved
// 0x098 : Data signal of filter_17_V
//         bit 7~0 - filter_17_V[7:0] (Read/Write)
//         others  - reserved
// 0x09c : reserved
// 0x0a0 : Data signal of filter_18_V
//         bit 7~0 - filter_18_V[7:0] (Read/Write)
//         others  - reserved
// 0x0a4 : reserved
// 0x0a8 : Data signal of filter_19_V
//         bit 7~0 - filter_19_V[7:0] (Read/Write)
//         others  - reserved
// 0x0ac : reserved
// 0x0b0 : Data signal of filter_20_V
//         bit 7~0 - filter_20_V[7:0] (Read/Write)
//         others  - reserved
// 0x0b4 : reserved
// 0x0b8 : Data signal of filter_21_V
//         bit 7~0 - filter_21_V[7:0] (Read/Write)
//         others  - reserved
// 0x0bc : reserved
// 0x0c0 : Data signal of filter_22_V
//         bit 7~0 - filter_22_V[7:0] (Read/Write)
//         others  - reserved
// 0x0c4 : reserved
// 0x0c8 : Data signal of filter_23_V
//         bit 7~0 - filter_23_V[7:0] (Read/Write)
//         others  - reserved
// 0x0cc : reserved
// 0x0d0 : Data signal of filter_24_V
//         bit 7~0 - filter_24_V[7:0] (Read/Write)
//         others  - reserved
// 0x0d4 : reserved
// 0x0d8 : Data signal of filter_25_V
//         bit 7~0 - filter_25_V[7:0] (Read/Write)
//         others  - reserved
// 0x0dc : reserved
// 0x0e0 : Data signal of filter_26_V
//         bit 7~0 - filter_26_V[7:0] (Read/Write)
//         others  - reserved
// 0x0e4 : reserved
// 0x0e8 : Data signal of filter_27_V
//         bit 7~0 - filter_27_V[7:0] (Read/Write)
//         others  - reserved
// 0x0ec : reserved
// 0x0f0 : Data signal of filter_28_V
//         bit 7~0 - filter_28_V[7:0] (Read/Write)
//         others  - reserved
// 0x0f4 : reserved
// 0x0f8 : Data signal of filter_29_V
//         bit 7~0 - filter_29_V[7:0] (Read/Write)
//         others  - reserved
// 0x0fc : reserved
// 0x100 : Data signal of filter_30_V
//         bit 7~0 - filter_30_V[7:0] (Read/Write)
//         others  - reserved
// 0x104 : reserved
// 0x108 : Data signal of filter_31_V
//         bit 7~0 - filter_31_V[7:0] (Read/Write)
//         others  - reserved
// 0x10c : reserved
// 0x110 : Data signal of filter_32_V
//         bit 7~0 - filter_32_V[7:0] (Read/Write)
//         others  - reserved
// 0x114 : reserved
// 0x118 : Data signal of filter_33_V
//         bit 7~0 - filter_33_V[7:0] (Read/Write)
//         others  - reserved
// 0x11c : reserved
// 0x120 : Data signal of filter_34_V
//         bit 7~0 - filter_34_V[7:0] (Read/Write)
//         others  - reserved
// 0x124 : reserved
// 0x128 : Data signal of filter_35_V
//         bit 7~0 - filter_35_V[7:0] (Read/Write)
//         others  - reserved
// 0x12c : reserved
// 0x130 : Data signal of filter_36_V
//         bit 7~0 - filter_36_V[7:0] (Read/Write)
//         others  - reserved
// 0x134 : reserved
// 0x138 : Data signal of filter_37_V
//         bit 7~0 - filter_37_V[7:0] (Read/Write)
//         others  - reserved
// 0x13c : reserved
// 0x140 : Data signal of filter_38_V
//         bit 7~0 - filter_38_V[7:0] (Read/Write)
//         others  - reserved
// 0x144 : reserved
// 0x148 : Data signal of filter_39_V
//         bit 7~0 - filter_39_V[7:0] (Read/Write)
//         others  - reserved
// 0x14c : reserved
// 0x150 : Data signal of filter_40_V
//         bit 7~0 - filter_40_V[7:0] (Read/Write)
//         others  - reserved
// 0x154 : reserved
// 0x158 : Data signal of filter_41_V
//         bit 7~0 - filter_41_V[7:0] (Read/Write)
//         others  - reserved
// 0x15c : reserved
// 0x160 : Data signal of filter_42_V
//         bit 7~0 - filter_42_V[7:0] (Read/Write)
//         others  - reserved
// 0x164 : reserved
// 0x168 : Data signal of filter_43_V
//         bit 7~0 - filter_43_V[7:0] (Read/Write)
//         others  - reserved
// 0x16c : reserved
// 0x170 : Data signal of filter_44_V
//         bit 7~0 - filter_44_V[7:0] (Read/Write)
//         others  - reserved
// 0x174 : reserved
// 0x178 : Data signal of filter_45_V
//         bit 7~0 - filter_45_V[7:0] (Read/Write)
//         others  - reserved
// 0x17c : reserved
// 0x180 : Data signal of filter_46_V
//         bit 7~0 - filter_46_V[7:0] (Read/Write)
//         others  - reserved
// 0x184 : reserved
// 0x188 : Data signal of filter_47_V
//         bit 7~0 - filter_47_V[7:0] (Read/Write)
//         others  - reserved
// 0x18c : reserved
// 0x190 : Data signal of filter_48_V
//         bit 7~0 - filter_48_V[7:0] (Read/Write)
//         others  - reserved
// 0x194 : reserved
// 0x198 : Data signal of filter_49_V
//         bit 7~0 - filter_49_V[7:0] (Read/Write)
//         others  - reserved
// 0x19c : reserved
// 0x1a0 : Data signal of filter_50_V
//         bit 7~0 - filter_50_V[7:0] (Read/Write)
//         others  - reserved
// 0x1a4 : reserved
// 0x1a8 : Data signal of filter_51_V
//         bit 7~0 - filter_51_V[7:0] (Read/Write)
//         others  - reserved
// 0x1ac : reserved
// 0x1b0 : Data signal of filter_52_V
//         bit 7~0 - filter_52_V[7:0] (Read/Write)
//         others  - reserved
// 0x1b4 : reserved
// 0x1b8 : Data signal of filter_53_V
//         bit 7~0 - filter_53_V[7:0] (Read/Write)
//         others  - reserved
// 0x1bc : reserved
// 0x1c0 : Data signal of filter_54_V
//         bit 7~0 - filter_54_V[7:0] (Read/Write)
//         others  - reserved
// 0x1c4 : reserved
// 0x1c8 : Data signal of filter_55_V
//         bit 7~0 - filter_55_V[7:0] (Read/Write)
//         others  - reserved
// 0x1cc : reserved
// 0x1d0 : Data signal of filter_56_V
//         bit 7~0 - filter_56_V[7:0] (Read/Write)
//         others  - reserved
// 0x1d4 : reserved
// 0x1d8 : Data signal of filter_57_V
//         bit 7~0 - filter_57_V[7:0] (Read/Write)
//         others  - reserved
// 0x1dc : reserved
// 0x1e0 : Data signal of filter_58_V
//         bit 7~0 - filter_58_V[7:0] (Read/Write)
//         others  - reserved
// 0x1e4 : reserved
// 0x1e8 : Data signal of filter_59_V
//         bit 7~0 - filter_59_V[7:0] (Read/Write)
//         others  - reserved
// 0x1ec : reserved
// 0x1f0 : Data signal of filter_60_V
//         bit 7~0 - filter_60_V[7:0] (Read/Write)
//         others  - reserved
// 0x1f4 : reserved
// 0x1f8 : Data signal of filter_61_V
//         bit 7~0 - filter_61_V[7:0] (Read/Write)
//         others  - reserved
// 0x1fc : reserved
// 0x200 : Data signal of filter_62_V
//         bit 7~0 - filter_62_V[7:0] (Read/Write)
//         others  - reserved
// 0x204 : reserved
// 0x208 : Data signal of filter_63_V
//         bit 7~0 - filter_63_V[7:0] (Read/Write)
//         others  - reserved
// 0x20c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_FILTER_0_V_DATA_0  = 10'h010,
    ADDR_FILTER_0_V_CTRL    = 10'h014,
    ADDR_FILTER_1_V_DATA_0  = 10'h018,
    ADDR_FILTER_1_V_CTRL    = 10'h01c,
    ADDR_FILTER_2_V_DATA_0  = 10'h020,
    ADDR_FILTER_2_V_CTRL    = 10'h024,
    ADDR_FILTER_3_V_DATA_0  = 10'h028,
    ADDR_FILTER_3_V_CTRL    = 10'h02c,
    ADDR_FILTER_4_V_DATA_0  = 10'h030,
    ADDR_FILTER_4_V_CTRL    = 10'h034,
    ADDR_FILTER_5_V_DATA_0  = 10'h038,
    ADDR_FILTER_5_V_CTRL    = 10'h03c,
    ADDR_FILTER_6_V_DATA_0  = 10'h040,
    ADDR_FILTER_6_V_CTRL    = 10'h044,
    ADDR_FILTER_7_V_DATA_0  = 10'h048,
    ADDR_FILTER_7_V_CTRL    = 10'h04c,
    ADDR_FILTER_8_V_DATA_0  = 10'h050,
    ADDR_FILTER_8_V_CTRL    = 10'h054,
    ADDR_FILTER_9_V_DATA_0  = 10'h058,
    ADDR_FILTER_9_V_CTRL    = 10'h05c,
    ADDR_FILTER_10_V_DATA_0 = 10'h060,
    ADDR_FILTER_10_V_CTRL   = 10'h064,
    ADDR_FILTER_11_V_DATA_0 = 10'h068,
    ADDR_FILTER_11_V_CTRL   = 10'h06c,
    ADDR_FILTER_12_V_DATA_0 = 10'h070,
    ADDR_FILTER_12_V_CTRL   = 10'h074,
    ADDR_FILTER_13_V_DATA_0 = 10'h078,
    ADDR_FILTER_13_V_CTRL   = 10'h07c,
    ADDR_FILTER_14_V_DATA_0 = 10'h080,
    ADDR_FILTER_14_V_CTRL   = 10'h084,
    ADDR_FILTER_15_V_DATA_0 = 10'h088,
    ADDR_FILTER_15_V_CTRL   = 10'h08c,
    ADDR_FILTER_16_V_DATA_0 = 10'h090,
    ADDR_FILTER_16_V_CTRL   = 10'h094,
    ADDR_FILTER_17_V_DATA_0 = 10'h098,
    ADDR_FILTER_17_V_CTRL   = 10'h09c,
    ADDR_FILTER_18_V_DATA_0 = 10'h0a0,
    ADDR_FILTER_18_V_CTRL   = 10'h0a4,
    ADDR_FILTER_19_V_DATA_0 = 10'h0a8,
    ADDR_FILTER_19_V_CTRL   = 10'h0ac,
    ADDR_FILTER_20_V_DATA_0 = 10'h0b0,
    ADDR_FILTER_20_V_CTRL   = 10'h0b4,
    ADDR_FILTER_21_V_DATA_0 = 10'h0b8,
    ADDR_FILTER_21_V_CTRL   = 10'h0bc,
    ADDR_FILTER_22_V_DATA_0 = 10'h0c0,
    ADDR_FILTER_22_V_CTRL   = 10'h0c4,
    ADDR_FILTER_23_V_DATA_0 = 10'h0c8,
    ADDR_FILTER_23_V_CTRL   = 10'h0cc,
    ADDR_FILTER_24_V_DATA_0 = 10'h0d0,
    ADDR_FILTER_24_V_CTRL   = 10'h0d4,
    ADDR_FILTER_25_V_DATA_0 = 10'h0d8,
    ADDR_FILTER_25_V_CTRL   = 10'h0dc,
    ADDR_FILTER_26_V_DATA_0 = 10'h0e0,
    ADDR_FILTER_26_V_CTRL   = 10'h0e4,
    ADDR_FILTER_27_V_DATA_0 = 10'h0e8,
    ADDR_FILTER_27_V_CTRL   = 10'h0ec,
    ADDR_FILTER_28_V_DATA_0 = 10'h0f0,
    ADDR_FILTER_28_V_CTRL   = 10'h0f4,
    ADDR_FILTER_29_V_DATA_0 = 10'h0f8,
    ADDR_FILTER_29_V_CTRL   = 10'h0fc,
    ADDR_FILTER_30_V_DATA_0 = 10'h100,
    ADDR_FILTER_30_V_CTRL   = 10'h104,
    ADDR_FILTER_31_V_DATA_0 = 10'h108,
    ADDR_FILTER_31_V_CTRL   = 10'h10c,
    ADDR_FILTER_32_V_DATA_0 = 10'h110,
    ADDR_FILTER_32_V_CTRL   = 10'h114,
    ADDR_FILTER_33_V_DATA_0 = 10'h118,
    ADDR_FILTER_33_V_CTRL   = 10'h11c,
    ADDR_FILTER_34_V_DATA_0 = 10'h120,
    ADDR_FILTER_34_V_CTRL   = 10'h124,
    ADDR_FILTER_35_V_DATA_0 = 10'h128,
    ADDR_FILTER_35_V_CTRL   = 10'h12c,
    ADDR_FILTER_36_V_DATA_0 = 10'h130,
    ADDR_FILTER_36_V_CTRL   = 10'h134,
    ADDR_FILTER_37_V_DATA_0 = 10'h138,
    ADDR_FILTER_37_V_CTRL   = 10'h13c,
    ADDR_FILTER_38_V_DATA_0 = 10'h140,
    ADDR_FILTER_38_V_CTRL   = 10'h144,
    ADDR_FILTER_39_V_DATA_0 = 10'h148,
    ADDR_FILTER_39_V_CTRL   = 10'h14c,
    ADDR_FILTER_40_V_DATA_0 = 10'h150,
    ADDR_FILTER_40_V_CTRL   = 10'h154,
    ADDR_FILTER_41_V_DATA_0 = 10'h158,
    ADDR_FILTER_41_V_CTRL   = 10'h15c,
    ADDR_FILTER_42_V_DATA_0 = 10'h160,
    ADDR_FILTER_42_V_CTRL   = 10'h164,
    ADDR_FILTER_43_V_DATA_0 = 10'h168,
    ADDR_FILTER_43_V_CTRL   = 10'h16c,
    ADDR_FILTER_44_V_DATA_0 = 10'h170,
    ADDR_FILTER_44_V_CTRL   = 10'h174,
    ADDR_FILTER_45_V_DATA_0 = 10'h178,
    ADDR_FILTER_45_V_CTRL   = 10'h17c,
    ADDR_FILTER_46_V_DATA_0 = 10'h180,
    ADDR_FILTER_46_V_CTRL   = 10'h184,
    ADDR_FILTER_47_V_DATA_0 = 10'h188,
    ADDR_FILTER_47_V_CTRL   = 10'h18c,
    ADDR_FILTER_48_V_DATA_0 = 10'h190,
    ADDR_FILTER_48_V_CTRL   = 10'h194,
    ADDR_FILTER_49_V_DATA_0 = 10'h198,
    ADDR_FILTER_49_V_CTRL   = 10'h19c,
    ADDR_FILTER_50_V_DATA_0 = 10'h1a0,
    ADDR_FILTER_50_V_CTRL   = 10'h1a4,
    ADDR_FILTER_51_V_DATA_0 = 10'h1a8,
    ADDR_FILTER_51_V_CTRL   = 10'h1ac,
    ADDR_FILTER_52_V_DATA_0 = 10'h1b0,
    ADDR_FILTER_52_V_CTRL   = 10'h1b4,
    ADDR_FILTER_53_V_DATA_0 = 10'h1b8,
    ADDR_FILTER_53_V_CTRL   = 10'h1bc,
    ADDR_FILTER_54_V_DATA_0 = 10'h1c0,
    ADDR_FILTER_54_V_CTRL   = 10'h1c4,
    ADDR_FILTER_55_V_DATA_0 = 10'h1c8,
    ADDR_FILTER_55_V_CTRL   = 10'h1cc,
    ADDR_FILTER_56_V_DATA_0 = 10'h1d0,
    ADDR_FILTER_56_V_CTRL   = 10'h1d4,
    ADDR_FILTER_57_V_DATA_0 = 10'h1d8,
    ADDR_FILTER_57_V_CTRL   = 10'h1dc,
    ADDR_FILTER_58_V_DATA_0 = 10'h1e0,
    ADDR_FILTER_58_V_CTRL   = 10'h1e4,
    ADDR_FILTER_59_V_DATA_0 = 10'h1e8,
    ADDR_FILTER_59_V_CTRL   = 10'h1ec,
    ADDR_FILTER_60_V_DATA_0 = 10'h1f0,
    ADDR_FILTER_60_V_CTRL   = 10'h1f4,
    ADDR_FILTER_61_V_DATA_0 = 10'h1f8,
    ADDR_FILTER_61_V_CTRL   = 10'h1fc,
    ADDR_FILTER_62_V_DATA_0 = 10'h200,
    ADDR_FILTER_62_V_CTRL   = 10'h204,
    ADDR_FILTER_63_V_DATA_0 = 10'h208,
    ADDR_FILTER_63_V_CTRL   = 10'h20c,
    WRIDLE                  = 2'd0,
    WRDATA                  = 2'd1,
    WRRESP                  = 2'd2,
    WRRESET                 = 2'd3,
    RDIDLE                  = 2'd0,
    RDDATA                  = 2'd1,
    RDRESET                 = 2'd2,
    ADDR_BITS         = 10;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [31:0]                   wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [31:0]                   rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // internal registers
    reg  [7:0]                    int_filter_0_V = 'b0;
    reg  [7:0]                    int_filter_1_V = 'b0;
    reg  [7:0]                    int_filter_2_V = 'b0;
    reg  [7:0]                    int_filter_3_V = 'b0;
    reg  [7:0]                    int_filter_4_V = 'b0;
    reg  [7:0]                    int_filter_5_V = 'b0;
    reg  [7:0]                    int_filter_6_V = 'b0;
    reg  [7:0]                    int_filter_7_V = 'b0;
    reg  [7:0]                    int_filter_8_V = 'b0;
    reg  [7:0]                    int_filter_9_V = 'b0;
    reg  [7:0]                    int_filter_10_V = 'b0;
    reg  [7:0]                    int_filter_11_V = 'b0;
    reg  [7:0]                    int_filter_12_V = 'b0;
    reg  [7:0]                    int_filter_13_V = 'b0;
    reg  [7:0]                    int_filter_14_V = 'b0;
    reg  [7:0]                    int_filter_15_V = 'b0;
    reg  [7:0]                    int_filter_16_V = 'b0;
    reg  [7:0]                    int_filter_17_V = 'b0;
    reg  [7:0]                    int_filter_18_V = 'b0;
    reg  [7:0]                    int_filter_19_V = 'b0;
    reg  [7:0]                    int_filter_20_V = 'b0;
    reg  [7:0]                    int_filter_21_V = 'b0;
    reg  [7:0]                    int_filter_22_V = 'b0;
    reg  [7:0]                    int_filter_23_V = 'b0;
    reg  [7:0]                    int_filter_24_V = 'b0;
    reg  [7:0]                    int_filter_25_V = 'b0;
    reg  [7:0]                    int_filter_26_V = 'b0;
    reg  [7:0]                    int_filter_27_V = 'b0;
    reg  [7:0]                    int_filter_28_V = 'b0;
    reg  [7:0]                    int_filter_29_V = 'b0;
    reg  [7:0]                    int_filter_30_V = 'b0;
    reg  [7:0]                    int_filter_31_V = 'b0;
    reg  [7:0]                    int_filter_32_V = 'b0;
    reg  [7:0]                    int_filter_33_V = 'b0;
    reg  [7:0]                    int_filter_34_V = 'b0;
    reg  [7:0]                    int_filter_35_V = 'b0;
    reg  [7:0]                    int_filter_36_V = 'b0;
    reg  [7:0]                    int_filter_37_V = 'b0;
    reg  [7:0]                    int_filter_38_V = 'b0;
    reg  [7:0]                    int_filter_39_V = 'b0;
    reg  [7:0]                    int_filter_40_V = 'b0;
    reg  [7:0]                    int_filter_41_V = 'b0;
    reg  [7:0]                    int_filter_42_V = 'b0;
    reg  [7:0]                    int_filter_43_V = 'b0;
    reg  [7:0]                    int_filter_44_V = 'b0;
    reg  [7:0]                    int_filter_45_V = 'b0;
    reg  [7:0]                    int_filter_46_V = 'b0;
    reg  [7:0]                    int_filter_47_V = 'b0;
    reg  [7:0]                    int_filter_48_V = 'b0;
    reg  [7:0]                    int_filter_49_V = 'b0;
    reg  [7:0]                    int_filter_50_V = 'b0;
    reg  [7:0]                    int_filter_51_V = 'b0;
    reg  [7:0]                    int_filter_52_V = 'b0;
    reg  [7:0]                    int_filter_53_V = 'b0;
    reg  [7:0]                    int_filter_54_V = 'b0;
    reg  [7:0]                    int_filter_55_V = 'b0;
    reg  [7:0]                    int_filter_56_V = 'b0;
    reg  [7:0]                    int_filter_57_V = 'b0;
    reg  [7:0]                    int_filter_58_V = 'b0;
    reg  [7:0]                    int_filter_59_V = 'b0;
    reg  [7:0]                    int_filter_60_V = 'b0;
    reg  [7:0]                    int_filter_61_V = 'b0;
    reg  [7:0]                    int_filter_62_V = 'b0;
    reg  [7:0]                    int_filter_63_V = 'b0;

//------------------------Instantiation------------------

//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= AWADDR[ADDR_BITS-1:0];
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA);
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 1'b0;
            case (raddr)
                ADDR_FILTER_0_V_DATA_0: begin
                    rdata <= int_filter_0_V[7:0];
                end
                ADDR_FILTER_1_V_DATA_0: begin
                    rdata <= int_filter_1_V[7:0];
                end
                ADDR_FILTER_2_V_DATA_0: begin
                    rdata <= int_filter_2_V[7:0];
                end
                ADDR_FILTER_3_V_DATA_0: begin
                    rdata <= int_filter_3_V[7:0];
                end
                ADDR_FILTER_4_V_DATA_0: begin
                    rdata <= int_filter_4_V[7:0];
                end
                ADDR_FILTER_5_V_DATA_0: begin
                    rdata <= int_filter_5_V[7:0];
                end
                ADDR_FILTER_6_V_DATA_0: begin
                    rdata <= int_filter_6_V[7:0];
                end
                ADDR_FILTER_7_V_DATA_0: begin
                    rdata <= int_filter_7_V[7:0];
                end
                ADDR_FILTER_8_V_DATA_0: begin
                    rdata <= int_filter_8_V[7:0];
                end
                ADDR_FILTER_9_V_DATA_0: begin
                    rdata <= int_filter_9_V[7:0];
                end
                ADDR_FILTER_10_V_DATA_0: begin
                    rdata <= int_filter_10_V[7:0];
                end
                ADDR_FILTER_11_V_DATA_0: begin
                    rdata <= int_filter_11_V[7:0];
                end
                ADDR_FILTER_12_V_DATA_0: begin
                    rdata <= int_filter_12_V[7:0];
                end
                ADDR_FILTER_13_V_DATA_0: begin
                    rdata <= int_filter_13_V[7:0];
                end
                ADDR_FILTER_14_V_DATA_0: begin
                    rdata <= int_filter_14_V[7:0];
                end
                ADDR_FILTER_15_V_DATA_0: begin
                    rdata <= int_filter_15_V[7:0];
                end
                ADDR_FILTER_16_V_DATA_0: begin
                    rdata <= int_filter_16_V[7:0];
                end
                ADDR_FILTER_17_V_DATA_0: begin
                    rdata <= int_filter_17_V[7:0];
                end
                ADDR_FILTER_18_V_DATA_0: begin
                    rdata <= int_filter_18_V[7:0];
                end
                ADDR_FILTER_19_V_DATA_0: begin
                    rdata <= int_filter_19_V[7:0];
                end
                ADDR_FILTER_20_V_DATA_0: begin
                    rdata <= int_filter_20_V[7:0];
                end
                ADDR_FILTER_21_V_DATA_0: begin
                    rdata <= int_filter_21_V[7:0];
                end
                ADDR_FILTER_22_V_DATA_0: begin
                    rdata <= int_filter_22_V[7:0];
                end
                ADDR_FILTER_23_V_DATA_0: begin
                    rdata <= int_filter_23_V[7:0];
                end
                ADDR_FILTER_24_V_DATA_0: begin
                    rdata <= int_filter_24_V[7:0];
                end
                ADDR_FILTER_25_V_DATA_0: begin
                    rdata <= int_filter_25_V[7:0];
                end
                ADDR_FILTER_26_V_DATA_0: begin
                    rdata <= int_filter_26_V[7:0];
                end
                ADDR_FILTER_27_V_DATA_0: begin
                    rdata <= int_filter_27_V[7:0];
                end
                ADDR_FILTER_28_V_DATA_0: begin
                    rdata <= int_filter_28_V[7:0];
                end
                ADDR_FILTER_29_V_DATA_0: begin
                    rdata <= int_filter_29_V[7:0];
                end
                ADDR_FILTER_30_V_DATA_0: begin
                    rdata <= int_filter_30_V[7:0];
                end
                ADDR_FILTER_31_V_DATA_0: begin
                    rdata <= int_filter_31_V[7:0];
                end
                ADDR_FILTER_32_V_DATA_0: begin
                    rdata <= int_filter_32_V[7:0];
                end
                ADDR_FILTER_33_V_DATA_0: begin
                    rdata <= int_filter_33_V[7:0];
                end
                ADDR_FILTER_34_V_DATA_0: begin
                    rdata <= int_filter_34_V[7:0];
                end
                ADDR_FILTER_35_V_DATA_0: begin
                    rdata <= int_filter_35_V[7:0];
                end
                ADDR_FILTER_36_V_DATA_0: begin
                    rdata <= int_filter_36_V[7:0];
                end
                ADDR_FILTER_37_V_DATA_0: begin
                    rdata <= int_filter_37_V[7:0];
                end
                ADDR_FILTER_38_V_DATA_0: begin
                    rdata <= int_filter_38_V[7:0];
                end
                ADDR_FILTER_39_V_DATA_0: begin
                    rdata <= int_filter_39_V[7:0];
                end
                ADDR_FILTER_40_V_DATA_0: begin
                    rdata <= int_filter_40_V[7:0];
                end
                ADDR_FILTER_41_V_DATA_0: begin
                    rdata <= int_filter_41_V[7:0];
                end
                ADDR_FILTER_42_V_DATA_0: begin
                    rdata <= int_filter_42_V[7:0];
                end
                ADDR_FILTER_43_V_DATA_0: begin
                    rdata <= int_filter_43_V[7:0];
                end
                ADDR_FILTER_44_V_DATA_0: begin
                    rdata <= int_filter_44_V[7:0];
                end
                ADDR_FILTER_45_V_DATA_0: begin
                    rdata <= int_filter_45_V[7:0];
                end
                ADDR_FILTER_46_V_DATA_0: begin
                    rdata <= int_filter_46_V[7:0];
                end
                ADDR_FILTER_47_V_DATA_0: begin
                    rdata <= int_filter_47_V[7:0];
                end
                ADDR_FILTER_48_V_DATA_0: begin
                    rdata <= int_filter_48_V[7:0];
                end
                ADDR_FILTER_49_V_DATA_0: begin
                    rdata <= int_filter_49_V[7:0];
                end
                ADDR_FILTER_50_V_DATA_0: begin
                    rdata <= int_filter_50_V[7:0];
                end
                ADDR_FILTER_51_V_DATA_0: begin
                    rdata <= int_filter_51_V[7:0];
                end
                ADDR_FILTER_52_V_DATA_0: begin
                    rdata <= int_filter_52_V[7:0];
                end
                ADDR_FILTER_53_V_DATA_0: begin
                    rdata <= int_filter_53_V[7:0];
                end
                ADDR_FILTER_54_V_DATA_0: begin
                    rdata <= int_filter_54_V[7:0];
                end
                ADDR_FILTER_55_V_DATA_0: begin
                    rdata <= int_filter_55_V[7:0];
                end
                ADDR_FILTER_56_V_DATA_0: begin
                    rdata <= int_filter_56_V[7:0];
                end
                ADDR_FILTER_57_V_DATA_0: begin
                    rdata <= int_filter_57_V[7:0];
                end
                ADDR_FILTER_58_V_DATA_0: begin
                    rdata <= int_filter_58_V[7:0];
                end
                ADDR_FILTER_59_V_DATA_0: begin
                    rdata <= int_filter_59_V[7:0];
                end
                ADDR_FILTER_60_V_DATA_0: begin
                    rdata <= int_filter_60_V[7:0];
                end
                ADDR_FILTER_61_V_DATA_0: begin
                    rdata <= int_filter_61_V[7:0];
                end
                ADDR_FILTER_62_V_DATA_0: begin
                    rdata <= int_filter_62_V[7:0];
                end
                ADDR_FILTER_63_V_DATA_0: begin
                    rdata <= int_filter_63_V[7:0];
                end
            endcase
        end
    end
end


//------------------------Register logic-----------------
assign filter_0_V  = int_filter_0_V;
assign filter_1_V  = int_filter_1_V;
assign filter_2_V  = int_filter_2_V;
assign filter_3_V  = int_filter_3_V;
assign filter_4_V  = int_filter_4_V;
assign filter_5_V  = int_filter_5_V;
assign filter_6_V  = int_filter_6_V;
assign filter_7_V  = int_filter_7_V;
assign filter_8_V  = int_filter_8_V;
assign filter_9_V  = int_filter_9_V;
assign filter_10_V = int_filter_10_V;
assign filter_11_V = int_filter_11_V;
assign filter_12_V = int_filter_12_V;
assign filter_13_V = int_filter_13_V;
assign filter_14_V = int_filter_14_V;
assign filter_15_V = int_filter_15_V;
assign filter_16_V = int_filter_16_V;
assign filter_17_V = int_filter_17_V;
assign filter_18_V = int_filter_18_V;
assign filter_19_V = int_filter_19_V;
assign filter_20_V = int_filter_20_V;
assign filter_21_V = int_filter_21_V;
assign filter_22_V = int_filter_22_V;
assign filter_23_V = int_filter_23_V;
assign filter_24_V = int_filter_24_V;
assign filter_25_V = int_filter_25_V;
assign filter_26_V = int_filter_26_V;
assign filter_27_V = int_filter_27_V;
assign filter_28_V = int_filter_28_V;
assign filter_29_V = int_filter_29_V;
assign filter_30_V = int_filter_30_V;
assign filter_31_V = int_filter_31_V;
assign filter_32_V = int_filter_32_V;
assign filter_33_V = int_filter_33_V;
assign filter_34_V = int_filter_34_V;
assign filter_35_V = int_filter_35_V;
assign filter_36_V = int_filter_36_V;
assign filter_37_V = int_filter_37_V;
assign filter_38_V = int_filter_38_V;
assign filter_39_V = int_filter_39_V;
assign filter_40_V = int_filter_40_V;
assign filter_41_V = int_filter_41_V;
assign filter_42_V = int_filter_42_V;
assign filter_43_V = int_filter_43_V;
assign filter_44_V = int_filter_44_V;
assign filter_45_V = int_filter_45_V;
assign filter_46_V = int_filter_46_V;
assign filter_47_V = int_filter_47_V;
assign filter_48_V = int_filter_48_V;
assign filter_49_V = int_filter_49_V;
assign filter_50_V = int_filter_50_V;
assign filter_51_V = int_filter_51_V;
assign filter_52_V = int_filter_52_V;
assign filter_53_V = int_filter_53_V;
assign filter_54_V = int_filter_54_V;
assign filter_55_V = int_filter_55_V;
assign filter_56_V = int_filter_56_V;
assign filter_57_V = int_filter_57_V;
assign filter_58_V = int_filter_58_V;
assign filter_59_V = int_filter_59_V;
assign filter_60_V = int_filter_60_V;
assign filter_61_V = int_filter_61_V;
assign filter_62_V = int_filter_62_V;
assign filter_63_V = int_filter_63_V;
// int_filter_0_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_0_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_0_V_DATA_0)
            int_filter_0_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_0_V[7:0] & ~wmask);
    end
end

// int_filter_1_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_1_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_1_V_DATA_0)
            int_filter_1_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_1_V[7:0] & ~wmask);
    end
end

// int_filter_2_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_2_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_2_V_DATA_0)
            int_filter_2_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_2_V[7:0] & ~wmask);
    end
end

// int_filter_3_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_3_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_3_V_DATA_0)
            int_filter_3_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_3_V[7:0] & ~wmask);
    end
end

// int_filter_4_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_4_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_4_V_DATA_0)
            int_filter_4_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_4_V[7:0] & ~wmask);
    end
end

// int_filter_5_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_5_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_5_V_DATA_0)
            int_filter_5_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_5_V[7:0] & ~wmask);
    end
end

// int_filter_6_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_6_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_6_V_DATA_0)
            int_filter_6_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_6_V[7:0] & ~wmask);
    end
end

// int_filter_7_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_7_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_7_V_DATA_0)
            int_filter_7_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_7_V[7:0] & ~wmask);
    end
end

// int_filter_8_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_8_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_8_V_DATA_0)
            int_filter_8_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_8_V[7:0] & ~wmask);
    end
end

// int_filter_9_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_9_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_9_V_DATA_0)
            int_filter_9_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_9_V[7:0] & ~wmask);
    end
end

// int_filter_10_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_10_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_10_V_DATA_0)
            int_filter_10_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_10_V[7:0] & ~wmask);
    end
end

// int_filter_11_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_11_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_11_V_DATA_0)
            int_filter_11_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_11_V[7:0] & ~wmask);
    end
end

// int_filter_12_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_12_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_12_V_DATA_0)
            int_filter_12_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_12_V[7:0] & ~wmask);
    end
end

// int_filter_13_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_13_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_13_V_DATA_0)
            int_filter_13_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_13_V[7:0] & ~wmask);
    end
end

// int_filter_14_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_14_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_14_V_DATA_0)
            int_filter_14_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_14_V[7:0] & ~wmask);
    end
end

// int_filter_15_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_15_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_15_V_DATA_0)
            int_filter_15_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_15_V[7:0] & ~wmask);
    end
end

// int_filter_16_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_16_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_16_V_DATA_0)
            int_filter_16_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_16_V[7:0] & ~wmask);
    end
end

// int_filter_17_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_17_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_17_V_DATA_0)
            int_filter_17_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_17_V[7:0] & ~wmask);
    end
end

// int_filter_18_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_18_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_18_V_DATA_0)
            int_filter_18_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_18_V[7:0] & ~wmask);
    end
end

// int_filter_19_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_19_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_19_V_DATA_0)
            int_filter_19_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_19_V[7:0] & ~wmask);
    end
end

// int_filter_20_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_20_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_20_V_DATA_0)
            int_filter_20_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_20_V[7:0] & ~wmask);
    end
end

// int_filter_21_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_21_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_21_V_DATA_0)
            int_filter_21_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_21_V[7:0] & ~wmask);
    end
end

// int_filter_22_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_22_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_22_V_DATA_0)
            int_filter_22_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_22_V[7:0] & ~wmask);
    end
end

// int_filter_23_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_23_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_23_V_DATA_0)
            int_filter_23_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_23_V[7:0] & ~wmask);
    end
end

// int_filter_24_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_24_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_24_V_DATA_0)
            int_filter_24_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_24_V[7:0] & ~wmask);
    end
end

// int_filter_25_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_25_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_25_V_DATA_0)
            int_filter_25_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_25_V[7:0] & ~wmask);
    end
end

// int_filter_26_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_26_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_26_V_DATA_0)
            int_filter_26_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_26_V[7:0] & ~wmask);
    end
end

// int_filter_27_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_27_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_27_V_DATA_0)
            int_filter_27_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_27_V[7:0] & ~wmask);
    end
end

// int_filter_28_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_28_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_28_V_DATA_0)
            int_filter_28_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_28_V[7:0] & ~wmask);
    end
end

// int_filter_29_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_29_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_29_V_DATA_0)
            int_filter_29_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_29_V[7:0] & ~wmask);
    end
end

// int_filter_30_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_30_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_30_V_DATA_0)
            int_filter_30_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_30_V[7:0] & ~wmask);
    end
end

// int_filter_31_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_31_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_31_V_DATA_0)
            int_filter_31_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_31_V[7:0] & ~wmask);
    end
end

// int_filter_32_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_32_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_32_V_DATA_0)
            int_filter_32_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_32_V[7:0] & ~wmask);
    end
end

// int_filter_33_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_33_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_33_V_DATA_0)
            int_filter_33_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_33_V[7:0] & ~wmask);
    end
end

// int_filter_34_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_34_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_34_V_DATA_0)
            int_filter_34_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_34_V[7:0] & ~wmask);
    end
end

// int_filter_35_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_35_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_35_V_DATA_0)
            int_filter_35_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_35_V[7:0] & ~wmask);
    end
end

// int_filter_36_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_36_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_36_V_DATA_0)
            int_filter_36_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_36_V[7:0] & ~wmask);
    end
end

// int_filter_37_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_37_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_37_V_DATA_0)
            int_filter_37_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_37_V[7:0] & ~wmask);
    end
end

// int_filter_38_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_38_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_38_V_DATA_0)
            int_filter_38_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_38_V[7:0] & ~wmask);
    end
end

// int_filter_39_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_39_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_39_V_DATA_0)
            int_filter_39_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_39_V[7:0] & ~wmask);
    end
end

// int_filter_40_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_40_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_40_V_DATA_0)
            int_filter_40_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_40_V[7:0] & ~wmask);
    end
end

// int_filter_41_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_41_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_41_V_DATA_0)
            int_filter_41_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_41_V[7:0] & ~wmask);
    end
end

// int_filter_42_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_42_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_42_V_DATA_0)
            int_filter_42_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_42_V[7:0] & ~wmask);
    end
end

// int_filter_43_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_43_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_43_V_DATA_0)
            int_filter_43_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_43_V[7:0] & ~wmask);
    end
end

// int_filter_44_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_44_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_44_V_DATA_0)
            int_filter_44_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_44_V[7:0] & ~wmask);
    end
end

// int_filter_45_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_45_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_45_V_DATA_0)
            int_filter_45_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_45_V[7:0] & ~wmask);
    end
end

// int_filter_46_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_46_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_46_V_DATA_0)
            int_filter_46_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_46_V[7:0] & ~wmask);
    end
end

// int_filter_47_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_47_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_47_V_DATA_0)
            int_filter_47_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_47_V[7:0] & ~wmask);
    end
end

// int_filter_48_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_48_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_48_V_DATA_0)
            int_filter_48_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_48_V[7:0] & ~wmask);
    end
end

// int_filter_49_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_49_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_49_V_DATA_0)
            int_filter_49_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_49_V[7:0] & ~wmask);
    end
end

// int_filter_50_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_50_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_50_V_DATA_0)
            int_filter_50_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_50_V[7:0] & ~wmask);
    end
end

// int_filter_51_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_51_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_51_V_DATA_0)
            int_filter_51_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_51_V[7:0] & ~wmask);
    end
end

// int_filter_52_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_52_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_52_V_DATA_0)
            int_filter_52_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_52_V[7:0] & ~wmask);
    end
end

// int_filter_53_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_53_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_53_V_DATA_0)
            int_filter_53_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_53_V[7:0] & ~wmask);
    end
end

// int_filter_54_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_54_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_54_V_DATA_0)
            int_filter_54_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_54_V[7:0] & ~wmask);
    end
end

// int_filter_55_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_55_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_55_V_DATA_0)
            int_filter_55_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_55_V[7:0] & ~wmask);
    end
end

// int_filter_56_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_56_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_56_V_DATA_0)
            int_filter_56_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_56_V[7:0] & ~wmask);
    end
end

// int_filter_57_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_57_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_57_V_DATA_0)
            int_filter_57_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_57_V[7:0] & ~wmask);
    end
end

// int_filter_58_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_58_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_58_V_DATA_0)
            int_filter_58_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_58_V[7:0] & ~wmask);
    end
end

// int_filter_59_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_59_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_59_V_DATA_0)
            int_filter_59_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_59_V[7:0] & ~wmask);
    end
end

// int_filter_60_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_60_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_60_V_DATA_0)
            int_filter_60_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_60_V[7:0] & ~wmask);
    end
end

// int_filter_61_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_61_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_61_V_DATA_0)
            int_filter_61_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_61_V[7:0] & ~wmask);
    end
end

// int_filter_62_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_62_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_62_V_DATA_0)
            int_filter_62_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_62_V[7:0] & ~wmask);
    end
end

// int_filter_63_V[7:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_63_V[7:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_63_V_DATA_0)
            int_filter_63_V[7:0] <= (WDATA[31:0] & wmask) | (int_filter_63_V[7:0] & ~wmask);
    end
end


//------------------------Memory logic-------------------

endmodule
