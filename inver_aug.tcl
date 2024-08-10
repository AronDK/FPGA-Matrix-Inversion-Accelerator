open_project inver_aug_sw.proj -reset
add_files inver_aug.cpp
add_files inver_aug.h

set_top inverse

open_solution "solution1" -reset

set_part {xqzu5ev-ffrb900-1-i}

create_clock -period 10

csynth_design
exit
