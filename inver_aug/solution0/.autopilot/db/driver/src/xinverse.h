// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XINVERSE_H
#define XINVERSE_H

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
#include "xinverse_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XInverse_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XInverse;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XInverse_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XInverse_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XInverse_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XInverse_ReadReg(BaseAddress, RegOffset) \
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
int XInverse_Initialize(XInverse *InstancePtr, u16 DeviceId);
XInverse_Config* XInverse_LookupConfig(u16 DeviceId);
int XInverse_CfgInitialize(XInverse *InstancePtr, XInverse_Config *ConfigPtr);
#else
int XInverse_Initialize(XInverse *InstancePtr, const char* InstanceName);
int XInverse_Release(XInverse *InstancePtr);
#endif

void XInverse_Start(XInverse *InstancePtr);
u32 XInverse_IsDone(XInverse *InstancePtr);
u32 XInverse_IsIdle(XInverse *InstancePtr);
u32 XInverse_IsReady(XInverse *InstancePtr);
void XInverse_EnableAutoRestart(XInverse *InstancePtr);
void XInverse_DisableAutoRestart(XInverse *InstancePtr);


void XInverse_InterruptGlobalEnable(XInverse *InstancePtr);
void XInverse_InterruptGlobalDisable(XInverse *InstancePtr);
void XInverse_InterruptEnable(XInverse *InstancePtr, u32 Mask);
void XInverse_InterruptDisable(XInverse *InstancePtr, u32 Mask);
void XInverse_InterruptClear(XInverse *InstancePtr, u32 Mask);
u32 XInverse_InterruptGetEnabled(XInverse *InstancePtr);
u32 XInverse_InterruptGetStatus(XInverse *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
