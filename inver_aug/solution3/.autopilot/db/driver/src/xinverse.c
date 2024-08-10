// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xinverse.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XInverse_CfgInitialize(XInverse *InstancePtr, XInverse_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XInverse_Start(XInverse *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_AP_CTRL) & 0x80;
    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XInverse_IsDone(XInverse *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XInverse_IsIdle(XInverse *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XInverse_IsReady(XInverse *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XInverse_EnableAutoRestart(XInverse *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XInverse_DisableAutoRestart(XInverse *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_AP_CTRL, 0);
}

void XInverse_InterruptGlobalEnable(XInverse *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_GIE, 1);
}

void XInverse_InterruptGlobalDisable(XInverse *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_GIE, 0);
}

void XInverse_InterruptEnable(XInverse *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_IER);
    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_IER, Register | Mask);
}

void XInverse_InterruptDisable(XInverse *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_IER);
    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_IER, Register & (~Mask));
}

void XInverse_InterruptClear(XInverse *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_WriteReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_ISR, Mask);
}

u32 XInverse_InterruptGetEnabled(XInverse *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_IER);
}

u32 XInverse_InterruptGetStatus(XInverse *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XInverse_ReadReg(InstancePtr->Axilites_BaseAddress, XINVERSE_AXILITES_ADDR_ISR);
}

