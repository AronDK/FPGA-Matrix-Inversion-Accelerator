// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xfir_stream.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XFir_stream_CfgInitialize(XFir_stream *InstancePtr, XFir_stream_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XFir_stream_Set_filter_0_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_0_V_DATA, Data);
}

u32 XFir_stream_Get_filter_0_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_0_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_1_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_1_V_DATA, Data);
}

u32 XFir_stream_Get_filter_1_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_1_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_2_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_2_V_DATA, Data);
}

u32 XFir_stream_Get_filter_2_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_2_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_3_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_3_V_DATA, Data);
}

u32 XFir_stream_Get_filter_3_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_3_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_4_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_4_V_DATA, Data);
}

u32 XFir_stream_Get_filter_4_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_4_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_5_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_5_V_DATA, Data);
}

u32 XFir_stream_Get_filter_5_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_5_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_6_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_6_V_DATA, Data);
}

u32 XFir_stream_Get_filter_6_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_6_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_7_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_7_V_DATA, Data);
}

u32 XFir_stream_Get_filter_7_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_7_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_8_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_8_V_DATA, Data);
}

u32 XFir_stream_Get_filter_8_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_8_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_9_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_9_V_DATA, Data);
}

u32 XFir_stream_Get_filter_9_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_9_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_10_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_10_V_DATA, Data);
}

u32 XFir_stream_Get_filter_10_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_10_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_11_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_11_V_DATA, Data);
}

u32 XFir_stream_Get_filter_11_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_11_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_12_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_12_V_DATA, Data);
}

u32 XFir_stream_Get_filter_12_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_12_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_13_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_13_V_DATA, Data);
}

u32 XFir_stream_Get_filter_13_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_13_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_14_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_14_V_DATA, Data);
}

u32 XFir_stream_Get_filter_14_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_14_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_15_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_15_V_DATA, Data);
}

u32 XFir_stream_Get_filter_15_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_15_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_16_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_16_V_DATA, Data);
}

u32 XFir_stream_Get_filter_16_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_16_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_17_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_17_V_DATA, Data);
}

u32 XFir_stream_Get_filter_17_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_17_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_18_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_18_V_DATA, Data);
}

u32 XFir_stream_Get_filter_18_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_18_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_19_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_19_V_DATA, Data);
}

u32 XFir_stream_Get_filter_19_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_19_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_20_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_20_V_DATA, Data);
}

u32 XFir_stream_Get_filter_20_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_20_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_21_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_21_V_DATA, Data);
}

u32 XFir_stream_Get_filter_21_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_21_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_22_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_22_V_DATA, Data);
}

u32 XFir_stream_Get_filter_22_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_22_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_23_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_23_V_DATA, Data);
}

u32 XFir_stream_Get_filter_23_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_23_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_24_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_24_V_DATA, Data);
}

u32 XFir_stream_Get_filter_24_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_24_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_25_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_25_V_DATA, Data);
}

u32 XFir_stream_Get_filter_25_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_25_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_26_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_26_V_DATA, Data);
}

u32 XFir_stream_Get_filter_26_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_26_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_27_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_27_V_DATA, Data);
}

u32 XFir_stream_Get_filter_27_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_27_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_28_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_28_V_DATA, Data);
}

u32 XFir_stream_Get_filter_28_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_28_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_29_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_29_V_DATA, Data);
}

u32 XFir_stream_Get_filter_29_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_29_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_30_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_30_V_DATA, Data);
}

u32 XFir_stream_Get_filter_30_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_30_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_31_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_31_V_DATA, Data);
}

u32 XFir_stream_Get_filter_31_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_31_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_32_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_32_V_DATA, Data);
}

u32 XFir_stream_Get_filter_32_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_32_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_33_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_33_V_DATA, Data);
}

u32 XFir_stream_Get_filter_33_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_33_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_34_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_34_V_DATA, Data);
}

u32 XFir_stream_Get_filter_34_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_34_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_35_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_35_V_DATA, Data);
}

u32 XFir_stream_Get_filter_35_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_35_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_36_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_36_V_DATA, Data);
}

u32 XFir_stream_Get_filter_36_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_36_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_37_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_37_V_DATA, Data);
}

u32 XFir_stream_Get_filter_37_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_37_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_38_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_38_V_DATA, Data);
}

u32 XFir_stream_Get_filter_38_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_38_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_39_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_39_V_DATA, Data);
}

u32 XFir_stream_Get_filter_39_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_39_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_40_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_40_V_DATA, Data);
}

u32 XFir_stream_Get_filter_40_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_40_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_41_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_41_V_DATA, Data);
}

u32 XFir_stream_Get_filter_41_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_41_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_42_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_42_V_DATA, Data);
}

u32 XFir_stream_Get_filter_42_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_42_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_43_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_43_V_DATA, Data);
}

u32 XFir_stream_Get_filter_43_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_43_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_44_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_44_V_DATA, Data);
}

u32 XFir_stream_Get_filter_44_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_44_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_45_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_45_V_DATA, Data);
}

u32 XFir_stream_Get_filter_45_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_45_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_46_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_46_V_DATA, Data);
}

u32 XFir_stream_Get_filter_46_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_46_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_47_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_47_V_DATA, Data);
}

u32 XFir_stream_Get_filter_47_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_47_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_48_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_48_V_DATA, Data);
}

u32 XFir_stream_Get_filter_48_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_48_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_49_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_49_V_DATA, Data);
}

u32 XFir_stream_Get_filter_49_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_49_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_50_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_50_V_DATA, Data);
}

u32 XFir_stream_Get_filter_50_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_50_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_51_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_51_V_DATA, Data);
}

u32 XFir_stream_Get_filter_51_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_51_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_52_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_52_V_DATA, Data);
}

u32 XFir_stream_Get_filter_52_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_52_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_53_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_53_V_DATA, Data);
}

u32 XFir_stream_Get_filter_53_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_53_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_54_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_54_V_DATA, Data);
}

u32 XFir_stream_Get_filter_54_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_54_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_55_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_55_V_DATA, Data);
}

u32 XFir_stream_Get_filter_55_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_55_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_56_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_56_V_DATA, Data);
}

u32 XFir_stream_Get_filter_56_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_56_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_57_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_57_V_DATA, Data);
}

u32 XFir_stream_Get_filter_57_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_57_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_58_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_58_V_DATA, Data);
}

u32 XFir_stream_Get_filter_58_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_58_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_59_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_59_V_DATA, Data);
}

u32 XFir_stream_Get_filter_59_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_59_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_60_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_60_V_DATA, Data);
}

u32 XFir_stream_Get_filter_60_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_60_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_61_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_61_V_DATA, Data);
}

u32 XFir_stream_Get_filter_61_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_61_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_62_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_62_V_DATA, Data);
}

u32 XFir_stream_Get_filter_62_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_62_V_DATA);
    return Data;
}

void XFir_stream_Set_filter_63_V(XFir_stream *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFir_stream_WriteReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_63_V_DATA, Data);
}

u32 XFir_stream_Get_filter_63_V(XFir_stream *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFir_stream_ReadReg(InstancePtr->Axilites_BaseAddress, XFIR_STREAM_AXILITES_ADDR_FILTER_63_V_DATA);
    return Data;
}

