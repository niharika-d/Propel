// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop_verilator__Syms.h"


void Vtop_verilator___024root__traceChgSub0(Vtop_verilator___024root* vlSelf, VerilatedFst* tracep);

void Vtop_verilator___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    Vtop_verilator___024root* const __restrict vlSelf = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop_verilator___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop_verilator___024root__traceChgSub0(Vtop_verilator___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+1,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+2,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+3,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+4,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+5,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[5]),32);
            tracep->chgIData(oldp+6,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[6]),32);
            tracep->chgIData(oldp+7,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[7]),32);
            tracep->chgIData(oldp+8,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+9,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+10,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+11,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+12,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+13,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[5]),32);
            tracep->chgIData(oldp+14,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[6]),32);
            tracep->chgIData(oldp+15,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[7]),32);
            tracep->chgIData(oldp+16,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+17,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+18,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+19,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+20,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+21,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[5]),32);
            tracep->chgIData(oldp+22,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[6]),32);
            tracep->chgIData(oldp+23,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[7]),32);
            tracep->chgIData(oldp+24,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+25,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+26,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+27,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+28,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+29,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[5]),32);
            tracep->chgIData(oldp+30,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[6]),32);
            tracep->chgIData(oldp+31,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[7]),32);
            tracep->chgQData(oldp+32,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[0]),34);
            tracep->chgQData(oldp+34,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[1]),34);
            tracep->chgQData(oldp+36,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[2]),34);
            tracep->chgQData(oldp+38,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[3]),34);
            tracep->chgQData(oldp+40,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[4]),34);
            tracep->chgQData(oldp+42,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[5]),34);
            tracep->chgQData(oldp+44,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[6]),34);
            tracep->chgQData(oldp+46,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[7]),34);
            tracep->chgQData(oldp+48,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[8]),34);
            tracep->chgQData(oldp+50,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[9]),34);
            tracep->chgQData(oldp+52,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[10]),34);
            tracep->chgQData(oldp+54,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[11]),34);
            tracep->chgQData(oldp+56,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[12]),34);
            tracep->chgQData(oldp+58,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[13]),34);
            tracep->chgQData(oldp+60,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[14]),34);
            tracep->chgQData(oldp+62,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr[15]),34);
            tracep->chgIData(oldp+64,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0]),22);
            tracep->chgIData(oldp+65,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1]),22);
            tracep->chgQData(oldp+66,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0]),64);
            tracep->chgQData(oldp+68,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1]),64);
            tracep->chgQData(oldp+70,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[0]),34);
            tracep->chgQData(oldp+72,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[1]),34);
            tracep->chgQData(oldp+74,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[2]),34);
            tracep->chgQData(oldp+76,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[3]),34);
            tracep->chgQData(oldp+78,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[4]),34);
            tracep->chgQData(oldp+80,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[5]),34);
            tracep->chgQData(oldp+82,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[6]),34);
            tracep->chgQData(oldp+84,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[7]),34);
            tracep->chgQData(oldp+86,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[8]),34);
            tracep->chgQData(oldp+88,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[9]),34);
            tracep->chgQData(oldp+90,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[10]),34);
            tracep->chgQData(oldp+92,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[11]),34);
            tracep->chgQData(oldp+94,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[12]),34);
            tracep->chgQData(oldp+96,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[13]),34);
            tracep->chgQData(oldp+98,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[14]),34);
            tracep->chgQData(oldp+100,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr[15]),34);
            tracep->chgIData(oldp+102,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[0]),22);
            tracep->chgIData(oldp+103,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[1]),22);
            tracep->chgQData(oldp+104,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[0]),64);
            tracep->chgQData(oldp+106,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[1]),64);
            tracep->chgQData(oldp+108,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+110,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+112,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+114,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3]),34);
            tracep->chgBit(oldp+116,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [0U] >> 5U))));
            tracep->chgCData(oldp+117,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                              [0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+118,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [0U] >> 2U))));
            tracep->chgBit(oldp+119,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [0U] >> 1U))));
            tracep->chgBit(oldp+120,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                      [0U])));
            tracep->chgBit(oldp+121,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [1U] >> 5U))));
            tracep->chgCData(oldp+122,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                              [1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+123,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [1U] >> 2U))));
            tracep->chgBit(oldp+124,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+125,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                      [1U])));
            tracep->chgBit(oldp+126,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [2U] >> 5U))));
            tracep->chgCData(oldp+127,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                              [2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+128,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [2U] >> 2U))));
            tracep->chgBit(oldp+129,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+130,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                      [2U])));
            tracep->chgBit(oldp+131,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [3U] >> 5U))));
            tracep->chgCData(oldp+132,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                              [3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+133,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [3U] >> 2U))));
            tracep->chgBit(oldp+134,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+135,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                      [3U])));
            tracep->chgBit(oldp+136,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[0]));
            tracep->chgBit(oldp+137,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[1]));
            tracep->chgBit(oldp+138,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[2]));
            tracep->chgQData(oldp+139,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+141,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+143,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+145,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
            tracep->chgBit(oldp+147,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [0U] >> 5U))));
            tracep->chgCData(oldp+148,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                              [0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+149,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [0U] >> 2U))));
            tracep->chgBit(oldp+150,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [0U] >> 1U))));
            tracep->chgBit(oldp+151,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U])));
            tracep->chgBit(oldp+152,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [1U] >> 5U))));
            tracep->chgCData(oldp+153,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                              [1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+154,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [1U] >> 2U))));
            tracep->chgBit(oldp+155,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+156,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U])));
            tracep->chgBit(oldp+157,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [2U] >> 5U))));
            tracep->chgCData(oldp+158,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                              [2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+159,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [2U] >> 2U))));
            tracep->chgBit(oldp+160,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+161,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U])));
            tracep->chgBit(oldp+162,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [3U] >> 5U))));
            tracep->chgCData(oldp+163,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                              [3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+164,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [3U] >> 2U))));
            tracep->chgBit(oldp+165,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+166,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U])));
            tracep->chgIData(oldp+167,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[0]),22);
            tracep->chgIData(oldp+168,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[1]),22);
            tracep->chgQData(oldp+169,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[0]),64);
            tracep->chgQData(oldp+171,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[1]),64);
            tracep->chgBit(oldp+173,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                     [0U]));
            tracep->chgBit(oldp+174,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                     [1U]));
            tracep->chgIData(oldp+175,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
            tracep->chgIData(oldp+176,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
            tracep->chgQData(oldp+177,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
            tracep->chgQData(oldp+179,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
            tracep->chgBit(oldp+181,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
            tracep->chgIData(oldp+182,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
            tracep->chgIData(oldp+183,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
            tracep->chgIData(oldp+184,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0]),32);
            tracep->chgIData(oldp+185,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1]),32);
            tracep->chgBit(oldp+186,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                     [2U]));
            tracep->chgQData(oldp+187,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[0]),34);
            tracep->chgQData(oldp+189,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[1]),34);
            tracep->chgQData(oldp+191,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[2]),34);
            tracep->chgQData(oldp+193,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[3]),34);
            tracep->chgQData(oldp+195,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[4]),34);
            tracep->chgQData(oldp+197,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[5]),34);
            tracep->chgQData(oldp+199,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[6]),34);
            tracep->chgQData(oldp+201,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[7]),34);
            tracep->chgQData(oldp+203,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[8]),34);
            tracep->chgQData(oldp+205,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[9]),34);
            tracep->chgQData(oldp+207,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[10]),34);
            tracep->chgQData(oldp+209,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[11]),34);
            tracep->chgQData(oldp+211,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[12]),34);
            tracep->chgQData(oldp+213,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[13]),34);
            tracep->chgQData(oldp+215,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[14]),34);
            tracep->chgQData(oldp+217,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[15]),34);
            tracep->chgBit(oldp+219,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [0U] >> 5U))));
            tracep->chgCData(oldp+220,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+221,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [0U] >> 2U))));
            tracep->chgBit(oldp+222,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [0U] >> 1U))));
            tracep->chgBit(oldp+223,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [0U])));
            tracep->chgBit(oldp+224,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [1U] >> 5U))));
            tracep->chgCData(oldp+225,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+226,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [1U] >> 2U))));
            tracep->chgBit(oldp+227,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+228,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [1U])));
            tracep->chgBit(oldp+229,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [2U] >> 5U))));
            tracep->chgCData(oldp+230,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+231,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [2U] >> 2U))));
            tracep->chgBit(oldp+232,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+233,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [2U])));
            tracep->chgBit(oldp+234,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [3U] >> 5U))));
            tracep->chgCData(oldp+235,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+236,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [3U] >> 2U))));
            tracep->chgBit(oldp+237,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+238,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [3U])));
            tracep->chgQData(oldp+239,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0]),34);
            tracep->chgQData(oldp+241,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1]),34);
            tracep->chgQData(oldp+243,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2]),34);
            tracep->chgQData(oldp+245,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[3]),34);
            tracep->chgIData(oldp+247,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+248,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+249,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+250,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+251,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+252,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+253,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+254,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+255,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+256,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+257,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+258,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+259,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+260,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+261,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+262,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+263,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+264,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+265,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+266,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+267,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+268,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+269,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+270,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+271,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+272,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+273,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+274,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+275,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+276,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+277,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+278,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+279,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
            tracep->chgIData(oldp+280,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
            tracep->chgIData(oldp+281,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
            tracep->chgIData(oldp+282,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
            tracep->chgIData(oldp+283,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
            tracep->chgIData(oldp+284,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
            tracep->chgIData(oldp+285,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
            tracep->chgIData(oldp+286,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
            tracep->chgIData(oldp+287,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
            tracep->chgIData(oldp+288,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
            tracep->chgIData(oldp+289,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
            tracep->chgIData(oldp+290,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
            tracep->chgIData(oldp+291,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
            tracep->chgIData(oldp+292,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
            tracep->chgIData(oldp+293,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
            tracep->chgIData(oldp+294,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
            tracep->chgIData(oldp+295,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
            tracep->chgIData(oldp+296,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
            tracep->chgIData(oldp+297,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
            tracep->chgIData(oldp+298,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
            tracep->chgIData(oldp+299,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
            tracep->chgIData(oldp+300,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
            tracep->chgIData(oldp+301,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
            tracep->chgIData(oldp+302,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
            tracep->chgIData(oldp+303,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
            tracep->chgIData(oldp+304,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
            tracep->chgIData(oldp+305,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
            tracep->chgIData(oldp+306,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
            tracep->chgIData(oldp+307,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
            tracep->chgIData(oldp+308,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
            tracep->chgIData(oldp+309,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
            tracep->chgIData(oldp+310,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
            tracep->chgIData(oldp+311,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_wmask),32);
            tracep->chgCData(oldp+312,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__b_wmask),4);
            tracep->chgBit(oldp+313,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths));
            tracep->chgCData(oldp+314,((0xffU & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+315,((0xfU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+316,((7U & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x11U)))),3);
            tracep->chgBit(oldp+317,((1U & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                    >> 0x10U)))));
            tracep->chgCData(oldp+318,((0xfU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0xcU)))),4);
            tracep->chgSData(oldp+319,((0xfffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
            tracep->chgCData(oldp+320,((0xffU & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+321,((0xfU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+322,((7U & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x31U)))),3);
            tracep->chgBit(oldp+323,((1U & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                    >> 0x30U)))));
            tracep->chgCData(oldp+324,((0xfU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x2cU)))),4);
            tracep->chgSData(oldp+325,((0xfffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                          >> 0x20U)))),12);
            tracep->chgBit(oldp+326,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset));
            tracep->chgBit(oldp+327,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear));
            tracep->chgBit(oldp+328,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr));
            tracep->chgBit(oldp+329,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr));
            tracep->chgBit(oldp+330,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr));
            tracep->chgBit(oldp+331,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select));
            tracep->chgSData(oldp+332,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                        >> 0x12U)),14);
            tracep->chgBit(oldp+333,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                            >> 0x11U))));
            tracep->chgBit(oldp+334,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                            >> 0x10U))));
            tracep->chgBit(oldp+335,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                            >> 0xfU))));
            tracep->chgCData(oldp+336,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+337,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                              >> 0xaU))),2);
            tracep->chgCData(oldp+338,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                                 >> 4U))),6);
            tracep->chgCData(oldp+339,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d)),4);
            tracep->chgBit(oldp+340,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select));
            tracep->chgCData(oldp+341,((0x7fU & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
                                                         >> 0x22U)))),7);
            tracep->chgCData(oldp+342,((3U & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
                                                      >> 0x20U)))),2);
            tracep->chgIData(oldp+343,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req)),32);
            tracep->chgBit(oldp+344,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready));
            tracep->chgBit(oldp+345,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid));
            tracep->chgBit(oldp+346,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req));
            tracep->chgCData(oldp+347,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d),3);
            tracep->chgCData(oldp+348,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d),7);
            tracep->chgCData(oldp+349,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
            tracep->chgCData(oldp+350,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
            tracep->chgCData(oldp+351,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
            tracep->chgBit(oldp+352,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
            tracep->chgBit(oldp+353,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
            tracep->chgBit(oldp+354,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
            tracep->chgIData(oldp+355,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
            tracep->chgBit(oldp+356,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
            tracep->chgBit(oldp+357,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
            tracep->chgBit(oldp+358,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                             ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                             : ((1U 
                                                 == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                 ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                                 : 
                                                ((0x10U 
                                                  == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                   ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)
                                                   : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
            tracep->chgQData(oldp+360,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req),41);
            tracep->chgBit(oldp+362,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready))));
            tracep->chgBit(oldp+363,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req));
            tracep->chgBit(oldp+364,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_ack));
            tracep->chgBit(oldp+365,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_ack)) 
                                      & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready)) 
                                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)))));
            tracep->chgBit(oldp+366,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
            tracep->chgBit(oldp+367,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req));
            tracep->chgBit(oldp+368,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
            tracep->chgBit(oldp+369,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack));
            tracep->chgQData(oldp+370,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx),64);
            tracep->chgQData(oldp+372,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[0]),34);
            tracep->chgQData(oldp+374,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[1]),34);
            tracep->chgQData(oldp+376,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[2]),34);
            tracep->chgQData(oldp+378,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[3]),34);
            tracep->chgQData(oldp+380,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[4]),34);
            tracep->chgQData(oldp+382,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[5]),34);
            tracep->chgQData(oldp+384,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[6]),34);
            tracep->chgQData(oldp+386,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[7]),34);
            tracep->chgQData(oldp+388,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[8]),34);
            tracep->chgQData(oldp+390,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[9]),34);
            tracep->chgQData(oldp+392,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[10]),34);
            tracep->chgQData(oldp+394,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[11]),34);
            tracep->chgQData(oldp+396,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[12]),34);
            tracep->chgQData(oldp+398,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[13]),34);
            tracep->chgQData(oldp+400,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[14]),34);
            tracep->chgQData(oldp+402,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[15]),34);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+404,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req));
            tracep->chgBit(oldp+405,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_ready));
            tracep->chgBit(oldp+406,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+407,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q));
            tracep->chgBit(oldp+408,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack));
            tracep->chgBit(oldp+409,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req));
            tracep->chgBit(oldp+410,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq));
            tracep->chgBit(oldp+411,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack));
            tracep->chgBit(oldp+412,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q));
            tracep->chgBit(oldp+413,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q));
            tracep->chgBit(oldp+414,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q));
            tracep->chgBit(oldp+415,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack));
            tracep->chgBit(oldp+416,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req));
            tracep->chgBit(oldp+417,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+418,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__seen_reset));
            tracep->chgBit(oldp+419,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive));
            tracep->chgIData(oldp+420,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount),32);
            tracep->chgIData(oldp+421,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount),32);
            tracep->chgCData(oldp+422,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+423,(vlSelf->top_verilator__DOT__uart_sys_tx));
            tracep->chgSData(oldp+424,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o),16);
            tracep->chgSData(oldp+425,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o),12);
            tracep->chgBit(oldp+426,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o));
            tracep->chgBit(oldp+427,(((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)) 
                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck))));
            tracep->chgBit(oldp+428,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q));
            tracep->chgBit(oldp+429,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0]));
            tracep->chgBit(oldp+430,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1]));
            tracep->chgBit(oldp+431,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[0]));
            tracep->chgBit(oldp+432,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[1]));
            tracep->chgBit(oldp+433,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[2]));
            tracep->chgBit(oldp+434,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[3]));
            tracep->chgBit(oldp+435,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[4]));
            tracep->chgBit(oldp+436,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[5]));
            tracep->chgBit(oldp+437,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[6]));
            tracep->chgBit(oldp+438,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[7]));
            tracep->chgBit(oldp+439,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg));
            tracep->chgBit(oldp+440,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid));
            tracep->chgBit(oldp+441,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+442,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[0]));
            tracep->chgBit(oldp+443,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[1]));
            tracep->chgBit(oldp+444,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[0]));
            tracep->chgBit(oldp+445,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[1]));
            tracep->chgBit(oldp+446,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[2]));
            tracep->chgBit(oldp+447,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[3]));
            tracep->chgBit(oldp+448,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[4]));
            tracep->chgBit(oldp+449,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[5]));
            tracep->chgBit(oldp+450,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[6]));
            tracep->chgBit(oldp+451,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[7]));
            tracep->chgBit(oldp+452,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp));
            tracep->chgBit(oldp+453,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp));
            tracep->chgCData(oldp+454,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp),3);
            tracep->chgBit(oldp+455,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                                     [0U]));
            tracep->chgBit(oldp+456,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o));
            tracep->chgBit(oldp+457,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_rvalid_o));
            tracep->chgBit(oldp+458,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o));
            tracep->chgIData(oldp+459,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q)
                                         ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)
                                         : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q)
                                             ? (0xffU 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                   >> 0x10U))
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o)))),32);
            tracep->chgCData(oldp+460,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q)),8);
            tracep->chgCData(oldp+461,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+462,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+463,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc),8);
            tracep->chgBit(oldp+464,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q));
            tracep->chgBit(oldp+465,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q));
            tracep->chgBit(oldp+466,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x10U))));
            tracep->chgBit(oldp+467,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+468,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x10U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+469,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+470,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x10U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+471,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x11U))));
            tracep->chgBit(oldp+472,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+473,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x11U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+474,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+475,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x11U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+476,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x12U))));
            tracep->chgBit(oldp+477,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+478,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x12U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+479,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+480,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x12U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+481,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x13U))));
            tracep->chgBit(oldp+482,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+483,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x13U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+484,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+485,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x13U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+486,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+487,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+488,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x14U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+489,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+490,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x14U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x15U))));
            tracep->chgBit(oldp+492,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+493,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x15U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+494,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+495,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x15U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+496,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x16U))));
            tracep->chgBit(oldp+497,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+498,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x16U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+499,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+500,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x16U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x17U))));
            tracep->chgBit(oldp+502,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+503,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x17U)) 
                                          == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+504,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+505,((1U & ((0x1f4U 
                                             <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x17U)
                                             : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+506,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o));
            tracep->chgCData(oldp+507,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+508,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+509,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+510,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+511,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+512,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+513,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+514,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+515,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+516,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+517,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+518,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+519,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+520,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+521,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+522,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+523,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+524,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+525,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+526,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+527,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+528,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+529,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+530,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q),8);
            tracep->chgBit(oldp+531,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+532,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+533,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+534,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+535,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+536,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+537,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+538,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+539,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+540,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+541,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+542,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+543,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+544,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+545,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+546,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+547,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+548,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+549,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+550,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+551,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+552,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+553,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+554,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+555,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q));
            tracep->chgIData(oldp+556,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q),32);
            tracep->chgCData(oldp+557,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q),2);
            tracep->chgCData(oldp+558,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q),3);
            tracep->chgCData(oldp+559,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d),3);
            tracep->chgCData(oldp+560,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q),3);
            tracep->chgBit(oldp+561,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid));
            tracep->chgSData(oldp+562,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q),9);
            tracep->chgSData(oldp+563,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))))),9);
            tracep->chgBit(oldp+564,((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))));
            tracep->chgCData(oldp+565,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q),2);
            tracep->chgCData(oldp+566,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q),3);
            tracep->chgCData(oldp+567,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d),3);
            tracep->chgCData(oldp+568,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q),8);
            tracep->chgBit(oldp+569,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte));
            tracep->chgBit(oldp+570,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q)) 
                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte))));
            tracep->chgCData(oldp+571,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
            tracep->chgBit(oldp+572,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgCData(oldp+573,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
            tracep->chgCData(oldp+574,((0x80U & ((~ 
                                                  ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   >> 7U)) 
                                                 << 7U))),8);
            tracep->chgBit(oldp+575,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                            >> 7U))));
            tracep->chgCData(oldp+576,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
            tracep->chgBit(oldp+577,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgCData(oldp+578,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
            tracep->chgCData(oldp+579,((0x80U & ((~ 
                                                  ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   >> 7U)) 
                                                 << 7U))),8);
            tracep->chgBit(oldp+580,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                            >> 7U))));
            tracep->chgBit(oldp+581,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o));
            tracep->chgCData(oldp+582,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o),8);
            tracep->chgBit(oldp+583,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q));
            tracep->chgBit(oldp+584,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d));
            tracep->chgBit(oldp+585,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q));
            tracep->chgBit(oldp+586,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d) 
                                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q)))));
            tracep->chgCData(oldp+587,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
            tracep->chgBit(oldp+588,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgCData(oldp+589,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
            tracep->chgCData(oldp+590,((0x80U & ((~ 
                                                  ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   >> 7U)) 
                                                 << 7U))),8);
            tracep->chgBit(oldp+591,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                            >> 7U))));
            tracep->chgBit(oldp+592,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count));
            tracep->chgBit(oldp+593,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
            tracep->chgBit(oldp+594,((1U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count))));
            tracep->chgBit(oldp+595,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos));
            tracep->chgBit(oldp+596,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg));
            tracep->chgCData(oldp+597,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q),2);
            tracep->chgBit(oldp+598,((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))));
            tracep->chgCData(oldp+599,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q),3);
            tracep->chgCData(oldp+600,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d),3);
            tracep->chgCData(oldp+601,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q),8);
            tracep->chgCData(oldp+602,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d),8);
            tracep->chgCData(oldp+603,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q),8);
            tracep->chgBit(oldp+604,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o));
            tracep->chgCData(oldp+605,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish),3);
            tracep->chgIData(oldp+606,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd),32);
            tracep->chgBit(oldp+607,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q));
            tracep->chgQData(oldp+608,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q),64);
            tracep->chgQData(oldp+610,((1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q)),64);
            tracep->chgQData(oldp+612,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q),64);
            tracep->chgBit(oldp+614,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgBit(oldp+615,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req));
            tracep->chgIData(oldp+616,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
            tracep->chgBit(oldp+617,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we));
            tracep->chgIData(oldp+618,(((0x1fU >= ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                                                   << 3U))
                                         ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q) 
                                            << ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                                                << 3U))
                                         : 0U)),32);
            tracep->chgCData(oldp+619,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be),4);
            tracep->chgBit(oldp+620,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                                     [1U]));
            tracep->chgBit(oldp+621,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
            tracep->chgBit(oldp+622,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q));
            tracep->chgBit(oldp+623,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q));
            tracep->chgCData(oldp+624,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x18U)),8);
            tracep->chgIData(oldp+625,((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),24);
            tracep->chgBit(oldp+626,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy));
            tracep->chgIData(oldp+627,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
            tracep->chgIData(oldp+628,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
            tracep->chgIData(oldp+629,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
            tracep->chgIData(oldp+630,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
            tracep->chgIData(oldp+631,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
            tracep->chgIData(oldp+632,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
            tracep->chgIData(oldp+633,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
            tracep->chgIData(oldp+634,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
            tracep->chgIData(oldp+635,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q)),32);
            tracep->chgIData(oldp+636,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+637,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel),20);
            tracep->chgIData(oldp+638,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                                        + ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                                            ? ((IData)(1U) 
                                               << (7U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                      >> 0x11U)))
                                            : 0U))),32);
            tracep->chgBit(oldp+639,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+640,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x10U))));
            tracep->chgCData(oldp+641,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+642,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xfU))));
            tracep->chgIData(oldp+643,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q)),32);
            tracep->chgBit(oldp+644,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))));
            tracep->chgBit(oldp+645,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid));
            tracep->chgCData(oldp+646,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror),3);
            tracep->chgIData(oldp+647,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0),32);
            tracep->chgIData(oldp+648,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1),32);
            tracep->chgIData(oldp+649,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2),32);
            tracep->chgIData(oldp+650,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3),32);
            tracep->chgIData(oldp+651,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted),32);
            tracep->chgIData(oldp+652,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
            tracep->chgIData(oldp+653,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
            tracep->chgIData(oldp+654,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
            tracep->chgIData(oldp+655,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1),32);
            tracep->chgIData(oldp+656,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2),32);
            tracep->chgIData(oldp+657,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3),32);
            tracep->chgSData(oldp+658,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
            tracep->chgSData(oldp+659,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
            tracep->chgCData(oldp+660,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
            tracep->chgBit(oldp+661,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+662,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+663,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+664,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+665,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+666,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+667,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 0x10U))),10);
            tracep->chgSData(oldp+668,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 6U))),10);
            tracep->chgCData(oldp+669,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                              >> 4U))),2);
            tracep->chgBit(oldp+670,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 3U))));
            tracep->chgBit(oldp+671,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 2U))));
            tracep->chgBit(oldp+672,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+673,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgCData(oldp+674,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q),3);
            tracep->chgSData(oldp+675,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                        >> 0x10U)),16);
            tracep->chgCData(oldp+676,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                >> 0xcU))),4);
            tracep->chgSData(oldp+677,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
            tracep->chgCData(oldp+678,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                        >> 0x1dU)),3);
            tracep->chgCData(oldp+679,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x17U))),6);
            tracep->chgBit(oldp+680,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x16U))));
            tracep->chgBit(oldp+681,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x15U))));
            tracep->chgBit(oldp+682,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+683,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x10U))));
            tracep->chgBit(oldp+684,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xfU))));
            tracep->chgCData(oldp+685,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+686,((0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 5U))),7);
            tracep->chgBit(oldp+687,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 4U))));
            tracep->chgBit(oldp+688,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 3U))));
            tracep->chgBit(oldp+689,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 2U))));
            tracep->chgBit(oldp+690,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 1U))));
            tracep->chgBit(oldp+691,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)));
            tracep->chgQData(oldp+692,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q),64);
            tracep->chgQData(oldp+694,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q),64);
            tracep->chgBit(oldp+696,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q));
            tracep->chgCData(oldp+697,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q),2);
            tracep->chgCData(oldp+698,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q),2);
            tracep->chgCData(oldp+699,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q),2);
            tracep->chgCData(oldp+700,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q),3);
            tracep->chgCData(oldp+701,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask),4);
            tracep->chgCData(oldp+702,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))),2);
            tracep->chgIData(oldp+703,(((IData)(0xffffffffU) 
                                        << (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                  >> 0x11U)))),32);
            tracep->chgBit(oldp+704,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en));
            tracep->chgIData(oldp+705,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                                         ? ((IData)(1U) 
                                            << (7U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))
                                         : 0U)),32);
            tracep->chgCData(oldp+706,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked),2);
            tracep->chgQData(oldp+707,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
            tracep->chgQData(oldp+709,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
            tracep->chgQData(oldp+711,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
            tracep->chgQData(oldp+713,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
            tracep->chgQData(oldp+715,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
            tracep->chgQData(oldp+717,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
            tracep->chgQData(oldp+719,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
            tracep->chgQData(oldp+721,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
            tracep->chgQData(oldp+723,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
            tracep->chgQData(oldp+725,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
            tracep->chgQData(oldp+727,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
            tracep->chgQData(oldp+729,((((QData)((IData)(
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
            tracep->chgBit(oldp+731,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume));
            tracep->chgBit(oldp+732,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go));
            tracep->chgBit(oldp+733,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
            tracep->chgQData(oldp+734,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q),64);
            tracep->chgBit(oldp+736,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q));
            tracep->chgBit(oldp+737,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel)));
            tracep->chgBit(oldp+738,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q));
            tracep->chgBit(oldp+739,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x17U))));
            tracep->chgCData(oldp+740,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+741,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x13U))));
            tracep->chgBit(oldp+742,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x12U))));
            tracep->chgBit(oldp+743,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x11U))));
            tracep->chgBit(oldp+744,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x10U))));
            tracep->chgSData(oldp+745,((0xffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),16);
            tracep->chgCData(oldp+746,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q),2);
        }
        if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity
                          [3U] | vlSelf->__Vm_traceActivity
                          [4U]) | vlSelf->__Vm_traceActivity
                         [8U]))) {
            tracep->chgIData(oldp+747,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[0]),32);
            tracep->chgIData(oldp+748,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[1]),32);
            tracep->chgIData(oldp+749,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[2]),32);
            tracep->chgIData(oldp+750,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[3]),32);
            tracep->chgIData(oldp+751,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[4]),32);
            tracep->chgIData(oldp+752,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[5]),32);
            tracep->chgIData(oldp+753,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[6]),32);
            tracep->chgIData(oldp+754,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[7]),32);
            tracep->chgCData(oldp+755,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0U : (0xffU 
                                                 & (((0U 
                                                      == 
                                                      (0x18U 
                                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                          << 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x3f8U 
                                                         & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                            << 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x18U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           << 3U))))) 
                                                    | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           >> 2U))] 
                                                       >> 
                                                       (0x18U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           << 3U))))))),8);
            tracep->chgCData(oldp+756,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0U : (0xffU 
                                                 & (((0U 
                                                      == 
                                                      (0x18U 
                                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                          << 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x3f8U 
                                                         & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                            << 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x18U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           << 3U))))) 
                                                    | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           >> 2U))] 
                                                       >> 
                                                       (0x18U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           << 3U))))))),8);
            tracep->chgCData(oldp+757,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0U : ((0x3f7U 
                                                  >= 
                                                  (0x3f8U 
                                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U)))
                                                  ? 
                                                 (0xffU 
                                                  & (((0U 
                                                       == 
                                                       (0x18U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           << 3U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x3f8U 
                                                          & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                             << 3U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x18U 
                                                         & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                            << 3U))))) 
                                                     | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                            >> 2U))] 
                                                        >> 
                                                        (0x18U 
                                                         & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                            << 3U)))))
                                                  : 0U))),8);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [8U]))) {
            tracep->chgBit(oldp+758,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)) 
                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid))));
            tracep->chgBit(oldp+759,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o)) 
                                            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgCData(oldp+760,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o)
                                         ? 0x80U : 
                                        (0xffU & ((
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       >> 7U)))
                                                   ? 
                                                  ((0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                   : 
                                                  (((IData)(0x80U) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                   + 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),8);
            tracep->chgBit(oldp+761,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full)) 
                                            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgCData(oldp+762,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full)
                                         ? 0x80U : 
                                        (0xffU & ((
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       >> 7U)))
                                                   ? 
                                                  ((0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                   : 
                                                  (((IData)(0x80U) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                   + 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),8);
            tracep->chgBit(oldp+763,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                      & (0x7fU == (0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
            tracep->chgIData(oldp+764,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q)
                                         ? (((0U == 
                                              ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)
                                                ? 0x7fU
                                                : (0x7fU 
                                                   & (((1U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                           >> 7U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           >> 7U)))
                                                       ? 
                                                      ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                       : 
                                                      (((IData)(0x7fU) 
                                                        - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                       + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                                             << 1U) 
                                            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full))
                                         : 0U)),32);
            tracep->chgBit(oldp+765,((0U == ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)
                                              ? 0x7fU
                                              : (0x7fU 
                                                 & (((1U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         >> 7U)))
                                                     ? 
                                                    ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                     - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                     : 
                                                    (((IData)(0x7fU) 
                                                      - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                     + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))));
            tracep->chgCData(oldp+766,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)
                                         ? 0x7fU : 
                                        (0x7fU & ((
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       >> 7U)))
                                                   ? 
                                                  ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                   - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                   : 
                                                  (((IData)(0x7fU) 
                                                    - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                   + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))),7);
            tracep->chgBit(oldp+767,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)) 
                                            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgBit(oldp+768,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                      & (0x7eU == (0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgBit(oldp+769,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[0]));
            tracep->chgBit(oldp+770,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[1]));
            tracep->chgIData(oldp+771,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[0]),32);
            tracep->chgIData(oldp+772,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[1]),32);
            tracep->chgBit(oldp+773,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[0]));
            tracep->chgBit(oldp+774,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[1]));
            tracep->chgCData(oldp+775,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[0]),4);
            tracep->chgCData(oldp+776,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[1]),4);
            tracep->chgIData(oldp+777,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[0]),32);
            tracep->chgIData(oldp+778,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[1]),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+779,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[0]));
            tracep->chgBit(oldp+780,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[1]));
            tracep->chgBit(oldp+781,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[2]));
            tracep->chgBit(oldp+782,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[3]));
            tracep->chgBit(oldp+783,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[4]));
            tracep->chgBit(oldp+784,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[5]));
            tracep->chgBit(oldp+785,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[6]));
            tracep->chgBit(oldp+786,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[7]));
            tracep->chgIData(oldp+787,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata),32);
            tracep->chgBit(oldp+788,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[0]));
            tracep->chgBit(oldp+789,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[1]));
            tracep->chgBit(oldp+790,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[2]));
            tracep->chgBit(oldp+791,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[3]));
            tracep->chgBit(oldp+792,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[4]));
            tracep->chgBit(oldp+793,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[5]));
            tracep->chgBit(oldp+794,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[6]));
            tracep->chgBit(oldp+795,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[7]));
            tracep->chgIData(oldp+796,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o),32);
            tracep->chgIData(oldp+797,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i),32);
            tracep->chgCData(oldp+798,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+799,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+800,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+801,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+802,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+803,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+804,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+805,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+806,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+807,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+808,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+809,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+810,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+811,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+812,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+813,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+814,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+815,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+816,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+817,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+818,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+819,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+820,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+821,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+822,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+823,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+824,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+825,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+826,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+827,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+828,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+829,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+830,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
            tracep->chgCData(oldp+831,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+832,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+833,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+834,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
            tracep->chgCData(oldp+835,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+836,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+837,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+838,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
            tracep->chgCData(oldp+839,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+840,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+841,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+842,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
            tracep->chgCData(oldp+843,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+844,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+845,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+846,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
            tracep->chgCData(oldp+847,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+848,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+849,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+850,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
            tracep->chgCData(oldp+851,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+852,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+853,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+854,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
            tracep->chgCData(oldp+855,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+856,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+857,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+858,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
            tracep->chgCData(oldp+859,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+860,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+861,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+862,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
            tracep->chgCData(oldp+863,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+864,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+865,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+866,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
            tracep->chgCData(oldp+867,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+868,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+869,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+870,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
            tracep->chgCData(oldp+871,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+872,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+873,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+874,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
            tracep->chgCData(oldp+875,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+876,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+877,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+878,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
            tracep->chgCData(oldp+879,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+880,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+881,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+882,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
            tracep->chgCData(oldp+883,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+884,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+885,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+886,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
            tracep->chgCData(oldp+887,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+888,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+889,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+890,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
            tracep->chgCData(oldp+891,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+892,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+893,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+894,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
            tracep->chgCData(oldp+895,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+896,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+897,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+898,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
            tracep->chgCData(oldp+899,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+900,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+901,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+902,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
            tracep->chgCData(oldp+903,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+904,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+905,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+906,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
            tracep->chgCData(oldp+907,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+908,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+909,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+910,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
            tracep->chgCData(oldp+911,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+912,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+913,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+914,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
            tracep->chgCData(oldp+915,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+916,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+917,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+918,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
            tracep->chgCData(oldp+919,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+920,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+921,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+922,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
            tracep->chgCData(oldp+923,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+924,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+925,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+926,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+927,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+928,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+929,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+930,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+931,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+932,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+933,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+934,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+935,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+936,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+937,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+938,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+939,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+940,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+941,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+942,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+943,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+944,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+945,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+946,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+947,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+948,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+949,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+950,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+951,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+952,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+953,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+954,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+955,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+956,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+957,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+958,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
            tracep->chgCData(oldp+959,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+960,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+961,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+962,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
            tracep->chgCData(oldp+963,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+964,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+965,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+966,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
            tracep->chgCData(oldp+967,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+968,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+969,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+970,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
            tracep->chgCData(oldp+971,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+972,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+973,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+974,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
            tracep->chgCData(oldp+975,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+976,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+977,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+978,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
            tracep->chgCData(oldp+979,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+980,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+981,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+982,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
            tracep->chgCData(oldp+983,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+984,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+985,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+986,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
            tracep->chgCData(oldp+987,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+988,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+989,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+990,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
            tracep->chgCData(oldp+991,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+992,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+993,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+994,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
            tracep->chgCData(oldp+995,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+996,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+997,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                        >> 0x18U)),8);
            tracep->chgCData(oldp+998,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
            tracep->chgCData(oldp+999,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+1000,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1001,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1002,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
            tracep->chgCData(oldp+1003,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1004,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1005,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1006,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
            tracep->chgCData(oldp+1007,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1008,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1009,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1010,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
            tracep->chgCData(oldp+1011,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1012,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1013,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1014,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
            tracep->chgCData(oldp+1015,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1016,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1017,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1018,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
            tracep->chgCData(oldp+1019,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1020,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1021,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1022,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
            tracep->chgCData(oldp+1023,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1024,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1025,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1026,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
            tracep->chgCData(oldp+1027,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1028,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1029,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1030,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
            tracep->chgCData(oldp+1031,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1032,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1033,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1034,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
            tracep->chgCData(oldp+1035,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1036,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1037,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1038,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
            tracep->chgCData(oldp+1039,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1040,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1041,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1042,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
            tracep->chgCData(oldp+1043,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1044,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1045,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1046,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
            tracep->chgCData(oldp+1047,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1048,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1049,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1050,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
            tracep->chgCData(oldp+1051,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1052,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1053,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1054,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+1055,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1056,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1057,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1058,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+1059,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1060,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1061,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1062,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+1063,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1064,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1065,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1066,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+1067,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1068,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1069,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1070,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+1071,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1072,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1073,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1074,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+1075,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1076,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1077,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1078,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+1079,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1080,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1081,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1082,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+1083,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1084,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1085,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1086,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
            tracep->chgCData(oldp+1087,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1088,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1089,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1090,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
            tracep->chgCData(oldp+1091,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1092,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1093,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1094,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
            tracep->chgCData(oldp+1095,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1096,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1097,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1098,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
            tracep->chgCData(oldp+1099,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1100,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1101,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1102,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
            tracep->chgCData(oldp+1103,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1104,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1105,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1106,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
            tracep->chgCData(oldp+1107,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1108,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1109,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1110,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
            tracep->chgCData(oldp+1111,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1112,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1113,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1114,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
            tracep->chgCData(oldp+1115,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1116,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1117,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1118,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
            tracep->chgCData(oldp+1119,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1120,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1121,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1122,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
            tracep->chgCData(oldp+1123,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1124,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1125,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1126,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
            tracep->chgCData(oldp+1127,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1128,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1129,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1130,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
            tracep->chgCData(oldp+1131,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1132,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1133,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1134,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
            tracep->chgCData(oldp+1135,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1136,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1137,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1138,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
            tracep->chgCData(oldp+1139,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1140,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1141,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1142,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
            tracep->chgCData(oldp+1143,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1144,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1145,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1146,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
            tracep->chgCData(oldp+1147,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1148,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1149,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1150,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
            tracep->chgCData(oldp+1151,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1152,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1153,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1154,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
            tracep->chgCData(oldp+1155,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1156,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1157,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1158,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
            tracep->chgCData(oldp+1159,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1160,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1161,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1162,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
            tracep->chgCData(oldp+1163,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1164,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1165,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1166,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
            tracep->chgCData(oldp+1167,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1168,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1169,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1170,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
            tracep->chgCData(oldp+1171,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1172,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1173,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1174,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
            tracep->chgCData(oldp+1175,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1176,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1177,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1178,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
            tracep->chgCData(oldp+1179,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1180,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  >> 0x10U))),8);
            tracep->chgIData(oldp+1181,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q),32);
            tracep->chgBit(oldp+1182,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q));
            tracep->chgQData(oldp+1183,((0x3ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),34);
            tracep->chgQData(oldp+1185,((0x3ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                               >> 2U)))),34);
            tracep->chgQData(oldp+1187,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata),64);
            tracep->chgCData(oldp+1189,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
            tracep->chgCData(oldp+1190,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d),2);
            tracep->chgIData(oldp+1191,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+1192,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))),2);
            tracep->chgQData(oldp+1193,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d),41);
            tracep->chgIData(oldp+1195,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d),32);
            tracep->chgBit(oldp+1196,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy));
            tracep->chgBit(oldp+1197,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed));
            tracep->chgQData(oldp+1198,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q),34);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+1200,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n));
            tracep->chgBit(oldp+1201,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk));
            tracep->chgBit(oldp+1202,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
            tracep->chgBit(oldp+1203,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+1204,(vlSelf->top_verilator__DOT__uart_sys_rx));
            tracep->chgBit(oldp+1205,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive));
            tracep->chgIData(oldp+1206,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount),32);
            tracep->chgIData(oldp+1207,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount),32);
            tracep->chgSData(oldp+1208,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txsymbol),10);
            tracep->chgIData(oldp+1209,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+1210,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready));
            tracep->chgBit(oldp+1211,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid));
            tracep->chgBit(oldp+1212,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o));
            tracep->chgCData(oldp+1213,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)
                                          ? 2U : (3U 
                                                  & (((1U 
                                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                          >> 1U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                          >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                      - 
                                                      (1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                      : 
                                                     (((IData)(2U) 
                                                       - 
                                                       (1U 
                                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),2);
            tracep->chgBit(oldp+1214,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
            tracep->chgBit(oldp+1215,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
            tracep->chgBit(oldp+1216,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1217,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+1218,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgCData(oldp+1219,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),2);
            tracep->chgCData(oldp+1220,((2U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                   >> 1U)) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1221,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),2);
            tracep->chgCData(oldp+1222,((2U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   >> 1U)) 
                                               << 1U))),2);
            tracep->chgBit(oldp+1223,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1224,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1225,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
            tracep->chgBit(oldp+1226,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
            tracep->chgBit(oldp+1227,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
            tracep->chgBit(oldp+1228,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en));
            tracep->chgBit(oldp+1229,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req));
            tracep->chgBit(oldp+1230,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+1231,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid));
            tracep->chgBit(oldp+1232,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0]));
            tracep->chgBit(oldp+1233,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[1]));
            tracep->chgIData(oldp+1234,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata),32);
            tracep->chgIData(oldp+1235,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rdata),32);
            tracep->chgIData(oldp+1236,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgIData(oldp+1237,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[1]),32);
            tracep->chgBit(oldp+1238,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[0]));
            tracep->chgBit(oldp+1239,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[1]));
            tracep->chgIData(oldp+1240,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+1241,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+1242,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[2]),32);
            tracep->chgIData(oldp+1243,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[3]),32);
            tracep->chgIData(oldp+1244,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[4]),32);
            tracep->chgIData(oldp+1245,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[5]),32);
            tracep->chgIData(oldp+1246,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[6]),32);
            tracep->chgIData(oldp+1247,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[7]),32);
            tracep->chgBit(oldp+1248,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                                      [0U]));
            tracep->chgSData(oldp+1249,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid),15);
            tracep->chgBit(oldp+1250,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1251,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1252,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1253,((0x7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip)),15);
            tracep->chgSData(oldp+1254,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q),9);
            tracep->chgSData(oldp+1255,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))
                                          ? 0U : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start)
                                                   ? 0xd9U
                                                   : 
                                                  (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))))),9);
            tracep->chgBit(oldp+1256,((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))));
            tracep->chgCData(oldp+1257,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d),2);
            tracep->chgCData(oldp+1258,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q),8);
            tracep->chgCData(oldp+1259,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d),8);
            tracep->chgBit(oldp+1260,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start));
            tracep->chgBit(oldp+1261,((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid)))));
            tracep->chgCData(oldp+1262,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d),2);
            tracep->chgCData(oldp+1263,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d),8);
            tracep->chgBit(oldp+1264,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid));
            tracep->chgBit(oldp+1265,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full));
            tracep->chgBit(oldp+1266,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o));
            tracep->chgCData(oldp+1267,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
            tracep->chgBit(oldp+1268,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1269,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgCData(oldp+1270,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
            tracep->chgCData(oldp+1271,((0x80U & ((~ 
                                                   ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+1272,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             >> 7U))));
            tracep->chgBit(oldp+1273,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (0x7fU == 
                                          (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
            tracep->chgCData(oldp+1274,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
            tracep->chgBit(oldp+1275,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+1276,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgCData(oldp+1277,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
            tracep->chgCData(oldp+1278,((0x80U & ((~ 
                                                   ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+1279,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             >> 7U))));
            tracep->chgBit(oldp+1280,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid));
            tracep->chgBit(oldp+1281,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full));
            tracep->chgCData(oldp+1282,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
            tracep->chgBit(oldp+1283,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+1284,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgCData(oldp+1285,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
            tracep->chgCData(oldp+1286,((0x80U & ((~ 
                                                   ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+1287,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             >> 7U))));
            tracep->chgCData(oldp+1288,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d),2);
            tracep->chgCData(oldp+1289,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d),8);
            tracep->chgQData(oldp+1290,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+1292,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgQData(oldp+1293,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0]),34);
            tracep->chgQData(oldp+1295,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1]),34);
            tracep->chgBit(oldp+1297,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1298,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1299,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1300,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
            tracep->chgIData(oldp+1301,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+1302,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgBit(oldp+1303,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+1304,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgIData(oldp+1305,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1306,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1307,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1308,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+1309,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+1310,((3U & ((2U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                   >> 2U)
                                                : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+1311,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgCData(oldp+1312,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
            tracep->chgBit(oldp+1313,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1314,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1315,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgIData(oldp+1316,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1317,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+1318,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgCData(oldp+1319,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+1320,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+1321,(((2U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                  >> 1U)))),2);
            tracep->chgQData(oldp+1322,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
            tracep->chgQData(oldp+1324,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
            tracep->chgBit(oldp+1326,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+1327,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+1328,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgQData(oldp+1329,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
            tracep->chgQData(oldp+1331,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
            tracep->chgBit(oldp+1333,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgBit(oldp+1334,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+1335,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+1336,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+1337,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgBit(oldp+1338,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+1339,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgBit(oldp+1340,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
            tracep->chgBit(oldp+1341,((1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                              >> 5U) 
                                             | (0U 
                                                == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
            tracep->chgQData(oldp+1342,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+1344,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
            tracep->chgQData(oldp+1346,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgIData(oldp+1348,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
            tracep->chgIData(oldp+1349,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
            tracep->chgIData(oldp+1350,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
            tracep->chgIData(oldp+1351,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
            tracep->chgIData(oldp+1352,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
            tracep->chgIData(oldp+1353,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
            tracep->chgQData(oldp+1354,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+1356,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1]),34);
            tracep->chgIData(oldp+1358,(((IData)(1U) 
                                         << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+1359,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                [1U])),32);
            tracep->chgIData(oldp+1360,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+1361,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgBit(oldp+1362,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
            tracep->chgCData(oldp+1363,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgBit(oldp+1364,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+1365,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgBit(oldp+1366,((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
            tracep->chgCData(oldp+1367,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+1368,((3U & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                       [1U] 
                                                       >> 0x20U)))),2);
            tracep->chgCData(oldp+1369,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgIData(oldp+1370,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgCData(oldp+1371,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+1372,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+1373,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+1374,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+1375,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgBit(oldp+1376,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgBit(oldp+1377,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
            tracep->chgCData(oldp+1378,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
            tracep->chgBit(oldp+1379,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q));
            tracep->chgBit(oldp+1380,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q));
            tracep->chgBit(oldp+1381,((((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                        | (1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
            tracep->chgBit(oldp+1382,((((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                        | (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                       [2U])));
            tracep->chgBit(oldp+1383,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgBit(oldp+1384,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 4U))));
            tracep->chgCData(oldp+1385,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1386,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1387,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+1388,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1389,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1390,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1391,((0x7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
            tracep->chgIData(oldp+1392,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1393,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                             >> 6U))));
            tracep->chgBit(oldp+1394,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgCData(oldp+1395,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))),5);
            tracep->chgCData(oldp+1396,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 0x1cU)),4);
            tracep->chgSData(oldp+1397,((0xfffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                   >> 0x10U))),12);
            tracep->chgBit(oldp+1398,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1399,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1400,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1401,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1402,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1403,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1404,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 9U))));
            tracep->chgCData(oldp+1405,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1406,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 5U))));
            tracep->chgBit(oldp+1407,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 4U))));
            tracep->chgBit(oldp+1408,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 3U))));
            tracep->chgBit(oldp+1409,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgCData(oldp+1410,((3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
            tracep->chgIData(oldp+1411,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1412,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1413,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1414,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
            tracep->chgBit(oldp+1415,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 4U))));
            tracep->chgCData(oldp+1416,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               >> 2U))),2);
            tracep->chgIData(oldp+1417,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1418,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                             >> 6U))));
            tracep->chgBit(oldp+1419,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgCData(oldp+1420,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q))),5);
            tracep->chgIData(oldp+1421,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
            tracep->chgSData(oldp+1422,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),13);
            tracep->chgQData(oldp+1423,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+1425,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+1427,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+1429,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+1431,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+1433,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+1435,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+1437,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+1439,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+1441,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+1443,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+1445,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+1447,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+1449,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+1451,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+1453,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+1455,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+1457,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+1459,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+1461,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+1463,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+1465,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+1467,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+1469,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+1471,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+1473,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+1475,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+1477,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+1479,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+1481,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+1483,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+1485,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
            tracep->chgQData(oldp+1487,((1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
            tracep->chgQData(oldp+1489,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
            tracep->chgIData(oldp+1491,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1492,((0x28001048U 
                                         | (4U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                   >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                  << 2U)))),32);
            tracep->chgIData(oldp+1493,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                        [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
            tracep->chgBit(oldp+1494,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 7U))));
            tracep->chgBit(oldp+1495,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 6U))));
            tracep->chgCData(oldp+1496,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1497,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgBit(oldp+1498,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1499,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))));
            tracep->chgQData(oldp+1500,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1502,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1504,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1506,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1508,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1510,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1512,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1514,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1516,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),64);
            tracep->chgQData(oldp+1518,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1520,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
            tracep->chgBit(oldp+1522,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q));
            tracep->chgCData(oldp+1523,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q),2);
            tracep->chgIData(oldp+1524,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0]),32);
            tracep->chgIData(oldp+1525,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1]),32);
            tracep->chgBit(oldp+1526,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                             >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)))));
            tracep->chgCData(oldp+1527,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1528,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgCData(oldp+1529,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
            tracep->chgIData(oldp+1530,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1531,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               >> 2U))),3);
            tracep->chgCData(oldp+1532,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
            tracep->chgCData(oldp+1533,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
            tracep->chgQData(oldp+1534,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1536,((1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
            tracep->chgCData(oldp+1538,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
            tracep->chgQData(oldp+1539,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1541,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1543,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1545,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1547,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1549,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1551,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1553,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1555,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1557,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1559,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1561,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1563,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1565,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1567,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1569,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1571,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1573,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1575,((0xffffffffffULL 
                                         & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
            tracep->chgQData(oldp+1577,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgBit(oldp+1579,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+1580,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1581,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+1582,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1583,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0]),32);
            tracep->chgIData(oldp+1584,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1]),32);
            tracep->chgIData(oldp+1585,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2]),32);
            tracep->chgIData(oldp+1586,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3]),32);
            tracep->chgIData(oldp+1587,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4]),32);
            tracep->chgIData(oldp+1588,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5]),32);
            tracep->chgIData(oldp+1589,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6]),32);
            tracep->chgIData(oldp+1590,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7]),32);
            tracep->chgIData(oldp+1591,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8]),32);
            tracep->chgIData(oldp+1592,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9]),32);
            tracep->chgIData(oldp+1593,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10]),32);
            tracep->chgIData(oldp+1594,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11]),32);
            tracep->chgIData(oldp+1595,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12]),32);
            tracep->chgIData(oldp+1596,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13]),32);
            tracep->chgIData(oldp+1597,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14]),32);
            tracep->chgIData(oldp+1598,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15]),32);
            tracep->chgIData(oldp+1599,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16]),32);
            tracep->chgIData(oldp+1600,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17]),32);
            tracep->chgIData(oldp+1601,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18]),32);
            tracep->chgIData(oldp+1602,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19]),32);
            tracep->chgIData(oldp+1603,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20]),32);
            tracep->chgIData(oldp+1604,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21]),32);
            tracep->chgIData(oldp+1605,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22]),32);
            tracep->chgIData(oldp+1606,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23]),32);
            tracep->chgIData(oldp+1607,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24]),32);
            tracep->chgIData(oldp+1608,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25]),32);
            tracep->chgIData(oldp+1609,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26]),32);
            tracep->chgIData(oldp+1610,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27]),32);
            tracep->chgIData(oldp+1611,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28]),32);
            tracep->chgIData(oldp+1612,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29]),32);
            tracep->chgIData(oldp+1613,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30]),32);
            tracep->chgIData(oldp+1614,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31]),32);
            tracep->chgIData(oldp+1615,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1616,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1617,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1618,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1619,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1620,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1621,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1622,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1623,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1624,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1625,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1626,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1627,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1628,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1629,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1630,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1631,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1632,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1633,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1634,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1635,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1636,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1637,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1638,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1639,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1640,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1641,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1642,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1643,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1644,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1645,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [9U] | vlSelf->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgBit(oldp+1646,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering)))))));
            tracep->chgBit(oldp+1647,((1U & (~ (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                             >> 1U) 
                                                            | ((2U 
                                                                & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                                     >> 1U)))))))))));
            tracep->chgBit(oldp+1648,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
            tracep->chgBit(oldp+1649,(((3U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                          | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
            tracep->chgBit(oldp+1650,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
            tracep->chgBit(oldp+1651,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q))) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))));
            tracep->chgBit(oldp+1652,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q))) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))));
            tracep->chgBit(oldp+1653,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)))));
            tracep->chgIData(oldp+1654,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                          ? (IData)(
                                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                    [0U])
                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
            tracep->chgBit(oldp+1655,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
            tracep->chgQData(oldp+1656,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                          ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                          : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                    << 2U))
                                              : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                     << 3U))
                                                  : 
                                                 ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                   ? 
                                                  (1ULL 
                                                   | ((QData)((IData)(
                                                                      (0x1fffffffU 
                                                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                      << 4U))
                                                   : 
                                                  (1ULL 
                                                   | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                      << 1U))))))),33);
            tracep->chgBit(oldp+1658,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                        ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
            tracep->chgIData(oldp+1659,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                                          ? ((IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 3U)) 
                                             << 2U)
                                          : (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))),32);
            tracep->chgBit(oldp+1660,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                                       & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
            tracep->chgBit(oldp+1661,((((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out)) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [9U] | vlSelf->__Vm_traceActivity
                         [0x10U]))) {
            tracep->chgCData(oldp+1662,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                                           | ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                          | (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))
                                          ? 5U : 0xaU)),4);
            tracep->chgBit(oldp+1663,(((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
            tracep->chgSData(oldp+1664,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                          ? (0x1ffdU 
                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),13);
            tracep->chgBit(oldp+1665,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
            tracep->chgBit(oldp+1666,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 2U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1667,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 3U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1668,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 4U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1669,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 5U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1670,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 6U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1671,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 7U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1672,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 8U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1673,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 9U) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1674,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xaU) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1675,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xbU) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1676,((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xcU) 
                                             & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xcU))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
            tracep->chgCData(oldp+1677,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),5);
            tracep->chgCData(oldp+1678,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))),5);
            tracep->chgCData(oldp+1679,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 7U))),5);
            tracep->chgIData(oldp+1680,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgSData(oldp+1681,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
            tracep->chgBit(oldp+1682,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id));
            tracep->chgBit(oldp+1683,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err));
            tracep->chgBit(oldp+1684,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
            tracep->chgBit(oldp+1685,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+1686,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         << 1U)),32);
            tracep->chgIData(oldp+1687,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id),32);
            tracep->chgSData(oldp+1688,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U)),12);
            tracep->chgIData(oldp+1689,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+1690,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
            tracep->chgIData(oldp+1691,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
            tracep->chgIData(oldp+1692,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
            tracep->chgIData(oldp+1693,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
            tracep->chgCData(oldp+1694,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
            tracep->chgIData(oldp+1695,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
            tracep->chgIData(oldp+1696,((((- (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U))),32);
            tracep->chgIData(oldp+1697,((((- (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
            tracep->chgIData(oldp+1698,((((- (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 7U))))))),32);
            tracep->chgIData(oldp+1699,((0xfffff000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+1700,((((- (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                            | ((0x800U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))))),32);
            tracep->chgIData(oldp+1701,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),32);
            tracep->chgBit(oldp+1702,(((0x340U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                       | (0x341U == 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)))));
            tracep->chgSData(oldp+1703,(((0x3e0U & 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0xaU)) 
                                         | (0x1fU & 
                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 7U)))),10);
            tracep->chgCData(oldp+1704,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x1bU)),5);
            tracep->chgCData(oldp+1705,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))),5);
            tracep->chgBit(oldp+1706,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
            tracep->chgBit(oldp+1707,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
            tracep->chgCData(oldp+1708,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x19U))),3);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [0xaU] | vlSelf->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgBit(oldp+1709,((1U & (((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                                & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                               & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                              & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                             & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))))));
            tracep->chgBit(oldp+1710,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
            tracep->chgBit(oldp+1711,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
            tracep->chgBit(oldp+1712,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                             & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                 >> 1U) 
                                                & (IData)(
                                                          (2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))))));
            tracep->chgBit(oldp+1713,((1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             & (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
            tracep->chgIData(oldp+1714,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                          ? 0U : (0x1fU 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xfU)))),32);
            tracep->chgBit(oldp+1715,(((3U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x1eU)) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [0xaU] | vlSelf->__Vm_traceActivity
                         [0x10U]))) {
            tracep->chgBit(oldp+1716,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id))));
            tracep->chgBit(oldp+1717,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                       [0U] | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                               [1U]))));
            tracep->chgBit(oldp+1718,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err) 
                                       | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                          [0U] | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                   & (3U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                                  [1U])))));
            tracep->chgIData(oldp+1719,((0x7fffffffU 
                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                            + ((2U 
                                                & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
            tracep->chgIData(oldp+1720,((0x7fffffffU 
                                         & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                             ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                >> 1U)
                                             : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                + (
                                                   (2U 
                                                    & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+1721,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid));
            tracep->chgBit(oldp+1722,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid));
            tracep->chgBit(oldp+1723,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid));
            tracep->chgCData(oldp+1724,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                         >> 0x18U)),8);
            tracep->chgIData(oldp+1725,((0xffffffU 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d)),24);
            tracep->chgBit(oldp+1726,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d));
            tracep->chgSData(oldp+1727,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                         >> 0x10U)),16);
            tracep->chgCData(oldp+1728,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0xcU))),4);
            tracep->chgSData(oldp+1729,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
            tracep->chgCData(oldp+1730,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                         >> 0x1dU)),3);
            tracep->chgCData(oldp+1731,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1732,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1733,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1734,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1735,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1736,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1737,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1738,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1739,((0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1740,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 4U))));
            tracep->chgBit(oldp+1741,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 3U))));
            tracep->chgBit(oldp+1742,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 2U))));
            tracep->chgBit(oldp+1743,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 1U))));
            tracep->chgBit(oldp+1744,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d)));
            tracep->chgQData(oldp+1745,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgIData(oldp+1747,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
            tracep->chgIData(oldp+1748,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
            tracep->chgIData(oldp+1749,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
            tracep->chgIData(oldp+1750,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
            tracep->chgIData(oldp+1751,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
            tracep->chgIData(oldp+1752,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
            tracep->chgIData(oldp+1753,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
            tracep->chgIData(oldp+1754,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
            tracep->chgCData(oldp+1755,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                         >> 0x1dU)),3);
            tracep->chgCData(oldp+1756,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1757,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1758,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1759,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1760,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1761,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1762,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1763,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1764,((0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1765,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 4U))));
            tracep->chgBit(oldp+1766,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 3U))));
            tracep->chgBit(oldp+1767,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 2U))));
            tracep->chgBit(oldp+1768,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 1U))));
            tracep->chgBit(oldp+1769,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs)));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
            tracep->chgIData(oldp+1770,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0]),32);
            tracep->chgIData(oldp+1771,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1]),32);
            tracep->chgBit(oldp+1772,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid));
            tracep->chgBit(oldp+1773,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq));
            tracep->chgIData(oldp+1774,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                        [0U]),32);
            tracep->chgIData(oldp+1775,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                        [1U]),32);
            tracep->chgBit(oldp+1776,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq));
            tracep->chgBit(oldp+1777,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart));
            tracep->chgCData(oldp+1778,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq),2);
            tracep->chgCData(oldp+1779,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [0xcU] | vlSelf->__Vm_traceActivity
                         [0x10U]))) {
            tracep->chgCData(oldp+1780,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                                          ? (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                   >> 1U))
                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+1781,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                                          ? (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                   >> 1U))
                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgIData(oldp+1782,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
            tracep->chgIData(oldp+1783,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
            tracep->chgIData(oldp+1784,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+1785,((0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)));
            tracep->chgBit(oldp+1786,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw));
            tracep->chgBit(oldp+1787,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw));
            tracep->chgIData(oldp+1788,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+1789,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+1790,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw))));
            tracep->chgBit(oldp+1791,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1792,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1793,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1794,((0x7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)),15);
            tracep->chgBit(oldp+1795,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgBit(oldp+1796,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw))));
            tracep->chgBit(oldp+1797,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
            tracep->chgCData(oldp+1798,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id),4);
            tracep->chgBit(oldp+1799,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1800,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgIData(oldp+1801,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext),32);
            tracep->chgIData(oldp+1802,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext),32);
            tracep->chgBit(oldp+1803,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgBit(oldp+1804,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1));
            tracep->chgBit(oldp+1805,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [0xdU] | vlSelf->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgIData(oldp+1806,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                              ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                              : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex)
                                          : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex)),32);
            tracep->chgBit(oldp+1807,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)))));
            tracep->chgBit(oldp+1808,((1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
            tracep->chgBit(oldp+1809,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                          & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
            tracep->chgBit(oldp+1810,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                        | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                       | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw) 
                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+1811,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out) 
                                       & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                          [2U]))));
            tracep->chgBit(oldp+1812,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgCData(oldp+1813,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+1814,(((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 3U)) 
                                         << 2U)),32);
            tracep->chgIData(oldp+1815,(((1U & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                  << 0x18U) 
                                                 | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                    >> 8U))
                                              : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                  << 0x10U) 
                                                 | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                    >> 0x10U)))
                                          : ((1U & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                  << 8U) 
                                                 | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                    >> 0x18U))
                                              : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))),32);
            tracep->chgIData(oldp+1816,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[4U]),32);
            tracep->chgIData(oldp+1817,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[3U]),32);
            tracep->chgIData(oldp+1818,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[2U]),32);
            tracep->chgIData(oldp+1819,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[1U]),32);
            tracep->chgIData(oldp+1820,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[0U]),32);
            tracep->chgIData(oldp+1821,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc),32);
            tracep->chgIData(oldp+1822,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc),32);
            tracep->chgIData(oldp+1823,((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc)),32);
            tracep->chgIData(oldp+1824,((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc)),32);
            tracep->chgBit(oldp+1825,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgQData(oldp+1826,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0]),34);
            tracep->chgQData(oldp+1828,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1]),34);
            tracep->chgCData(oldp+1830,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+1831,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgBit(oldp+1832,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgCData(oldp+1833,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+1834,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
            tracep->chgBit(oldp+1835,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)))));
            tracep->chgBit(oldp+1836,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we))));
            tracep->chgIData(oldp+1837,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+1838,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+1839,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
            tracep->chgCData(oldp+1840,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),7);
            tracep->chgIData(oldp+1841,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+1842,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+1843,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex),32);
            tracep->chgBit(oldp+1844,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+1845,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+1846,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+1847,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+1848,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+1849,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+1850,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+1851,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op),2);
            tracep->chgBit(oldp+1852,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
            tracep->chgCData(oldp+1853,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+1854,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+1855,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+1856,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
            tracep->chgBit(oldp+1857,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int));
            tracep->chgBit(oldp+1858,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out));
            tracep->chgBit(oldp+1859,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id));
            tracep->chgBit(oldp+1860,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+1861,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id));
            tracep->chgIData(oldp+1862,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval),32);
            tracep->chgBit(oldp+1863,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering));
            tracep->chgBit(oldp+1864,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save));
            tracep->chgBit(oldp+1865,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
            tracep->chgBit(oldp+1866,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump));
            tracep->chgBit(oldp+1867,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch));
            tracep->chgBit(oldp+1868,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch));
            tracep->chgBit(oldp+1869,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load));
            tracep->chgBit(oldp+1870,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store));
            tracep->chgBit(oldp+1871,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id));
            tracep->chgBit(oldp+1872,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgCData(oldp+1873,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U))),2);
            tracep->chgCData(oldp+1874,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+1875,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
            tracep->chgCData(oldp+1876,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
            tracep->chgBit(oldp+1877,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgQData(oldp+1878,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
            tracep->chgQData(oldp+1880,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
            tracep->chgBit(oldp+1882,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+1883,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+1884,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+1885,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+1886,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+1887,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+1888,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+1889,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+1890,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgBit(oldp+1891,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+1892,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+1893,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+1894,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+1895,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+1896,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+1897,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgIData(oldp+1898,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgBit(oldp+1899,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+1900,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+1901,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgBit(oldp+1902,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+1903,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgCData(oldp+1904,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+1905,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+1906,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+1907,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+1908,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgCData(oldp+1909,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+1910,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+1911,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+1912,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+1913,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+1914,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+1915,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+1916,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+1917,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgCData(oldp+1918,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+1919,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+1920,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgBit(oldp+1921,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+1922,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+1923,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+1924,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+1925,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+1926,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+1927,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+1928,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+1929,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+1930,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+1931,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+1932,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+1933,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+1934,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            tracep->chgQData(oldp+1935,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+1937,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
            tracep->chgIData(oldp+1939,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgQData(oldp+1940,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+1942,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+1944,((0U == (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgBit(oldp+1945,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgQData(oldp+1946,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
            tracep->chgQData(oldp+1948,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
            tracep->chgCData(oldp+1950,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgIData(oldp+1951,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgQData(oldp+1952,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgBit(oldp+1954,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
            tracep->chgBit(oldp+1955,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
            tracep->chgBit(oldp+1956,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
            tracep->chgBit(oldp+1957,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgQData(oldp+1958,((0x1ffffffffULL 
                                         & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                             ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                             : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                 ? 
                                                (~ 
                                                 ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                  << 1U))
                                                 : 
                                                ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                 << 1U))))),33);
            tracep->chgBit(oldp+1960,((1U & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               ^ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b) 
                                              >> 0x1fU)
                                              ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                              : (~ (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 0x20U)))))));
            tracep->chgBit(oldp+1961,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+1962,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgBit(oldp+1963,((8U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgCData(oldp+1964,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgCData(oldp+1965,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgIData(oldp+1966,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+1967,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+1969,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+1971,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+1972,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+1973,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgCData(oldp+1974,(((0x10U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                   >> 0x18U))))) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                             >> 0x18U)))),5);
            tracep->chgCData(oldp+1975,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgBit(oldp+1976,(((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+1977,(((4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgIData(oldp+1978,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1979,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1980,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1981,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+1982,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             >> 5U))));
            tracep->chgQData(oldp+1983,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+1985,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[1]),34);
            tracep->chgQData(oldp+1987,((0x7ffffffffULL 
                                         & (VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                            + VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
            tracep->chgQData(oldp+1989,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+1991,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+1992,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgBit(oldp+1993,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgBit(oldp+1994,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
            tracep->chgQData(oldp+1995,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgQData(oldp+1997,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgQData(oldp+1999,((0x3ffffffffULL 
                                         & ((0x7ffffffffULL 
                                             & VL_MULS_QQQ(35,35,35, 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                            + (0x7ffffffffULL 
                                               & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
            tracep->chgBit(oldp+2001,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+2002,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgBit(oldp+2003,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgIData(oldp+2004,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+2005,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgIData(oldp+2006,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgIData(oldp+2007,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+2008,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgCData(oldp+2010,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
            tracep->chgBit(oldp+2011,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+2012,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+2013,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgBit(oldp+2014,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+2015,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgCData(oldp+2016,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgBit(oldp+2017,((1U & (IData)(
                                                    (1ULL 
                                                     & ((VL_MULS_QQQ(35,35,35, 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                         + 
                                                         VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                        >> 0x22U))))));
            tracep->chgCData(oldp+2018,(((2U & ((IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x21U)) 
                                                << 1U)) 
                                         | (1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgSData(oldp+2019,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+2020,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
            tracep->chgCData(oldp+2021,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
            tracep->chgCData(oldp+2022,((3U & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),2);
            tracep->chgBit(oldp+2023,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
            tracep->chgBit(oldp+2024,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
            tracep->chgCData(oldp+2025,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [0xeU] | vlSelf->__Vm_traceActivity
                         [0x10U]))) {
            tracep->chgBit(oldp+2026,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
            tracep->chgBit(oldp+2027,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+2028,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+2029,((((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access)) 
                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id)))));
            tracep->chgBit(oldp+2030,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access)) 
                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id)))));
            tracep->chgBit(oldp+2031,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready)) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set))) 
                                       | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                          & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear))))));
            tracep->chgBit(oldp+2032,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)))));
            tracep->chgBit(oldp+2033,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                       | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
            tracep->chgBit(oldp+2034,(((7U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
            tracep->chgBit(oldp+2035,(((8U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (8U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
            tracep->chgBit(oldp+2036,(((9U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (9U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
            tracep->chgBit(oldp+2037,(((6U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+2038,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack));
            tracep->chgSData(oldp+2039,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                         >> 0x17U)),9);
            tracep->chgBit(oldp+2040,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x16U))));
            tracep->chgCData(oldp+2041,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                               >> 0x14U))),2);
            tracep->chgBit(oldp+2042,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2043,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2044,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2045,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2046,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2047,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2048,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2049,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2050,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2051,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2052,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 9U))));
            tracep->chgBit(oldp+2053,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 8U))));
            tracep->chgBit(oldp+2054,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 7U))));
            tracep->chgBit(oldp+2055,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 6U))));
            tracep->chgBit(oldp+2056,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 5U))));
            tracep->chgBit(oldp+2057,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 4U))));
            tracep->chgCData(oldp+2058,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus)),4);
            tracep->chgBit(oldp+2059,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+2060,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2061,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2062,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2063,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2064,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1aU))));
            tracep->chgSData(oldp+2065,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 0x10U))),10);
            tracep->chgSData(oldp+2066,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 6U))),10);
            tracep->chgCData(oldp+2067,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                               >> 4U))),2);
            tracep->chgBit(oldp+2068,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 3U))));
            tracep->chgBit(oldp+2069,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 2U))));
            tracep->chgBit(oldp+2070,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 1U))));
            tracep->chgBit(oldp+2071,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)));
            tracep->chgCData(oldp+2072,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                         >> 0x1dU)),3);
            tracep->chgCData(oldp+2073,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                  >> 0x18U))),5);
            tracep->chgSData(oldp+2074,((0x7ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                   >> 0xdU))),11);
            tracep->chgBit(oldp+2075,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2076,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2077,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2078,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+2079,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs)),4);
            tracep->chgQData(oldp+2080,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d),64);
            tracep->chgBit(oldp+2082,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
            tracep->chgIData(oldp+2083,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+2084,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp))),2);
            tracep->chgCData(oldp+2085,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
            tracep->chgQData(oldp+2086,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp),34);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
            tracep->chgBit(oldp+2088,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0]));
            tracep->chgBit(oldp+2089,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1]));
            tracep->chgBit(oldp+2090,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[0]));
            tracep->chgBit(oldp+2091,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1]));
            tracep->chgBit(oldp+2092,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2]));
            tracep->chgBit(oldp+2093,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3]));
            tracep->chgBit(oldp+2094,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4]));
            tracep->chgBit(oldp+2095,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5]));
            tracep->chgBit(oldp+2096,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[6]));
            tracep->chgBit(oldp+2097,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7]));
            tracep->chgIData(oldp+2098,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0]),32);
            tracep->chgIData(oldp+2099,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1]),32);
            tracep->chgIData(oldp+2100,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2]),32);
            tracep->chgIData(oldp+2101,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3]),32);
            tracep->chgIData(oldp+2102,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4]),32);
            tracep->chgIData(oldp+2103,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5]),32);
            tracep->chgIData(oldp+2104,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6]),32);
            tracep->chgIData(oldp+2105,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[7]),32);
            tracep->chgBit(oldp+2106,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[0]));
            tracep->chgBit(oldp+2107,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1]));
            tracep->chgBit(oldp+2108,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2]));
            tracep->chgBit(oldp+2109,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3]));
            tracep->chgBit(oldp+2110,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4]));
            tracep->chgBit(oldp+2111,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5]));
            tracep->chgBit(oldp+2112,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[6]));
            tracep->chgBit(oldp+2113,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7]));
            tracep->chgCData(oldp+2114,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0]),4);
            tracep->chgCData(oldp+2115,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1]),4);
            tracep->chgCData(oldp+2116,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2]),4);
            tracep->chgCData(oldp+2117,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3]),4);
            tracep->chgCData(oldp+2118,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4]),4);
            tracep->chgCData(oldp+2119,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5]),4);
            tracep->chgCData(oldp+2120,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6]),4);
            tracep->chgCData(oldp+2121,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7]),4);
            tracep->chgIData(oldp+2122,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0]),32);
            tracep->chgIData(oldp+2123,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1]),32);
            tracep->chgIData(oldp+2124,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2]),32);
            tracep->chgIData(oldp+2125,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3]),32);
            tracep->chgIData(oldp+2126,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4]),32);
            tracep->chgIData(oldp+2127,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5]),32);
            tracep->chgIData(oldp+2128,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6]),32);
            tracep->chgIData(oldp+2129,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7]),32);
            tracep->chgBit(oldp+2130,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+2131,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt));
            tracep->chgIData(oldp+2132,((0xfffffffcU 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+2133,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_req));
            tracep->chgBit(oldp+2134,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req));
            tracep->chgBit(oldp+2135,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req));
            tracep->chgIData(oldp+2136,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr),32);
            tracep->chgBit(oldp+2137,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we));
            tracep->chgCData(oldp+2138,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [7U]),4);
            tracep->chgIData(oldp+2139,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [7U]),32);
            tracep->chgBit(oldp+2140,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[0]));
            tracep->chgBit(oldp+2141,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[1]));
            tracep->chgBit(oldp+2142,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgBit(oldp+2143,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[1]));
            tracep->chgIData(oldp+2144,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgIData(oldp+2145,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[1]),32);
            tracep->chgBit(oldp+2146,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[0]));
            tracep->chgBit(oldp+2147,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[1]));
            tracep->chgCData(oldp+2148,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[0]),4);
            tracep->chgCData(oldp+2149,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[1]),4);
            tracep->chgIData(oldp+2150,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[0]),32);
            tracep->chgIData(oldp+2151,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[1]),32);
            tracep->chgBit(oldp+2152,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+2153,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+2154,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[2]));
            tracep->chgBit(oldp+2155,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[3]));
            tracep->chgBit(oldp+2156,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[4]));
            tracep->chgBit(oldp+2157,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[5]));
            tracep->chgBit(oldp+2158,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[6]));
            tracep->chgBit(oldp+2159,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[7]));
            tracep->chgIData(oldp+2160,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+2161,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+2162,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgIData(oldp+2163,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[3]),32);
            tracep->chgIData(oldp+2164,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[4]),32);
            tracep->chgIData(oldp+2165,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[5]),32);
            tracep->chgIData(oldp+2166,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[6]),32);
            tracep->chgIData(oldp+2167,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[7]),32);
            tracep->chgBit(oldp+2168,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+2169,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+2170,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[2]));
            tracep->chgBit(oldp+2171,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[3]));
            tracep->chgBit(oldp+2172,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[4]));
            tracep->chgBit(oldp+2173,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[5]));
            tracep->chgBit(oldp+2174,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[6]));
            tracep->chgBit(oldp+2175,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[7]));
            tracep->chgCData(oldp+2176,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[0]),4);
            tracep->chgCData(oldp+2177,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[1]),4);
            tracep->chgCData(oldp+2178,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[2]),4);
            tracep->chgCData(oldp+2179,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[3]),4);
            tracep->chgCData(oldp+2180,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[4]),4);
            tracep->chgCData(oldp+2181,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[5]),4);
            tracep->chgCData(oldp+2182,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[6]),4);
            tracep->chgCData(oldp+2183,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[7]),4);
            tracep->chgIData(oldp+2184,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+2185,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+2186,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgIData(oldp+2187,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[3]),32);
            tracep->chgIData(oldp+2188,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[4]),32);
            tracep->chgIData(oldp+2189,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[5]),32);
            tracep->chgIData(oldp+2190,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[6]),32);
            tracep->chgIData(oldp+2191,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[7]),32);
            tracep->chgBit(oldp+2192,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid));
            tracep->chgBit(oldp+2193,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid));
            tracep->chgBit(oldp+2194,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+2195,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req),3);
            tracep->chgBit(oldp+2196,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                                      [0U]));
            tracep->chgBit(oldp+2197,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o));
            tracep->chgBit(oldp+2198,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
            tracep->chgIData(oldp+2199,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgBit(oldp+2200,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear));
            tracep->chgBit(oldp+2201,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set));
            tracep->chgBit(oldp+2202,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 6U))));
            tracep->chgBit(oldp+2203,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 5U))));
            tracep->chgCData(oldp+2204,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))),5);
            tracep->chgBit(oldp+2205,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy));
            tracep->chgBit(oldp+2206,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en));
            tracep->chgBit(oldp+2207,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready));
            tracep->chgBit(oldp+2208,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+2209,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if));
            tracep->chgBit(oldp+2210,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause));
            tracep->chgBit(oldp+2211,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+2212,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+2213,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgIData(oldp+2214,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr),32);
            tracep->chgBit(oldp+2215,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw));
            tracep->chgIData(oldp+2216,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+2217,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+2218,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+2219,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+2220,((3U != (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgIData(oldp+2221,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc),32);
            tracep->chgCData(oldp+2222,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec),5);
            tracep->chgBit(oldp+2223,((IData)((0U != 
                                               (0x60U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))))));
            tracep->chgBit(oldp+2224,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+2225,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+2226,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)))));
            tracep->chgBit(oldp+2227,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+2228,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+2229,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgIData(oldp+2230,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
            tracep->chgCData(oldp+2231,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+2232,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgCData(oldp+2233,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgCData(oldp+2234,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
            tracep->chgBit(oldp+2235,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgIData(oldp+2236,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+2237,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+2238,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+2239,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+2240,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+2241,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                       | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw)))));
            tracep->chgBit(oldp+2242,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr)));
            tracep->chgBit(oldp+2243,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+2244,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+2245,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+2246,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+2247,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+2248,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgCData(oldp+2249,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgBit(oldp+2250,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+2251,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+2252,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+2253,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            tracep->chgBit(oldp+2254,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
            tracep->chgBit(oldp+2255,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+2256,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+2257,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+2258,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+2259,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgCData(oldp+2260,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgCData(oldp+2261,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
            tracep->chgIData(oldp+2262,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgCData(oldp+2263,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgBit(oldp+2264,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 5U))));
            tracep->chgBit(oldp+2265,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 4U))));
            tracep->chgCData(oldp+2266,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                               >> 2U))),2);
            tracep->chgBit(oldp+2267,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 1U))));
            tracep->chgBit(oldp+2268,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d))));
            tracep->chgBit(oldp+2269,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+2270,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2271,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2272,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0xfU))));
            tracep->chgSData(oldp+2273,((0x7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d)),15);
            tracep->chgBit(oldp+2274,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+2275,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgIData(oldp+2276,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgBit(oldp+2277,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+2278,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                             >> 6U))));
            tracep->chgBit(oldp+2279,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                             >> 5U))));
            tracep->chgCData(oldp+2280,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))),5);
            tracep->chgBit(oldp+2281,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgIData(oldp+2282,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgBit(oldp+2283,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgIData(oldp+2284,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                          ? 0x100001U
                                          : (1U | (0xffffff00U 
                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
            tracep->chgBit(oldp+2285,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgCData(oldp+2286,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                         >> 0x1cU)),4);
            tracep->chgSData(oldp+2287,((0xfffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                   >> 0x10U))),12);
            tracep->chgBit(oldp+2288,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2289,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2290,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2291,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2292,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2293,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2294,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 9U))));
            tracep->chgCData(oldp+2295,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                               >> 6U))),3);
            tracep->chgBit(oldp+2296,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 5U))));
            tracep->chgBit(oldp+2297,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 4U))));
            tracep->chgBit(oldp+2298,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 3U))));
            tracep->chgBit(oldp+2299,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 2U))));
            tracep->chgCData(oldp+2300,((3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
            tracep->chgBit(oldp+2301,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgIData(oldp+2302,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
            tracep->chgBit(oldp+2303,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+2304,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+2305,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+2306,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
            tracep->chgBit(oldp+2307,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgIData(oldp+2308,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+2309,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgIData(oldp+2310,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+2311,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+2312,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgBit(oldp+2313,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgBit(oldp+2314,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 7U))));
            tracep->chgBit(oldp+2315,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 6U))));
            tracep->chgCData(oldp+2316,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2317,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 2U))));
            tracep->chgBit(oldp+2318,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 1U))));
            tracep->chgBit(oldp+2319,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d))));
            tracep->chgBit(oldp+2320,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 7U))));
            tracep->chgBit(oldp+2321,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 6U))));
            tracep->chgCData(oldp+2322,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2323,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgBit(oldp+2324,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+2325,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgBit(oldp+2326,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 7U))));
            tracep->chgBit(oldp+2327,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 6U))));
            tracep->chgCData(oldp+2328,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2329,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 2U))));
            tracep->chgBit(oldp+2330,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 1U))));
            tracep->chgBit(oldp+2331,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata))));
            tracep->chgBit(oldp+2332,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
            tracep->chgIData(oldp+2333,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+2334,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgIData(oldp+2335,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                         >> 0xdU)),19);
            tracep->chgIData(oldp+2336,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                         >> 0xdU)),19);
            tracep->chgIData(oldp+2337,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         >> 0xdU)),19);
            tracep->chgBit(oldp+2338,((1U & ((2U <= vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                             | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))));
            tracep->chgBit(oldp+2339,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+2340,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we),2);
            tracep->chgCData(oldp+2341,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we),2);
            tracep->chgCData(oldp+2342,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgIData(oldp+2343,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgCData(oldp+2344,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),7);
            tracep->chgIData(oldp+2345,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+2346,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+2347,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgQData(oldp+2348,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2350,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+2351,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+2353,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+2354,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 2U))));
            tracep->chgQData(oldp+2355,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2357,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+2358,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
            tracep->chgCData(oldp+2360,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
            tracep->chgBit(oldp+2361,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 3U))));
            tracep->chgBit(oldp+2362,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 3U))));
            tracep->chgQData(oldp+2363,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2365,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2366,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2368,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2369,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 4U))));
            tracep->chgBit(oldp+2370,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 4U))));
            tracep->chgQData(oldp+2371,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2373,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2374,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2376,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2377,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 5U))));
            tracep->chgBit(oldp+2378,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 5U))));
            tracep->chgQData(oldp+2379,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2381,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2382,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2384,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2385,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 6U))));
            tracep->chgBit(oldp+2386,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 6U))));
            tracep->chgQData(oldp+2387,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2389,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2390,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2392,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2393,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 7U))));
            tracep->chgBit(oldp+2394,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 7U))));
            tracep->chgQData(oldp+2395,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2397,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2398,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2400,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2401,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 8U))));
            tracep->chgBit(oldp+2402,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 8U))));
            tracep->chgQData(oldp+2403,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2405,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2406,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2408,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2409,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 9U))));
            tracep->chgBit(oldp+2410,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 9U))));
            tracep->chgQData(oldp+2411,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2413,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2414,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2416,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2417,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2418,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xaU))));
            tracep->chgQData(oldp+2419,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2421,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2422,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2424,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2425,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2426,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xbU))));
            tracep->chgQData(oldp+2427,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2429,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2430,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2432,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2433,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2434,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xcU))));
            tracep->chgQData(oldp+2435,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2437,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2438,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2440,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2441,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))));
            tracep->chgBit(oldp+2442,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))));
            tracep->chgBit(oldp+2443,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) 
                                             >> 1U))));
            tracep->chgBit(oldp+2444,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) 
                                             >> 1U))));
            tracep->chgIData(oldp+2445,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),32);
            tracep->chgBit(oldp+2446,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)));
            tracep->chgBit(oldp+2447,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                      [0U]));
            tracep->chgBit(oldp+2448,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                      [0U]));
            tracep->chgCData(oldp+2449,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [0U]),4);
            tracep->chgIData(oldp+2450,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [0U]),32);
            tracep->chgIData(oldp+2451,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [0U]),32);
            tracep->chgSData(oldp+2452,((0x7fffU & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [0U] >> 2U))),15);
            tracep->chgIData(oldp+2453,(((0x1fffcU 
                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [0U] >> 0xfU)) 
                                         | (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                            [0U]))),17);
            tracep->chgSData(oldp+2454,((0x7fffU & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                                          >> 2U))),15);
            tracep->chgIData(oldp+2455,((0x1fffcU & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                                          >> 0xfU))),17);
            tracep->chgIData(oldp+2456,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask),32);
            tracep->chgCData(oldp+2457,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask),4);
            tracep->chgBit(oldp+2458,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                      [1U]));
            tracep->chgIData(oldp+2459,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [1U]),32);
            tracep->chgBit(oldp+2460,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                      [1U]));
            tracep->chgCData(oldp+2461,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [1U]),4);
            tracep->chgIData(oldp+2462,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [1U]),32);
            tracep->chgSData(oldp+2463,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                         [1U])),12);
            tracep->chgSData(oldp+2464,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d),16);
            tracep->chgBit(oldp+2465,(((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                        [1U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                        [1U]) & (0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                  [1U])))));
            tracep->chgBit(oldp+2466,(((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                        [1U] & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                                [1U])) 
                                       & (4U == (0xfffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                 [1U])))));
            tracep->chgBit(oldp+2467,(((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                        [1U] & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                                [1U])) 
                                       & (8U == (0xfffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                 [1U])))));
            tracep->chgCData(oldp+2468,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__unused_device_be),4);
            tracep->chgIData(oldp+2469,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                         [1U] >> 0xcU)),20);
            tracep->chgSData(oldp+2470,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                         [1U] >> 0x10U)),16);
            tracep->chgBit(oldp+2471,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                      [2U]));
            tracep->chgIData(oldp+2472,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U]),32);
            tracep->chgBit(oldp+2473,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                      [2U]));
            tracep->chgCData(oldp+2474,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [2U]),4);
            tracep->chgIData(oldp+2475,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [2U]),32);
            tracep->chgCData(oldp+2476,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                         [2U])),8);
            tracep->chgBit(oldp+2477,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2478,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2479,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (1U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2480,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (1U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2481,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (2U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2482,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (2U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2483,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2484,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2485,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (4U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2486,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (4U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2487,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (5U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2488,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (5U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2489,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (6U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2490,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (6U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2491,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (7U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2492,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (7U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2493,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (8U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2494,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (8U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2495,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (9U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2496,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (9U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2497,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (0xaU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2498,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (0xaU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2499,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2500,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [2U]) & (0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2501,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                      [3U]));
            tracep->chgIData(oldp+2502,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [3U]),32);
            tracep->chgBit(oldp+2503,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                      [3U]));
            tracep->chgCData(oldp+2504,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [3U]),4);
            tracep->chgIData(oldp+2505,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [3U]),32);
            tracep->chgIData(oldp+2506,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d),32);
            tracep->chgBit(oldp+2507,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d));
            tracep->chgSData(oldp+2508,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                         [3U])),12);
            tracep->chgBit(oldp+2509,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready));
            tracep->chgBit(oldp+2510,(((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                        [3U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [3U]) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                       [3U])));
            tracep->chgBit(oldp+2511,(((4U == (0xfffU 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                               [3U])) 
                                       & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                           [3U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                           [3U]) & 
                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                          [3U]))));
            tracep->chgIData(oldp+2512,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                         [3U] >> 0xcU)),20);
            tracep->chgCData(oldp+2513,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                               [3U] 
                                               >> 1U))),3);
            tracep->chgIData(oldp+2514,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                         [3U] >> 8U)),24);
            tracep->chgBit(oldp+2515,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgCData(oldp+2516,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                         [3U])),8);
            tracep->chgBit(oldp+2517,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2518,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                      [5U]));
            tracep->chgIData(oldp+2519,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [5U]),32);
            tracep->chgBit(oldp+2520,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                      [5U]));
            tracep->chgCData(oldp+2521,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [5U]),4);
            tracep->chgIData(oldp+2522,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [5U]),32);
            tracep->chgSData(oldp+2523,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                         [5U])),12);
            tracep->chgBit(oldp+2524,(((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                        [5U] & (4U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                 [5U]))) 
                                       & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                          [5U]))));
            tracep->chgBit(oldp+2525,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                         [5U] & (0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                  [5U]))) 
                                        & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                        [5U]) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                       [5U])));
            tracep->chgIData(oldp+2526,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                         [5U] >> 0xcU)),20);
            tracep->chgCData(oldp+2527,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                               [5U] 
                                               >> 1U))),3);
            tracep->chgIData(oldp+2528,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                         [5U] >> 8U)),24);
            tracep->chgCData(oldp+2529,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                         [5U])),8);
            tracep->chgBit(oldp+2530,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2531,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                      [6U]));
            tracep->chgBit(oldp+2532,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                      [6U]));
            tracep->chgCData(oldp+2533,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [6U]),4);
            tracep->chgIData(oldp+2534,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [6U]),32);
            tracep->chgIData(oldp+2535,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [6U]),32);
            tracep->chgCData(oldp+2536,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                  [6U] 
                                                  >> 2U))),8);
            tracep->chgBit(oldp+2537,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                      [4U]));
            tracep->chgIData(oldp+2538,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [4U]),32);
            tracep->chgBit(oldp+2539,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                      [4U]));
            tracep->chgCData(oldp+2540,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                        [4U]),4);
            tracep->chgIData(oldp+2541,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                        [4U]),32);
            tracep->chgBit(oldp+2542,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we));
            tracep->chgBit(oldp+2543,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                       & (0U == (0x3ffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                 [4U])))));
            tracep->chgBit(oldp+2544,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                       & (4U == (0x3ffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                 [4U])))));
            tracep->chgBit(oldp+2545,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we));
            tracep->chgBit(oldp+2546,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we));
            tracep->chgIData(oldp+2547,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata),32);
            tracep->chgIData(oldp+2548,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata),32);
            tracep->chgIData(oldp+2549,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata),32);
            tracep->chgIData(oldp+2550,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata),32);
            tracep->chgBit(oldp+2551,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d));
            tracep->chgIData(oldp+2552,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d),32);
            tracep->chgBit(oldp+2553,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                                      [1U]));
            tracep->chgBit(oldp+2554,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid));
            tracep->chgCData(oldp+2555,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror),3);
            tracep->chgIData(oldp+2556,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o)),32);
            tracep->chgIData(oldp+2557,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+2558,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid));
            tracep->chgBit(oldp+2559,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned))));
            tracep->chgBit(oldp+2560,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going));
            tracep->chgBit(oldp+2561,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception));
            tracep->chgQData(oldp+2562,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d),64);
            tracep->chgBit(oldp+2564,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                       [7U])));
            tracep->chgCData(oldp+2565,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned),2);
            tracep->chgCData(oldp+2566,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned),2);
            tracep->chgBit(oldp+2567,((0x800U <= (0xfffU 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))));
            tracep->chgCData(oldp+2568,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d),2);
            tracep->chgIData(oldp+2569,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits)),32);
            tracep->chgIData(oldp+2570,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+2571,((0xffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata))),8);
            tracep->chgCData(oldp+2572,((0xffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2573,((0xffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2574,((0xffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2575,((0xffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+2576,((0xffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+2577,((0xffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+2578,((0xffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x38U)))),8);
            tracep->chgQData(oldp+2579,((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))),64);
            tracep->chgIData(oldp+2581,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc),32);
            tracep->chgIData(oldp+2582,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
            tracep->chgCData(oldp+2583,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d),3);
            tracep->chgIData(oldp+2584,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d)),32);
            tracep->chgIData(oldp+2585,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+2586,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                         >> 0x1dU)),3);
            tracep->chgCData(oldp+2587,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                  >> 0x18U))),5);
            tracep->chgSData(oldp+2588,((0x7ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                   >> 0xdU))),11);
            tracep->chgBit(oldp+2589,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2590,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2591,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2592,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+2593,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
            tracep->chgCData(oldp+2594,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d),3);
            tracep->chgBit(oldp+2595,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned))));
            tracep->chgCData(oldp+2596,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        }
        tracep->chgBit(oldp+2597,(vlSelf->clk_i));
        tracep->chgBit(oldp+2598,(vlSelf->rst_ni));
        tracep->chgBit(oldp+2599,((1U & (~ (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                                            | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs))))));
        tracep->chgCData(oldp+2600,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q),4);
        tracep->chgBit(oldp+2601,((1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                                         | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+2602,((1U & VL_REDXOR_32(
                                                     (7U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                                         >> 1U))))));
        tracep->chgIData(oldp+2603,(((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                                      ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext
                                      : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                                          ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext
                                          : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                  ? 
                                                 ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                   [0U] 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x10U)))
                                                  : 
                                                 ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                   [0U] 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 8U))))
                                              : ((1U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                  ? 
                                                 ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                   [0U] 
                                                   << 0x18U) 
                                                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                                  : 
                                                 vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                 [0U]))))),32);
        tracep->chgBit(oldp+2604,(((((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                                     [0U]) & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                   & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgBit(oldp+2605,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                                    | (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                   & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
        tracep->chgIData(oldp+2606,(((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                      ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                          ? 0x100080U
                                          : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? 0x100080U
                                              : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                      : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                          ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                              : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                          : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U))
                                              : 0x100080U)))),32);
        tracep->chgBit(oldp+2607,((1U & ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                          ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? 0x100080U
                                              : ((1U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                  ? 0x100080U
                                                  : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                          : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                  ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                                  : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                              : ((1U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                  ? (IData)(
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 1U))
                                                  : 0x100080U))))));
        tracep->chgBit(oldp+2608,((1U & ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                            & (3U == 
                                               (3U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                                           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                           [1U]) | 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U) 
                                              & (IData)(
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))) 
                                         & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                            [0U])))));
        tracep->chgIData(oldp+2609,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                       ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                                       : (0xfffffffcU 
                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+2610,(((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                          << 0x10U) 
                                         | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                            >> 0x10U))
                                      : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata 
                                          << 0x10U) 
                                         | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                            >> 0x10U)))),32);
        tracep->chgBit(oldp+2611,((1U & ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))));
        tracep->chgBit(oldp+2612,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                   & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgBit(oldp+2613,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                    & (((1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
                                        | (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))) 
                                       | (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)))) 
                                   & (~ ((0x340U == 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)) 
                                         | (0x341U 
                                            == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)))))));
        tracep->chgCData(oldp+2614,(((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))
                                      ? 2U : (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                               ? 1U
                                               : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                                    ? 4U
                                                    : 0U))))),3);
        tracep->chgBit(oldp+2615,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                   | ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                        & (((1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
                                            | (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))) 
                                           | (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)))) 
                                       & (~ ((0x340U 
                                              == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)) 
                                             | (0x341U 
                                                == 
                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))))) 
                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+2616,(((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                     & (((1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
                                         | (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))) 
                                        | (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)))) 
                                    & (~ ((0x340U == 
                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)) 
                                          | (0x341U 
                                             == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))))) 
                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
        tracep->chgBit(oldp+2617,((1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                         | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 2U)))));
        tracep->chgBit(oldp+2618,((((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                    & (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns))) 
                                   & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                      | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 2U)))));
        tracep->chgBit(oldp+2619,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                   & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgIData(oldp+2620,(((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                              [0U] 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U)))
                                          : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                              [0U] 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 8U))))
                                      : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                              [0U] 
                                              << 0x18U) 
                                             | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                          : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                         [0U]))),32);
        tracep->chgBit(oldp+2621,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)))));
        tracep->chgBit(oldp+2622,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                                   & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                                       [0U]) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)))));
        tracep->chgBit(oldp+2623,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw) 
                                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw)) 
                                   & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))));
        tracep->chgBit(oldp+2624,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw) 
                                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw)) 
                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
        tracep->chgIData(oldp+2625,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+2626,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgBit(oldp+2627,(((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1cU)) 
                                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+2628,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr) 
                                   & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+2629,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                   & (0x7a0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))));
        tracep->chgCData(oldp+2630,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3f8U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         << 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U))))) 
                                              | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 2U))] 
                                                 >> 
                                                 (0x18U 
                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U)))))),8);
        tracep->chgBit(oldp+2631,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                   & (0x7fU == (0x7fU 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
        tracep->chgCData(oldp+2632,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3f8U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         << 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U))))) 
                                              | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 2U))] 
                                                 >> 
                                                 (0x18U 
                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U)))))),8);
        tracep->chgBit(oldp+2633,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                   & (0x7fU == (0x7fU 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        tracep->chgCData(oldp+2634,(((0x3f7U >= (0x3f8U 
                                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    << 3U)))
                                      ? (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x18U 
                                                     & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x3f8U 
                                                       & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                          << 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x18U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         << 3U))))) 
                                                  | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         >> 2U))] 
                                                     >> 
                                                     (0x18U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         << 3U)))))
                                      : 0U)),8);
        tracep->chgBit(oldp+2635,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                   & (0x7eU == (0x7fU 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        tracep->chgQData(oldp+2636,((((QData)((IData)(
                                                      (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                                        & (4U 
                                                           == 
                                                           (0x3ffU 
                                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                            [4U])))
                                                        ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata
                                                        : (IData)(
                                                                  ((1ULL 
                                                                    + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q) 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                                                    & (0U 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                                        [4U])))
                                                                    ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata
                                                                    : 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q))))))),64);
        tracep->chgQData(oldp+2638,((((QData)((IData)(
                                                      ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we)
                                                        ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata
                                                        : (IData)(
                                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we)
                                                                    ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata
                                                                    : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)))))),64);
        tracep->chgBit(oldp+2640,((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                     >= vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q) 
                                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q)) 
                                   & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
                                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))))));
        tracep->chgIData(oldp+2641,(((0x1fU >= ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                                                << 3U))
                                      ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                         [1U] >> ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                                                  << 3U))
                                      : 0U)),32);
        tracep->chgIData(oldp+2642,((IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                               ? 0ULL
                                               : ((0x43U 
                                                   >= 
                                                   (0x7fU 
                                                    & ((IData)(0x22U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                   ? 
                                                  (0x3ffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x22U) 
                                                                             * 
                                                                             (1U 
                                                                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             (1U 
                                                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             (1U 
                                                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x22U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                           (((IData)(0x1fU) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(0x22U) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                            (3U 
                                                                             & (((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                                >> 5U))])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(0x22U) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                                   : 0ULL)) 
                                             >> 2U))),32);
        tracep->chgCData(oldp+2643,((3U & (IData)(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                    ? 0ULL
                                                    : 
                                                   ((0x43U 
                                                     >= 
                                                     (0x7fU 
                                                      & ((IData)(0x22U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                     ? 
                                                    (0x3ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x22U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                           ? 0x20U
                                                           : 
                                                          ((IData)(0x40U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x22U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(0x22U) 
                                                                 * 
                                                                 (1U 
                                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(
                                                                             vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                             (((IData)(0x1fU) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(0x22U) 
                                                                  * 
                                                                  (1U 
                                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                              (3U 
                                                                               & (((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                                >> 5U))])) 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x22U) 
                                                                  * 
                                                                  (1U 
                                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                                     : 0ULL))))),2);
        tracep->chgBit(oldp+2644,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux));
        tracep->chgQData(oldp+2645,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                      ? 0ULL : ((0x43U 
                                                 >= 
                                                 (0x7fU 
                                                  & ((IData)(0x22U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                 ? 
                                                (0x3ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           (1U 
                                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             (1U 
                                                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (3U 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                                 : 0ULL))),34);
        tracep->chgQData(oldp+2647,(((0x43U >= (0x7fU 
                                                & ((IData)(0x22U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                      ? (0x3ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                             (((IData)(0x21U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x22U) 
                                                                   * 
                                                                   (1U 
                                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x22U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x22U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (3U 
                                                                   & (((IData)(0x22U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                      : 0ULL)),34);
        tracep->chgBit(oldp+2649,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__u_combined_rstn_sync__DOT__intq));
        tracep->chgBit(oldp+2650,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready))));
        tracep->chgBit(oldp+2651,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack)) 
                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) 
                                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)))));
    }
}

void Vtop_verilator___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    Vtop_verilator___024root* const __restrict vlSelf = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    }
}
