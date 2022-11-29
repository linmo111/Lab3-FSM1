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
        bufp->chgSData(oldp+1,(vlSelf->all__DOT__clktick__DOT__count),16);
        bufp->chgIData(oldp+2,(vlSelf->all__DOT__f1__DOT__current_state),32);
        bufp->chgIData(oldp+3,((((((((((0U == vlSelf->all__DOT__f1__DOT__current_state) 
                                       | (1U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                      | (2U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                     | (3U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                    | (4U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                   | (5U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                  | (6U == vlSelf->all__DOT__f1__DOT__current_state)) 
                                 | (7U == vlSelf->all__DOT__f1__DOT__current_state))
                                 ? ((0U == vlSelf->all__DOT__f1__DOT__current_state)
                                     ? 1U : ((1U == vlSelf->all__DOT__f1__DOT__current_state)
                                              ? 2U : 
                                             ((2U == vlSelf->all__DOT__f1__DOT__current_state)
                                               ? 3U
                                               : ((3U 
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
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->rst));
    bufp->chgBit(oldp+6,(vlSelf->en));
    bufp->chgSData(oldp+7,(vlSelf->N),16);
    bufp->chgCData(oldp+8,(vlSelf->data_out),8);
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
