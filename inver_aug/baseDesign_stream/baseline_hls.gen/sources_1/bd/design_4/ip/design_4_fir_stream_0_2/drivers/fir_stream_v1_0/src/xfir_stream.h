// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XFIR_STREAM_H
#define XFIR_STREAM_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xfir_stream_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XFir_stream_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XFir_stream;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XFir_stream_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XFir_stream_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XFir_stream_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XFir_stream_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XFir_stream_Initialize(XFir_stream *InstancePtr, u16 DeviceId);
XFir_stream_Config* XFir_stream_LookupConfig(u16 DeviceId);
int XFir_stream_CfgInitialize(XFir_stream *InstancePtr, XFir_stream_Config *ConfigPtr);
#else
int XFir_stream_Initialize(XFir_stream *InstancePtr, const char* InstanceName);
int XFir_stream_Release(XFir_stream *InstancePtr);
#endif


void XFir_stream_Set_filter_0_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_0_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_1_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_1_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_2_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_2_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_3_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_3_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_4_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_4_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_5_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_5_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_6_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_6_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_7_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_7_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_8_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_8_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_9_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_9_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_10_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_10_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_11_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_11_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_12_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_12_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_13_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_13_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_14_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_14_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_15_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_15_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_16_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_16_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_17_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_17_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_18_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_18_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_19_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_19_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_20_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_20_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_21_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_21_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_22_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_22_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_23_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_23_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_24_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_24_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_25_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_25_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_26_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_26_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_27_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_27_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_28_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_28_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_29_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_29_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_30_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_30_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_31_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_31_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_32_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_32_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_33_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_33_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_34_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_34_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_35_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_35_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_36_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_36_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_37_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_37_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_38_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_38_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_39_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_39_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_40_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_40_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_41_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_41_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_42_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_42_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_43_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_43_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_44_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_44_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_45_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_45_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_46_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_46_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_47_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_47_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_48_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_48_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_49_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_49_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_50_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_50_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_51_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_51_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_52_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_52_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_53_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_53_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_54_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_54_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_55_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_55_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_56_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_56_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_57_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_57_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_58_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_58_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_59_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_59_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_60_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_60_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_61_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_61_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_62_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_62_V(XFir_stream *InstancePtr);
void XFir_stream_Set_filter_63_V(XFir_stream *InstancePtr, u32 Data);
u32 XFir_stream_Get_filter_63_V(XFir_stream *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
