set moduleName inverse
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {inverse}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_0 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_1 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_2 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_3 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_4 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_5 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_6 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_7 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_8 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ A_9 int 32 regular {array 10 { 1 3 } 1 1 }  }
	{ B_0_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_1_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_2_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_3_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_4_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_5_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_6_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_7_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_8_V int 22 regular {array 10 { 0 3 } 0 1 }  }
	{ B_9_V int 22 regular {array 10 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "A_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "A_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "A_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "A_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "A_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "A_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "A_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "A_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "A_9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "A","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "B_0_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "B_1_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "B_2_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "B_3_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "B_4_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "B_5_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "B_6_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "B_7_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "B_8_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "B_9_V", "interface" : "memory", "bitwidth" : 22, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":21,"cElement": [{"cName": "B.V","cData": "int22","bit_use": { "low": 0,"up": 21},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 76
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_0_address0 sc_out sc_lv 4 signal 0 } 
	{ A_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_0_q0 sc_in sc_lv 32 signal 0 } 
	{ A_1_address0 sc_out sc_lv 4 signal 1 } 
	{ A_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_1_q0 sc_in sc_lv 32 signal 1 } 
	{ A_2_address0 sc_out sc_lv 4 signal 2 } 
	{ A_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_2_q0 sc_in sc_lv 32 signal 2 } 
	{ A_3_address0 sc_out sc_lv 4 signal 3 } 
	{ A_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_3_q0 sc_in sc_lv 32 signal 3 } 
	{ A_4_address0 sc_out sc_lv 4 signal 4 } 
	{ A_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_4_q0 sc_in sc_lv 32 signal 4 } 
	{ A_5_address0 sc_out sc_lv 4 signal 5 } 
	{ A_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_5_q0 sc_in sc_lv 32 signal 5 } 
	{ A_6_address0 sc_out sc_lv 4 signal 6 } 
	{ A_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_6_q0 sc_in sc_lv 32 signal 6 } 
	{ A_7_address0 sc_out sc_lv 4 signal 7 } 
	{ A_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_7_q0 sc_in sc_lv 32 signal 7 } 
	{ A_8_address0 sc_out sc_lv 4 signal 8 } 
	{ A_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ A_8_q0 sc_in sc_lv 32 signal 8 } 
	{ A_9_address0 sc_out sc_lv 4 signal 9 } 
	{ A_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ A_9_q0 sc_in sc_lv 32 signal 9 } 
	{ B_0_V_address0 sc_out sc_lv 4 signal 10 } 
	{ B_0_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ B_0_V_we0 sc_out sc_logic 1 signal 10 } 
	{ B_0_V_d0 sc_out sc_lv 22 signal 10 } 
	{ B_1_V_address0 sc_out sc_lv 4 signal 11 } 
	{ B_1_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ B_1_V_we0 sc_out sc_logic 1 signal 11 } 
	{ B_1_V_d0 sc_out sc_lv 22 signal 11 } 
	{ B_2_V_address0 sc_out sc_lv 4 signal 12 } 
	{ B_2_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ B_2_V_we0 sc_out sc_logic 1 signal 12 } 
	{ B_2_V_d0 sc_out sc_lv 22 signal 12 } 
	{ B_3_V_address0 sc_out sc_lv 4 signal 13 } 
	{ B_3_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ B_3_V_we0 sc_out sc_logic 1 signal 13 } 
	{ B_3_V_d0 sc_out sc_lv 22 signal 13 } 
	{ B_4_V_address0 sc_out sc_lv 4 signal 14 } 
	{ B_4_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ B_4_V_we0 sc_out sc_logic 1 signal 14 } 
	{ B_4_V_d0 sc_out sc_lv 22 signal 14 } 
	{ B_5_V_address0 sc_out sc_lv 4 signal 15 } 
	{ B_5_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ B_5_V_we0 sc_out sc_logic 1 signal 15 } 
	{ B_5_V_d0 sc_out sc_lv 22 signal 15 } 
	{ B_6_V_address0 sc_out sc_lv 4 signal 16 } 
	{ B_6_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ B_6_V_we0 sc_out sc_logic 1 signal 16 } 
	{ B_6_V_d0 sc_out sc_lv 22 signal 16 } 
	{ B_7_V_address0 sc_out sc_lv 4 signal 17 } 
	{ B_7_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ B_7_V_we0 sc_out sc_logic 1 signal 17 } 
	{ B_7_V_d0 sc_out sc_lv 22 signal 17 } 
	{ B_8_V_address0 sc_out sc_lv 4 signal 18 } 
	{ B_8_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ B_8_V_we0 sc_out sc_logic 1 signal 18 } 
	{ B_8_V_d0 sc_out sc_lv 22 signal 18 } 
	{ B_9_V_address0 sc_out sc_lv 4 signal 19 } 
	{ B_9_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ B_9_V_we0 sc_out sc_logic 1 signal 19 } 
	{ B_9_V_d0 sc_out sc_lv 22 signal 19 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_0", "role": "address0" }} , 
 	{ "name": "A_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_0", "role": "ce0" }} , 
 	{ "name": "A_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_0", "role": "q0" }} , 
 	{ "name": "A_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_1", "role": "address0" }} , 
 	{ "name": "A_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_1", "role": "ce0" }} , 
 	{ "name": "A_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_1", "role": "q0" }} , 
 	{ "name": "A_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_2", "role": "address0" }} , 
 	{ "name": "A_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_2", "role": "ce0" }} , 
 	{ "name": "A_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_2", "role": "q0" }} , 
 	{ "name": "A_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_3", "role": "address0" }} , 
 	{ "name": "A_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_3", "role": "ce0" }} , 
 	{ "name": "A_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_3", "role": "q0" }} , 
 	{ "name": "A_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_4", "role": "address0" }} , 
 	{ "name": "A_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_4", "role": "ce0" }} , 
 	{ "name": "A_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_4", "role": "q0" }} , 
 	{ "name": "A_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_5", "role": "address0" }} , 
 	{ "name": "A_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_5", "role": "ce0" }} , 
 	{ "name": "A_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_5", "role": "q0" }} , 
 	{ "name": "A_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_6", "role": "address0" }} , 
 	{ "name": "A_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_6", "role": "ce0" }} , 
 	{ "name": "A_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_6", "role": "q0" }} , 
 	{ "name": "A_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_7", "role": "address0" }} , 
 	{ "name": "A_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_7", "role": "ce0" }} , 
 	{ "name": "A_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_7", "role": "q0" }} , 
 	{ "name": "A_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_8", "role": "address0" }} , 
 	{ "name": "A_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_8", "role": "ce0" }} , 
 	{ "name": "A_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_8", "role": "q0" }} , 
 	{ "name": "A_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_9", "role": "address0" }} , 
 	{ "name": "A_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_9", "role": "ce0" }} , 
 	{ "name": "A_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_9", "role": "q0" }} , 
 	{ "name": "B_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_0_V", "role": "address0" }} , 
 	{ "name": "B_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_0_V", "role": "ce0" }} , 
 	{ "name": "B_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_0_V", "role": "we0" }} , 
 	{ "name": "B_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_0_V", "role": "d0" }} , 
 	{ "name": "B_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_1_V", "role": "address0" }} , 
 	{ "name": "B_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_1_V", "role": "ce0" }} , 
 	{ "name": "B_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_1_V", "role": "we0" }} , 
 	{ "name": "B_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_1_V", "role": "d0" }} , 
 	{ "name": "B_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_2_V", "role": "address0" }} , 
 	{ "name": "B_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_2_V", "role": "ce0" }} , 
 	{ "name": "B_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_2_V", "role": "we0" }} , 
 	{ "name": "B_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_2_V", "role": "d0" }} , 
 	{ "name": "B_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_3_V", "role": "address0" }} , 
 	{ "name": "B_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_3_V", "role": "ce0" }} , 
 	{ "name": "B_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_3_V", "role": "we0" }} , 
 	{ "name": "B_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_3_V", "role": "d0" }} , 
 	{ "name": "B_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_4_V", "role": "address0" }} , 
 	{ "name": "B_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_4_V", "role": "ce0" }} , 
 	{ "name": "B_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_4_V", "role": "we0" }} , 
 	{ "name": "B_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_4_V", "role": "d0" }} , 
 	{ "name": "B_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_5_V", "role": "address0" }} , 
 	{ "name": "B_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_5_V", "role": "ce0" }} , 
 	{ "name": "B_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_5_V", "role": "we0" }} , 
 	{ "name": "B_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_5_V", "role": "d0" }} , 
 	{ "name": "B_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_6_V", "role": "address0" }} , 
 	{ "name": "B_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_6_V", "role": "ce0" }} , 
 	{ "name": "B_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_6_V", "role": "we0" }} , 
 	{ "name": "B_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_6_V", "role": "d0" }} , 
 	{ "name": "B_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_7_V", "role": "address0" }} , 
 	{ "name": "B_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_7_V", "role": "ce0" }} , 
 	{ "name": "B_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_7_V", "role": "we0" }} , 
 	{ "name": "B_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_7_V", "role": "d0" }} , 
 	{ "name": "B_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_8_V", "role": "address0" }} , 
 	{ "name": "B_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_8_V", "role": "ce0" }} , 
 	{ "name": "B_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_8_V", "role": "we0" }} , 
 	{ "name": "B_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_8_V", "role": "d0" }} , 
 	{ "name": "B_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_9_V", "role": "address0" }} , 
 	{ "name": "B_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_9_V", "role": "ce0" }} , 
 	{ "name": "B_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_9_V", "role": "we0" }} , 
 	{ "name": "B_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "B_9_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24"],
		"CDFG" : "inverse",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8465", "EstimateLatencyMax" : "14565",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "B_9_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_0_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_1_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_2_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_3_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_4_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_5_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_6_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_7_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_8_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_9_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_10_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_11_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_12_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_13_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_14_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_15_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_16_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_17_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_18_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.aug_19_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inverse_mux_205_2bkb_U1", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inverse_sdiv_36nscud_U2", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inverse_mux_205_2bkb_U3", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inverse_mux_205_2bkb_U4", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	inverse {
		A_0 {Type I LastRead 1 FirstWrite -1}
		A_1 {Type I LastRead 1 FirstWrite -1}
		A_2 {Type I LastRead 1 FirstWrite -1}
		A_3 {Type I LastRead 1 FirstWrite -1}
		A_4 {Type I LastRead 1 FirstWrite -1}
		A_5 {Type I LastRead 1 FirstWrite -1}
		A_6 {Type I LastRead 1 FirstWrite -1}
		A_7 {Type I LastRead 1 FirstWrite -1}
		A_8 {Type I LastRead 1 FirstWrite -1}
		A_9 {Type I LastRead 1 FirstWrite -1}
		B_0_V {Type O LastRead -1 FirstWrite 5}
		B_1_V {Type O LastRead -1 FirstWrite 5}
		B_2_V {Type O LastRead -1 FirstWrite 5}
		B_3_V {Type O LastRead -1 FirstWrite 5}
		B_4_V {Type O LastRead -1 FirstWrite 5}
		B_5_V {Type O LastRead -1 FirstWrite 5}
		B_6_V {Type O LastRead -1 FirstWrite 5}
		B_7_V {Type O LastRead -1 FirstWrite 5}
		B_8_V {Type O LastRead -1 FirstWrite 5}
		B_9_V {Type O LastRead -1 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "8465", "Max" : "14565"}
	, {"Name" : "Interval", "Min" : "8466", "Max" : "14566"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	A_0 { ap_memory {  { A_0_address0 mem_address 1 4 }  { A_0_ce0 mem_ce 1 1 }  { A_0_q0 mem_dout 0 32 } } }
	A_1 { ap_memory {  { A_1_address0 mem_address 1 4 }  { A_1_ce0 mem_ce 1 1 }  { A_1_q0 mem_dout 0 32 } } }
	A_2 { ap_memory {  { A_2_address0 mem_address 1 4 }  { A_2_ce0 mem_ce 1 1 }  { A_2_q0 mem_dout 0 32 } } }
	A_3 { ap_memory {  { A_3_address0 mem_address 1 4 }  { A_3_ce0 mem_ce 1 1 }  { A_3_q0 mem_dout 0 32 } } }
	A_4 { ap_memory {  { A_4_address0 mem_address 1 4 }  { A_4_ce0 mem_ce 1 1 }  { A_4_q0 mem_dout 0 32 } } }
	A_5 { ap_memory {  { A_5_address0 mem_address 1 4 }  { A_5_ce0 mem_ce 1 1 }  { A_5_q0 mem_dout 0 32 } } }
	A_6 { ap_memory {  { A_6_address0 mem_address 1 4 }  { A_6_ce0 mem_ce 1 1 }  { A_6_q0 mem_dout 0 32 } } }
	A_7 { ap_memory {  { A_7_address0 mem_address 1 4 }  { A_7_ce0 mem_ce 1 1 }  { A_7_q0 mem_dout 0 32 } } }
	A_8 { ap_memory {  { A_8_address0 mem_address 1 4 }  { A_8_ce0 mem_ce 1 1 }  { A_8_q0 mem_dout 0 32 } } }
	A_9 { ap_memory {  { A_9_address0 mem_address 1 4 }  { A_9_ce0 mem_ce 1 1 }  { A_9_q0 mem_dout 0 32 } } }
	B_0_V { ap_memory {  { B_0_V_address0 mem_address 1 4 }  { B_0_V_ce0 mem_ce 1 1 }  { B_0_V_we0 mem_we 1 1 }  { B_0_V_d0 mem_din 1 22 } } }
	B_1_V { ap_memory {  { B_1_V_address0 mem_address 1 4 }  { B_1_V_ce0 mem_ce 1 1 }  { B_1_V_we0 mem_we 1 1 }  { B_1_V_d0 mem_din 1 22 } } }
	B_2_V { ap_memory {  { B_2_V_address0 mem_address 1 4 }  { B_2_V_ce0 mem_ce 1 1 }  { B_2_V_we0 mem_we 1 1 }  { B_2_V_d0 mem_din 1 22 } } }
	B_3_V { ap_memory {  { B_3_V_address0 mem_address 1 4 }  { B_3_V_ce0 mem_ce 1 1 }  { B_3_V_we0 mem_we 1 1 }  { B_3_V_d0 mem_din 1 22 } } }
	B_4_V { ap_memory {  { B_4_V_address0 mem_address 1 4 }  { B_4_V_ce0 mem_ce 1 1 }  { B_4_V_we0 mem_we 1 1 }  { B_4_V_d0 mem_din 1 22 } } }
	B_5_V { ap_memory {  { B_5_V_address0 mem_address 1 4 }  { B_5_V_ce0 mem_ce 1 1 }  { B_5_V_we0 mem_we 1 1 }  { B_5_V_d0 mem_din 1 22 } } }
	B_6_V { ap_memory {  { B_6_V_address0 mem_address 1 4 }  { B_6_V_ce0 mem_ce 1 1 }  { B_6_V_we0 mem_we 1 1 }  { B_6_V_d0 mem_din 1 22 } } }
	B_7_V { ap_memory {  { B_7_V_address0 mem_address 1 4 }  { B_7_V_ce0 mem_ce 1 1 }  { B_7_V_we0 mem_we 1 1 }  { B_7_V_d0 mem_din 1 22 } } }
	B_8_V { ap_memory {  { B_8_V_address0 mem_address 1 4 }  { B_8_V_ce0 mem_ce 1 1 }  { B_8_V_we0 mem_we 1 1 }  { B_8_V_d0 mem_din 1 22 } } }
	B_9_V { ap_memory {  { B_9_V_address0 mem_address 1 4 }  { B_9_V_ce0 mem_ce 1 1 }  { B_9_V_we0 mem_we 1 1 }  { B_9_V_d0 mem_din 1 22 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
