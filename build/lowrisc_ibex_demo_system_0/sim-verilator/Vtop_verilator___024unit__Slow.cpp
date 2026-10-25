// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator___024unit.h"
#include "Vtop_verilator__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_verilator___024unit___ctor_var_reset(Vtop_verilator___024unit* vlSelf);

Vtop_verilator___024unit::Vtop_verilator___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_verilator___024unit___ctor_var_reset(this);
}

void Vtop_verilator___024unit::__Vconfigure(Vtop_verilator__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_verilator___024unit::~Vtop_verilator___024unit() {
}

void Vtop_verilator___024unit___ctor_var_reset(Vtop_verilator___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_verilator___024unit___ctor_var_reset\n"); );
}
