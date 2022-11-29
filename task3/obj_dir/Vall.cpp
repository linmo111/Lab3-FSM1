// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vall.h"
#include "Vall__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vall::Vall(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vall__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vall::Vall(const char* _vcname__)
    : Vall(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vall::~Vall() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vall___024root___eval_initial(Vall___024root* vlSelf);
void Vall___024root___eval_settle(Vall___024root* vlSelf);
void Vall___024root___eval(Vall___024root* vlSelf);
#ifdef VL_DEBUG
void Vall___024root___eval_debug_assertions(Vall___024root* vlSelf);
#endif  // VL_DEBUG
void Vall___024root___final(Vall___024root* vlSelf);

static void _eval_initial_loop(Vall__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vall___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vall___024root___eval_settle(&(vlSymsp->TOP));
        Vall___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vall::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vall::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vall___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vall___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vall::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vall::final() {
    Vall___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vall::hierName() const { return vlSymsp->name(); }
const char* Vall::modelName() const { return "Vall"; }
unsigned Vall::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vall::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vall___024root__trace_init_top(Vall___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vall___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vall___024root*>(voidSelf);
    Vall__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vall___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vall___024root__trace_register(Vall___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vall::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vall___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
