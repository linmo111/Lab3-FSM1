// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vall.h for the primary calling header

#include "verilated.h"

#include "Vall___024root.h"

VL_INLINE_OPT void Vall___024root___sequent__TOP__0(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__all__DOT__lfsr__DOT__sreg;
    SData/*15:0*/ __Vdly__all__DOT__clktick__DOT__count;
    // Body
    __Vdly__all__DOT__lfsr__DOT__sreg = vlSelf->all__DOT__lfsr__DOT__sreg;
    __Vdly__all__DOT__clktick__DOT__count = vlSelf->all__DOT__clktick__DOT__count;
    if (vlSelf->rst) {
        __Vdly__all__DOT__lfsr__DOT__sreg = 1U;
        vlSelf->all__DOT__delay__DOT__current_state = 0U;
        vlSelf->all__DOT__f1__DOT__current_state = 0U;
        vlSelf->all__DOT__tick = 0U;
        __Vdly__all__DOT__clktick__DOT__count = 0x28U;
    } else {
        __Vdly__all__DOT__lfsr__DOT__sreg = ((1U & (IData)(__Vdly__all__DOT__lfsr__DOT__sreg)) 
                                             | (0x7eU 
                                                & ((IData)(vlSelf->all__DOT__lfsr__DOT__sreg) 
                                                   << 1U)));
        __Vdly__all__DOT__lfsr__DOT__sreg = ((0x7eU 
                                              & (IData)(__Vdly__all__DOT__lfsr__DOT__sreg)) 
                                             | (1U 
                                                & VL_REDXOR_8(
                                                              (0x51U 
                                                               & (IData)(vlSelf->all__DOT__lfsr__DOT__sreg)))));
        vlSelf->all__DOT__delay__DOT__current_state 
            = vlSelf->all__DOT__delay__DOT__next_state;
        if (vlSelf->trigger) {
            vlSelf->all__DOT__f1__DOT__current_state = 1U;
        } else if (((IData)(vlSelf->all__DOT__cmd_seq)
                     ? (IData)(vlSelf->all__DOT__tick)
                     : (IData)(vlSelf->time_out))) {
            vlSelf->all__DOT__f1__DOT__current_state 
                = vlSelf->all__DOT__f1__DOT__next_state;
        }
        if (vlSelf->all__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->all__DOT__clktick__DOT__count))) {
                vlSelf->all__DOT__tick = 1U;
                __Vdly__all__DOT__clktick__DOT__count = 0x28U;
            } else {
                __Vdly__all__DOT__clktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->all__DOT__clktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->all__DOT__tick = 0U;
            }
        }
    }
    vlSelf->all__DOT__delay__DOT__count = (0x3ffU & 
                                           ((((IData)(vlSelf->rst) 
                                              | (IData)(vlSelf->all__DOT__cmd_delay)) 
                                             | (0U 
                                                == (IData)(vlSelf->all__DOT__delay__DOT__count)))
                                             ? ((IData)(vlSelf->all__DOT__lfsr__DOT__sreg) 
                                                - (IData)(1U))
                                             : ((IData)(vlSelf->all__DOT__delay__DOT__count) 
                                                - (IData)(1U))));
    vlSelf->all__DOT__lfsr__DOT__sreg = __Vdly__all__DOT__lfsr__DOT__sreg;
    vlSelf->time_out = ((0U != vlSelf->all__DOT__delay__DOT__current_state) 
                        & ((1U != vlSelf->all__DOT__delay__DOT__current_state) 
                           & (2U == vlSelf->all__DOT__delay__DOT__current_state)));
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
    vlSelf->all__DOT__cmd_delay = ((~ ((((((((0U == vlSelf->all__DOT__f1__DOT__current_state) 
                                             | (1U 
                                                == vlSelf->all__DOT__f1__DOT__current_state)) 
                                            | (2U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                           | (3U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                          | (4U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                         | (5U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                        | (6U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                       | (7U == vlSelf->all__DOT__f1__DOT__current_state))) 
                                   & (8U == vlSelf->all__DOT__f1__DOT__current_state));
    vlSelf->all__DOT__clktick__DOT__count = __Vdly__all__DOT__clktick__DOT__count;
    vlSelf->all__DOT__cmd_seq = (((((((((0U == vlSelf->all__DOT__f1__DOT__current_state) 
                                        | (1U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                       | (2U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                      | (3U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                     | (4U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                    | (5U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                   | (6U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                  | (7U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                 & (0U != vlSelf->all__DOT__f1__DOT__current_state));
    vlSelf->all__DOT__delay__DOT__next_state = ((0U 
                                                 == vlSelf->all__DOT__delay__DOT__current_state)
                                                 ? 
                                                ((IData)(vlSelf->all__DOT__cmd_delay)
                                                  ? 1U
                                                  : vlSelf->all__DOT__delay__DOT__current_state)
                                                 : 
                                                ((1U 
                                                  == vlSelf->all__DOT__delay__DOT__current_state)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->all__DOT__delay__DOT__count))
                                                   ? 2U
                                                   : vlSelf->all__DOT__delay__DOT__current_state)
                                                  : 
                                                 ((2U 
                                                   == vlSelf->all__DOT__delay__DOT__current_state)
                                                   ? 
                                                  ((IData)(vlSelf->all__DOT__cmd_delay)
                                                    ? 3U
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == vlSelf->all__DOT__delay__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelf->all__DOT__cmd_delay)
                                                     ? vlSelf->all__DOT__delay__DOT__current_state
                                                     : 0U)
                                                    : 0U))));
}

void Vall___024root___eval(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vall___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vall___024root___eval_debug_assertions(Vall___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
