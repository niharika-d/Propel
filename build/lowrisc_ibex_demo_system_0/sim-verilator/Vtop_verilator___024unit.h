// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_verilator.h for the primary calling header

#ifndef VERILATED_VTOP_VERILATOR___024UNIT_H_
#define VERILATED_VTOP_VERILATOR___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop_verilator__Syms;
class Vtop_verilator_VerilatedFst;


//----------

VL_MODULE(Vtop_verilator___024unit) {
  public:

    // INTERNAL VARIABLES
    Vtop_verilator__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_verilator___024unit);  ///< Copying not allowed
  public:
    Vtop_verilator___024unit(const char* name);
    ~Vtop_verilator___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vtop_verilator__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
