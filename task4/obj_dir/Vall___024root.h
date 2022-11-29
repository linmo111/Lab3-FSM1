// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vall.h for the primary calling header

#ifndef VERILATED_VALL___024ROOT_H_
#define VERILATED_VALL___024ROOT_H_  // guard

#include "verilated.h"

class Vall__Syms;

class Vall___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,8,1);
    VL_OUT8(time_out,0,0);
    CData/*0:0*/ all__DOT__tick;
    CData/*0:0*/ all__DOT__cmd_delay;
    CData/*0:0*/ all__DOT__cmd_seq;
    CData/*6:0*/ all__DOT__lfsr__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*9:0*/ all__DOT__delay__DOT__count;
    SData/*15:0*/ all__DOT__clktick__DOT__count;
    IData/*31:0*/ all__DOT__delay__DOT__current_state;
    IData/*31:0*/ all__DOT__delay__DOT__next_state;
    IData/*31:0*/ all__DOT__f1__DOT__current_state;
    IData/*31:0*/ all__DOT__f1__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vall__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vall___024root(Vall__Syms* symsp, const char* name);
    ~Vall___024root();
    VL_UNCOPYABLE(Vall___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
