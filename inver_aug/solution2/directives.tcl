############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline "inverse/Ini_Aug_loop"
set_directive_pipeline "inverse/Row_Op_loop"
set_directive_pipeline "inverse/Extract_loop"
set_directive_array_partition -type complete -dim 2 "inverse" A
set_directive_array_partition -type complete -dim 2 "inverse" B
set_directive_array_partition -type complete -dim 2 "inverse" aug
