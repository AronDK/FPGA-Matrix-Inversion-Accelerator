set designtopgroup "Design Top Signals"
add wave -group $designtopgroup
set clockgroup "Clock"
add wave -group $designtopgroup -group $clockgroup
add wave -group $designtopgroup -group $clockgroup /apatb_inverse_top/AESL_inst_inverse/ap_clk
set resetgroup "Reset"
add wave -group $designtopgroup -group $resetgroup
add wave -group $designtopgroup -group $resetgroup /apatb_inverse_top/AESL_inst_inverse/ap_rst
set blocksiggroup "Block-level IO Handshake"
add wave -group $designtopgroup -group $blocksiggroup
add wave -group $designtopgroup -group $blocksiggroup /apatb_inverse_top/AESL_inst_inverse/ap_start
add wave -group $designtopgroup -group $blocksiggroup /apatb_inverse_top/AESL_inst_inverse/ap_done
add wave -group $designtopgroup -group $blocksiggroup /apatb_inverse_top/AESL_inst_inverse/ap_idle
add wave -group $designtopgroup -group $blocksiggroup /apatb_inverse_top/AESL_inst_inverse/ap_ready
set cinputgroup "C Inputs"
add wave -group $designtopgroup -group $cinputgroup
set A_group A(memory)
add wave -group $designtopgroup -group $cinputgroup -group $A_group
add wave -group $designtopgroup -group $cinputgroup -group $A_group -radix hex /apatb_inverse_top/AESL_inst_inverse/A_address0
add wave -group $designtopgroup -group $cinputgroup -group $A_group -color #ffff00 -radix hex /apatb_inverse_top/AESL_inst_inverse/A_ce0
add wave -group $designtopgroup -group $cinputgroup -group $A_group -radix hex /apatb_inverse_top/AESL_inst_inverse/A_q0
set coutputgroup "C Outputs"
add wave -group $designtopgroup -group $coutputgroup
set B_group B(memory)
add wave -group $designtopgroup -group $coutputgroup -group $B_group
add wave -group $designtopgroup -group $coutputgroup -group $B_group -radix hex /apatb_inverse_top/AESL_inst_inverse/B_V_address0
add wave -group $designtopgroup -group $coutputgroup -group $B_group -color #ffff00 -radix hex /apatb_inverse_top/AESL_inst_inverse/B_V_ce0
add wave -group $designtopgroup -group $coutputgroup -group $B_group -color #ffff00 -radix hex /apatb_inverse_top/AESL_inst_inverse/B_V_we0
add wave -group $designtopgroup -group $coutputgroup -group $B_group -radix hex /apatb_inverse_top/AESL_inst_inverse/B_V_d0
set testbenchgroup "Test Bench Signals"
add wave -group $testbenchgroup
set tbcinputgroup "C Inputs"
add wave -group $testbenchgroup -group $tbcinputgroup
set tb_A_group A(memory)
add wave -group $testbenchgroup -group $tbcinputgroup -group $tb_A_group
add wave -group $testbenchgroup -group $tbcinputgroup -group $tb_A_group -radix hex /apatb_inverse_top/A_address0
add wave -group $testbenchgroup -group $tbcinputgroup -group $tb_A_group -color #ffff00 -radix hex /apatb_inverse_top/A_ce0
add wave -group $testbenchgroup -group $tbcinputgroup -group $tb_A_group -radix hex /apatb_inverse_top/A_q0
set tbcoutputgroup "C Outputs"
add wave -group $testbenchgroup -group $tbcoutputgroup
set tb_B_group B(memory)
add wave -group $testbenchgroup -group $tbcoutputgroup -group $tb_B_group
add wave -group $testbenchgroup -group $tbcoutputgroup -group $tb_B_group -radix hex /apatb_inverse_top/B_V_address0
add wave -group $testbenchgroup -group $tbcoutputgroup -group $tb_B_group -color #ffff00 -radix hex /apatb_inverse_top/B_V_ce0
add wave -group $testbenchgroup -group $tbcoutputgroup -group $tb_B_group -color #ffff00 -radix hex /apatb_inverse_top/B_V_we0
add wave -group $testbenchgroup -group $tbcoutputgroup -group $tb_B_group -radix hex /apatb_inverse_top/B_V_d0
set tbinternalsiggroup "Internal Signals"
add wave -group $testbenchgroup -group $tbinternalsiggroup
set tb_simstatus_group "Simulation Status"
add wave -group $testbenchgroup -group $tbinternalsiggroup -group $tb_simstatus_group
add wave -group $testbenchgroup -group $tbinternalsiggroup -group $tb_simstatus_group -radix hex /apatb_inverse_top/AUTOTB_TRANSACTION_NUM
add wave -group $testbenchgroup -group $tbinternalsiggroup -group $tb_simstatus_group -radix hex /apatb_inverse_top/ready_cnt
add wave -group $testbenchgroup -group $tbinternalsiggroup -group $tb_simstatus_group -radix hex /apatb_inverse_top/done_cnt
set tb_portdepth_group "Port Depth"
add wave -group $testbenchgroup -group $tbinternalsiggroup -group $tb_portdepth_group
add wave -group $testbenchgroup -group $tbinternalsiggroup -group $tb_portdepth_group -radix hex /apatb_inverse_top/LENGTH_A
add wave -group $testbenchgroup -group $tbinternalsiggroup -group $tb_portdepth_group -radix hex /apatb_inverse_top/LENGTH_B_V
