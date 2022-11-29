// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vall.h for the primary calling header

#include "verilated.h"

#include "Vall___024root.h"

VL_ATTR_COLD void Vall___024root___settle__TOP__0(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->all__DOT__f1__DOT__current_state) 
               | (1U == vlSelf->all__DOT__f1__DOT__current_state)) 
              | (2U == vlSelf->all__DOT__f1__DOT__current_state)) 
             | (3U == vlSelf->all__DOT__f1__DOT__current_state)) 
            | (4U == vlSelf->all__DOT__f1__DOT__current_state)) 
           | (5U == vlSelf->all__DOT__f1__DOT__current_state)) 
          | (6U == vlSelf->all__DOT__f1__DOT__current_state)) 
         | (7U == vlSelf->all__DOT__f1__DOT__current_state))) {
        if ((0U == vlSelf->all__DOT__f1__DOT__current_state)) {
            vlSelf->all__DOT__f1__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->all__DOT__f1__DOT__current_state)) {
            vlSelf->all__DOT__f1__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->all__DOT__f1__DOT__current_state)) {
            vlSelf->all__DOT__f1__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->all__DOT__f1__DOT__current_state)) {
            vlSelf->all__DOT__f1__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->all__DOT__f1__DOT__current_state)) {
            vlSelf->all__DOT__f1__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->all__DOT__f1__DOT__current_state)) {
            vlSelf->all__DOT__f1__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->all__DOT__f1__DOT__current_state)) {
            vlSelf->all__DOT__f1__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->all__DOT__f1__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->all__DOT__f1__DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->all__DOT__f1__DOT__current_state)
                             ? 0xffU : 0U);
    }
}

VL_ATTR_COLD void Vall___024root___eval_initial(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vall___024root___eval_settle(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___eval_settle\n"); );
    // Body
    Vall___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vall___024root___final(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___final\n"); );
}

VL_ATTR_COLD void Vall___024root___ctor_var_reset(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->all__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->all__DOT__clktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->all__DOT__f1__DOT__current_state = 0;
    vlSelf->all__DOT__f1__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
