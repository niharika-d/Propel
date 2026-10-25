// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator_ibex_pkg.h"
#include "Vtop_verilator__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_verilator_ibex_pkg___ctor_var_reset(Vtop_verilator_ibex_pkg* vlSelf);

Vtop_verilator_ibex_pkg::Vtop_verilator_ibex_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_verilator_ibex_pkg___ctor_var_reset(this);
}

void Vtop_verilator_ibex_pkg::__Vconfigure(Vtop_verilator__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_verilator_ibex_pkg::~Vtop_verilator_ibex_pkg() {
}

void Vtop_verilator_ibex_pkg___initial__TOP__ibex_pkg__1(Vtop_verilator_ibex_pkg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_verilator_ibex_pkg___initial__TOP__ibex_pkg__1\n"); );
    // Body
    vlSelf->__PVT__PmpCfgRst[0U] = 0U;
    vlSelf->__PVT__PmpCfgRst[1U] = 0U;
    vlSelf->__PVT__PmpCfgRst[2U] = 0U;
    vlSelf->__PVT__PmpCfgRst[3U] = 0U;
    vlSelf->__PVT__PmpCfgRst[4U] = 0U;
    vlSelf->__PVT__PmpCfgRst[5U] = 0U;
    vlSelf->__PVT__PmpCfgRst[6U] = 0U;
    vlSelf->__PVT__PmpCfgRst[7U] = 0U;
    vlSelf->__PVT__PmpCfgRst[8U] = 0U;
    vlSelf->__PVT__PmpCfgRst[9U] = 0U;
    vlSelf->__PVT__PmpCfgRst[0xaU] = 0U;
    vlSelf->__PVT__PmpCfgRst[0xbU] = 0U;
    vlSelf->__PVT__PmpCfgRst[0xcU] = 0U;
    vlSelf->__PVT__PmpCfgRst[0xdU] = 0U;
    vlSelf->__PVT__PmpCfgRst[0xeU] = 0U;
    vlSelf->__PVT__PmpCfgRst[0xfU] = 0U;
    vlSelf->__PVT__PmpAddrRst[0U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[1U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[2U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[3U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[4U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[5U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[6U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[7U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[8U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[9U] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[0xaU] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[0xbU] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[0xcU] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[0xdU] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[0xeU] = 0ULL;
    vlSelf->__PVT__PmpAddrRst[0xfU] = 0ULL;
}

void Vtop_verilator_ibex_pkg___ctor_var_reset(Vtop_verilator_ibex_pkg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_verilator_ibex_pkg___ctor_var_reset\n"); );
    // Body
}
