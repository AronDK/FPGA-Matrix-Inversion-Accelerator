// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xfir_stream.h"

extern XFir_stream_Config XFir_stream_ConfigTable[];

XFir_stream_Config *XFir_stream_LookupConfig(u16 DeviceId) {
	XFir_stream_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XFIR_STREAM_NUM_INSTANCES; Index++) {
		if (XFir_stream_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XFir_stream_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XFir_stream_Initialize(XFir_stream *InstancePtr, u16 DeviceId) {
	XFir_stream_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XFir_stream_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XFir_stream_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

