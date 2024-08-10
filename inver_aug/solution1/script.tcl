############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project inver_aug
set_top inverse
add_files axi_stream.cpp
add_files inver_aug.cpp
add_files inver_aug.h
add_files -tb golden.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb inver_aug_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb matrices.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xqzu5ev-ffrb900-1-i}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl vhdl
#source "./inver_aug/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -rtl vhdl -tool modelsim
export_design -rtl vhdl -format ip_catalog
