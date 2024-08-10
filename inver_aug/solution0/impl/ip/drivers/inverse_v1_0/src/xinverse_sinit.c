// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xinverse.h"

extern XInverse_Config XInverse_ConfigTable[];

XInverse_Config *XInverse_LookupConfig(u16 DeviceId) {
	XInverse_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XINVERSE_NUM_INSTANCES; Index++) {
		if (XInverse_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XInverse_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XInverse_Initialize(XInverse *InstancePtr, u16 DeviceId) {
	XInverse_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XInverse_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XInverse_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

