// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_verilator.h for the primary calling header

#ifndef VERILATED_VTOP_VERILATOR_IBEX_PKG_H_
#define VERILATED_VTOP_VERILATOR_IBEX_PKG_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop_verilator__Syms;
class Vtop_verilator_VerilatedFst;


//----------

VL_MODULE(Vtop_verilator_ibex_pkg) {
  public:

    // INTERNAL VARIABLES
    Vtop_verilator__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    VlUnpacked<CData/*5:0*/, 16> __PVT__PmpCfgRst;
    VlUnpacked<QData/*33:0*/, 16> __PVT__PmpAddrRst;

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_verilator_ibex_pkg);  ///< Copying not allowed
  public:
    Vtop_verilator_ibex_pkg(const char* name);
    ~Vtop_verilator_ibex_pkg();

    // INTERNAL METHODS
    void __Vconfigure(Vtop_verilator__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
