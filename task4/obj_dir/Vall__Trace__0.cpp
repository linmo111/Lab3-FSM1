// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vall__Syms.h"


void Vall___024root__trace_chg_sub_0(Vall___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vall___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_chg_top_0\n"); );
    // Init
    Vall___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vall___024root*>(voidSelf);
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vall___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vall___024root__trace_chg_sub_0(Vall___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->all__DOT__tick));
        bufp->chgBit(oldp+1,(vlSelf->all__DOT__cmd_delay));
        bufp->chgBit(oldp+2,(vlSelf->all__DOT__cmd_seq));
        bufp->chgCData(oldp+3,(vlSelf->all__DOT__lfsr__DOT__sreg),7);
        bufp->chgSData(oldp+4,(vlSelf->all__DOT__clktick__DOT__count),16);
        bufp->chgSData(oldp+5,(vlSelf->all__DOT__lfsr__DOT__sreg),10);
        bufp->chgSData(oldp+6,(vlSelf->all__DOT__delay__DOT__count),10);
        bufp->chgIData(oldp+7,(vlSelf->all__DOT__delay__DOT__current_state),32);
        bufp->chgIData(oldp+8,(((0U == vlSelf->all__DOT__delay__DOT__current_state)
                                 ? ((IData)(vlSelf->all__DOT__cmd_delay)
                                     ? 1U : vlSelf->all__DOT__delay__DOT__current_state)
                                 : ((1U == vlSelf->all__DOT__delay__DOT__current_state)
                                     ? ((0U == (IData)(vlSelf->all__DOT__delay__DOT__count))
                                         ? 2U : vlSelf->all__DOT__delay__DOT__current_state)
                                     : ((2U == vlSelf->all__DOT__delay__DOT__current_state)
                                         ? ((IData)(vlSelf->all__DOT__cmd_delay)
                                             ? 3U : 0U)
                                         : ((3U == vlSelf->all__DOT__delay__DOT__current_state)
                                             ? ((IData)(vlSelf->all__DOT__cmd_delay)
                                                 ? vlSelf->all__DOT__delay__DOT__current_state
                                                 : 0U)
                                             : 0U))))),32);
        bufp->chgIData(oldp+9,(vlSelf->all__DOT__f1__DOT__current_state),32);
        bufp->chgIData(oldp+10,((((((((((0U == vlSelf->all__DOT__f1__DOT__current_state) 
                                        | (1U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                       | (2U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                      | (3U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                     | (4U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                    | (5U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                   | (6U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                  | (7U == vlSelf->all__DOT__f1__DOT__current_state))
                                  ? ((0U == vlSelf->all__DOT__f1__DOT__current_state)
                                      ? 1U : ((1U == vlSelf->all__DOT__f1__DOT__current_state)
                                               ? 2U
                                               : ((2U 
                                                   == vlSelf->all__DOT__f1__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelf->all__DOT__f1__DOT__current_state)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelf->all__DOT__f1__DOT__current_state)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelf->all__DOT__f1__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelf->all__DOT__f1__DOT__current_state)
                                                       ? 7U
                                                       : 8U)))))))
                                  : 0U)),32);
        bufp->chgCData(oldp+11,(vlSelf->all__DOT__lfsr__DOT__sreg),7);
    }
    bufp->chgBit(oldp+12,(vlSelf->clk));
    bufp->chgBit(oldp+13,(vlSelf->rst));
    bufp->chgBit(oldp+14,(vlSelf->en));
    bufp->chgBit(oldp+15,(vlSelf->trigger));
    bufp->chgCData(oldp+16,(vlSelf->data_out),8);
    bufp->chgBit(oldp+17,(vlSelf->time_out));
    bufp->chgBit(oldp+18,(((IData)(vlSelf->all__DOT__cmd_seq)
                            ? (IData)(vlSelf->all__DOT__tick)
                            : (IData)(vlSelf->time_out))));
}

void Vall___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_cleanup\n"); );
    // Init
    Vall___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vall___024root*>(voidSelf);
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
