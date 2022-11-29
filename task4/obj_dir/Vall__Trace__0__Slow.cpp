// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vall__Syms.h"


VL_ATTR_COLD void Vall___024root__trace_init_sub__TOP__0(Vall___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"en", false,-1);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 8,1);
    tracep->declBit(c+18,"time_out", false,-1);
    tracep->pushNamePrefix("all ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"en", false,-1);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 8,1);
    tracep->declBit(c+18,"time_out", false,-1);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBit(c+3,"cmd_seq", false,-1);
    tracep->declBit(c+19,"muxout", false,-1);
    tracep->declBus(c+4,"lfsrOut", false,-1, 7,1);
    tracep->pushNamePrefix("clktick ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+21,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+5,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay ");
    tracep->declBus(c+22,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+2,"trigger", false,-1);
    tracep->declBus(c+6,"n", false,-1, 9,0);
    tracep->declBit(c+18,"time_out", false,-1);
    tracep->declBus(c+7,"count", false,-1, 9,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+9,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1 ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+19,"en", false,-1);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 8,1);
    tracep->declBit(c+3,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBus(c+10,"current_state", false,-1, 31,0);
    tracep->declBus(c+11,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfsr ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+23,"en", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+4,"lfsr_out", false,-1, 7,1);
    tracep->declBus(c+12,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+18,"b", false,-1);
    tracep->declBit(c+3,"sel", false,-1);
    tracep->declBit(c+19,"out", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vall___024root__trace_init_top(Vall___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_init_top\n"); );
    // Body
    Vall___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vall___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vall___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vall___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vall___024root__trace_register(Vall___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vall___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vall___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vall___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vall___024root__trace_full_sub_0(Vall___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vall___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_full_top_0\n"); );
    // Init
    Vall___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vall___024root*>(voidSelf);
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vall___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vall___024root__trace_full_sub_0(Vall___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vall___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->all__DOT__tick));
    bufp->fullBit(oldp+2,(vlSelf->all__DOT__cmd_delay));
    bufp->fullBit(oldp+3,(vlSelf->all__DOT__cmd_seq));
    bufp->fullCData(oldp+4,(vlSelf->all__DOT__lfsr__DOT__sreg),7);
    bufp->fullSData(oldp+5,(vlSelf->all__DOT__clktick__DOT__count),16);
    bufp->fullSData(oldp+6,(vlSelf->all__DOT__lfsr__DOT__sreg),10);
    bufp->fullSData(oldp+7,(vlSelf->all__DOT__delay__DOT__count),10);
    bufp->fullIData(oldp+8,(vlSelf->all__DOT__delay__DOT__current_state),32);
    bufp->fullIData(oldp+9,(((0U == vlSelf->all__DOT__delay__DOT__current_state)
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
    bufp->fullIData(oldp+10,(vlSelf->all__DOT__f1__DOT__current_state),32);
    bufp->fullIData(oldp+11,((((((((((0U == vlSelf->all__DOT__f1__DOT__current_state) 
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
                                             ? 3U : 
                                            ((3U == vlSelf->all__DOT__f1__DOT__current_state)
                                              ? 4U : 
                                             ((4U == vlSelf->all__DOT__f1__DOT__current_state)
                                               ? 5U
                                               : ((5U 
                                                   == vlSelf->all__DOT__f1__DOT__current_state)
                                                   ? 6U
                                                   : 
                                                  ((6U 
                                                    == vlSelf->all__DOT__f1__DOT__current_state)
                                                    ? 7U
                                                    : 8U)))))))
                               : 0U)),32);
    bufp->fullCData(oldp+12,(vlSelf->all__DOT__lfsr__DOT__sreg),7);
    bufp->fullBit(oldp+13,(vlSelf->clk));
    bufp->fullBit(oldp+14,(vlSelf->rst));
    bufp->fullBit(oldp+15,(vlSelf->en));
    bufp->fullBit(oldp+16,(vlSelf->trigger));
    bufp->fullCData(oldp+17,(vlSelf->data_out),8);
    bufp->fullBit(oldp+18,(vlSelf->time_out));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->all__DOT__cmd_seq)
                             ? (IData)(vlSelf->all__DOT__tick)
                             : (IData)(vlSelf->time_out))));
    bufp->fullIData(oldp+20,(0x10U),32);
    bufp->fullSData(oldp+21,(0x28U),16);
    bufp->fullIData(oldp+22,(0xaU),32);
    bufp->fullBit(oldp+23,(1U));
}
