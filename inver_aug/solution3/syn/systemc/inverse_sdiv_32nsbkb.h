// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __inverse_sdiv_32nsbkb__HH__
#define __inverse_sdiv_32nsbkb__HH__
#include "ACMP_sdiv.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(inverse_sdiv_32nsbkb) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_sdiv<ID, 36, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_sdiv_U;

    SC_CTOR(inverse_sdiv_32nsbkb):  ACMP_sdiv_U ("ACMP_sdiv_U") {
        ACMP_sdiv_U.clk(clk);
        ACMP_sdiv_U.reset(reset);
        ACMP_sdiv_U.ce(ce);
        ACMP_sdiv_U.din0(din0);
        ACMP_sdiv_U.din1(din1);
        ACMP_sdiv_U.dout(dout);

    }

};

#endif //
