// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator___024root.h"
#include "Vtop_verilator__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop_verilator___024root___multiclk__TOP__24(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___multiclk__TOP__24\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (2U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) {
                if ((0x39U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x3aU != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x3cU == (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                    = ((0xffffffff00000000ULL 
                                        & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                       | (IData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)));
                            }
                        } else if ((0x3dU == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                    = ((0xffffffffULL 
                                        & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                       | ((QData)((IData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q))) 
                                          << 0x20U));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
        [1U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(((0x1fU >= ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                                          << 3U)) ? 
                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                [1U] >> ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                                         << 3U)) : 0U)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 0U;
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (2U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U)))))))) {
                if ((0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                        = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                            = ((~ ((IData)(1U) << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                    }
                }
            }
        }
    }
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x1eU)) & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                 >> 0x1eU)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x1eU) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x80U | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff1ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | ((0x80000U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                            >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                           << 0x13U)) | ((0x40000U 
                                          & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                                              >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                             << 0x12U)) 
                                         | (0x20000U 
                                            & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                                                >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                               << 0x11U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x10000U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff0fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (((0U < vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel) 
               << 0xfU) | ((0U < vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel) 
                           << 0xeU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x200U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 9U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x100U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x800U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xbU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x400U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xaU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x8000000U | (0xe0ffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) 
              << 0xcU));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = 0ULL;
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (1U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                   >> 
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                >> 0x22U)) 
                                                       << 5U)))))) 
                          << 2U));
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            } else if ((0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) 
                          << 2U));
            } else if ((0x11U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus)) 
                          << 2U));
            } else if ((0x12U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart) 
                                                       << 5U)))))) 
                          << 2U));
            } else if ((0x16U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs)) 
                          << 2U));
            } else if ((0x18U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)) 
                          << 2U));
            } else if ((0x17U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                          (7U & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U)))])) 
                          << 2U));
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            }
        } else if (((((((((0x40U == (0x7fU & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x22U)))) 
                          | (0x13U == (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) 
                         | (0x34U == (0x7fU & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x22U))))) 
                        | (0x35U == (0x7fU & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x22U))))) 
                       | (0x38U == (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U))))) 
                      | (0x39U == (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) 
                     | (0x3aU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) 
                    | (0x3cU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x22U)))))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                = ((0x40U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))
                    ? ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0)) 
                          << 2U)) : ((0x13U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                           >> 0x22U))))
                                      ? ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                         | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1)) 
                                            << 2U))
                                      : ((0x34U == 
                                          (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))
                                          ? ((3ULL 
                                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                             | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2)) 
                                                << 2U))
                                          : ((0x35U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                             >> 0x22U))))
                                              ? ((3ULL 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                 | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3)) 
                                                    << 2U))
                                              : ((0x38U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x22U))))
                                                  ? 
                                                 ((3ULL 
                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                  | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)) 
                                                     << 2U))
                                                  : 
                                                 ((0x39U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                               >> 0x22U))))
                                                   ? 
                                                  ((3ULL 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                   | ((QData)((IData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))) 
                                                      << 2U))
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                >> 0x22U))))
                                                    ? 
                                                   ((3ULL 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                    | ((QData)((IData)((IData)(
                                                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                                                >> 0x20U)))) 
                                                       << 2U))
                                                    : 
                                                   ((1U 
                                                     & ((0U 
                                                         != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                        | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                           >> 0x16U)))
                                                     ? 
                                                    (3ULL 
                                                     | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp)
                                                     : 
                                                    ((3ULL 
                                                      & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                     | ((QData)((IData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))) 
                                                        << 2U))))))))));
        } else if ((0x3dU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                = ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                          | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x16U))) ? (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp)
                    : ((3ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                                   >> 0x20U)))) 
                          << 2U)));
        }
    }
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (2U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x16U == (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if ((0x17U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if ((0x18U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                        }
                    }
                }
            }
        } else if ((0x38U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) {
            if ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x39U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3aU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3cU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3dU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        }
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___combo__TOP__25(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___combo__TOP__25\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                     | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n 
        = ((IData)(vlSelf->rst_ni) & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop_verilator___024root___multiclk__TOP__26(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___multiclk__TOP__26\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = (IData)((((QData)((IData)(((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                      : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata))) 
                    << 0x20U) | (QData)((IData)(((2U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                  ? 
                                                 vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                  : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = (IData)(((((QData)((IData)(((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                       : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata))) 
                     << 0x20U) | (QData)((IData)(((2U 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                   ? 
                                                  vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata)))) 
                   >> 0x20U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = 1U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ ((((0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs) 
                                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                  | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | (0xfffffffcU & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                              << 2U) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((6U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((5U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (2U & ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                      << 1U) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (4U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                        << 2U) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                        [2U];
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                 [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                    [2U];
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                [2U];
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                        [0U];
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                 [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                    = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                       [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                }
            } else if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause 
                            = ((0U != (0x7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs))
                                ? (0x30U | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id))
                                : ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 1U;
                    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 2U;
                    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause 
                            = ((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                ? 0xbU : 8U);
                    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 3U;
                        }
                    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 7U;
                    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 5U;
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
            ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
            : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))
            ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))
                ? ((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((((((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
               [0U]) & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
             & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
            << 1U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                }
            } else if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 0U;
                                }
                            }
                        }
                    }
                }
            } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 1U)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex)
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x10U) | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U)) : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata 
                                                << 0x10U) 
                                               | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                  >> 0x10U)))
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                         >> 0x10U))) & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
              & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                     >> 2U));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec 
        = (0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause));
    if ((0x40U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec = 0x1fU;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
            ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                ? 0x1a110810U : 0x1a110800U) : ((1U 
                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                 ? 
                                                ((0xffffff00U 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                 | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec) 
                                                    << 2U))
                                                 : 
                                                (0xffffff00U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)
                          ? (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                              >> 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec)));
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                 | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                    >> 1U)));
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
        = ((0x20000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        << 0xeU)) | ((0x10000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 9U)) 
                                     | ((0x8000U & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          << 4U)) | 
                                        (0x7fffU & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x10U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id;
        }
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata 
        = (0xc0U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [1U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = 1U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [0U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [1U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 1U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [0U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffffcU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((1U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 1U) | ((0U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 7U))) 
                         & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffff3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((3U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 3U) | (((2U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 7U))) 
                          & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 2U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffffcfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((5U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 5U) | (((4U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 7U))) 
                          & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 4U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffff3fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((7U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 7U) | (((6U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 7U))) 
                          & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 6U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffcffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((9U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 9U) | (((8U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 7U))) 
                          & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffff3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0xbU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0xbU) | (((0xaU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 7U))) 
                            & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                           << 0xaU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffcfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0xdU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0xdU) | (((0xcU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 7U))) 
                            & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                           << 0xcU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffff3fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0xfU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0xfU) | (((0xeU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 7U))) 
                            & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                           << 0xeU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffcffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x11U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x11U) | (((0x10U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfff3ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x13U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x13U) | (((0x12U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x12U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffcfffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x15U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x15U) | (((0x14U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x14U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xff3fffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x17U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x17U) | (((0x16U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x16U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfcffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x19U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x19U) | (((0x18U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x18U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xf3ffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x1bU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x1bU) | (((0x1aU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x1aU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xcfffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x1dU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x1dU) | (((0x1cU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x1cU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x1fU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 7U))) & (0U 
                                                != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x1fU) | (((0x1eU == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x1eU)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id)) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int) 
            & ((~ (IData)((3U == (3U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                         >> 1U)))))))) 
               | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set))) 
           & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 >> 1U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb 
        = (((- (IData)((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
            [0U]) | ((- (IData)((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we) 
                                       >> 1U)))) & 
                     vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
                     [1U]));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | ((0xc000000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x2000000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 0xdU)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                            ? ((0U != (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U)))
                                ? (0x33U | ((0x1f00000U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x12U)) 
                                            | ((0xf8000U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)) 
                                               | (0xf80U 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                : ((0U == (0x1fU & 
                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))
                                    ? 0x100073U : (0xe7U 
                                                   | (0xf8000U 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)))))
                            : ((0U != (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U)))
                                ? (0x33U | ((0x1f00000U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x12U)) 
                                            | (0xf80U 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                : (0x67U | (0xf8000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))));
                }
            } else if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
            } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                 >> 0xdU)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x1013U | ((0x1f00000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                  | ((0xf8000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 8U)) 
                                     | (0xf80U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            }
        }
    } else if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 8U)) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              >> 1U)) 
                                                          | ((0xc00U 
                                                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                             | ((0x300U 
                                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                    << 5U)) 
                                                                | (0x80U 
                                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 5U))))))))));
            } else if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | ((0x80000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))));
            } else if ((0x800U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x400U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xcU)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x20U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x20U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1aU) | 
                                       ((0x2000000U 
                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0xdU)) 
                                        | ((0x1f00000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x12U)) 
                                           | ((0x38000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x45413U | ((0x40000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                   | ((0x1f00000U & 
                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0x38000U 
                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0x380U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 7U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       ((0x18000000U 
                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x18U)) 
                                        | ((0x4000000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U)) 
                                           | ((0x2000000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x17U)) 
                                              | (0x1000000U 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)))))));
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | ((0x80000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))))
                    : (0x13U | (((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | ((0xf8000U 
                                                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 8U)) 
                                                    | (0xf80U 
                                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))));
        }
    } else if ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x842023U | ((0x4000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x15U)) 
                                    | ((0x2000000U 
                                        & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | ((0x700000U 
                                           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | ((0xc00U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                | (0x200U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 3U))))))));
            }
        }
    } else if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x42403U | ((0x4000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))))));
        }
    } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                         >> 0xdU)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
            = (0x10413U | ((0x3c000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x13U)) 
                           | ((0x3000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0xdU)) 
                              | ((0x800000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x12U)) 
                                 | ((0x400000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x10U)) 
                                    | (0x380U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 5U)))))));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 0xcU)))) {
                    if ((0U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 2U)))) {
                        if ((0U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        }
    } else if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x400U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0U == ((0x20U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 2U))))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
    } else if ((0U == (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                >> 5U)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
    }
    if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
            = (1U & ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                      ? ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                           >> 1U) & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                      : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)))));
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
            = (1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
            ? (0xfffffffeU & ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                               ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                   ? 0x100080U : ((1U 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                   ? 0x100080U
                                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                               : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                   ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                       ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                       : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                   : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                       ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))
                                       : 0x100080U))))
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id 
        = ((((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
               & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                  & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)))) 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv)) 
             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump)) 
            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch)) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[1U] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 0U;
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [3U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [3U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [4U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [4U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [5U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [5U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [6U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [6U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [7U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [7U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 0U;
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 2U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [3U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [3U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 3U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [4U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [4U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 4U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [5U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [5U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 5U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [6U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [6U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 6U;
    }
    if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [7U]) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [7U])) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 7U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                           ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                              >> 1U) : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
             ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
             : (0xfffffffcU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
               & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
              << 2U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done 
        = (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[0U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[1U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[2U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[3U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[4U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[5U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (5U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[6U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[7U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[0U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[1U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[2U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[3U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[4U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[5U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (5U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[6U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[7U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[0U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[1U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[2U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[3U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[4U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[5U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (5U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[6U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[7U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[0U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[1U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[2U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[3U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[4U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[5U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (5U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[6U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[7U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[0U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[1U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[2U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[3U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[4U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[5U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (5U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[6U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[7U] 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_req 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
           & ((0xfffffffcU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask
                              [0U])) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base
              [0U]));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
           & ((0xfffffffcU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask
                              [7U])) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base
              [7U]));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb 
        = (((((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
               & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
              & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
             & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done)) 
           & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid) 
                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw) 
                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                 [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
            }
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                [0U]) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                   [0U]) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                 [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            }
        } else if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                    [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                   [0U] ? 0U : 3U);
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                   [0U]) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
             [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
        }
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
               [0U] ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                       ? 1U : 3U));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                        [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = (1U & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                             [0U]));
            } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                       [0U]) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                 [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                [0U]) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                                 [0U]));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                 [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
            }
        } else if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                    [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                   [0U] & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                              [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
             [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
        }
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
            [0U]) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [7U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [7U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [7U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [7U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [7U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
            | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw) 
               | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw))) 
           | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                   & (((1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
                       | (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))) 
                      | (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)))) 
                  & (~ ((0x340U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x14U)) | (0x341U 
                                                  == 
                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))))) 
                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__unused_device_be 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__unused_device_be)) 
           | ((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
               [1U]) | (4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                        [1U])));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d 
        = ((0xff00U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d)) 
           | (0xffU & ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                        [1U]) ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                       [1U] : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d 
        = ((0xffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d)) 
           | (0xff00U & (((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                           [1U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                    [1U] >> 8U) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o) 
                                                   >> 8U)) 
                         << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffffff00U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (0xffU & ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                        [4U]) ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffffff00U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xffU & ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                        [4U]) ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                       >> 0x20U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffffff00U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xffU & ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                        [4U]) ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffffff00U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xffU & ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                        [4U]) ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                       >> 0x20U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffff00ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff00U & (((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                           [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                           >> 8U))) 
                         << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffff00ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff00U & (((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                           [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffff00ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff00U & (((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                           [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 8U))) 
                         << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffff00ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff00U & (((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                           [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xff00ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff0000U & (((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                             [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xff00ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff0000U & (((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                             [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xff00ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff0000U & (((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                             [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xff00ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff0000U & (((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                             [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                         [4U] >> 0x18U) : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                   >> 0x18U))) 
              << 0x18U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                         [4U] >> 0x18U) : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                   >> 0x38U))) 
              << 0x18U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                         [4U] >> 0x18U) : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x18U))) 
              << 0x18U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                         [4U] >> 0x18U) : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x38U))) 
              << 0x18U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xffffff00U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | (0xffU & (- (IData)((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [0U])))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xffff00ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | (0xff00U & ((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                           [0U] >> 1U)))) 
                         << 8U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xff00ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | (0xff0000U & ((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                             [0U] >> 2U)))) 
                           << 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | ((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                [0U] >> 3U)))) << 0x18U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d = 0U;
    if ((0U != (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [4U]))) {
        if ((4U != (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                    [4U]))) {
            if ((8U != (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                        [4U]))) {
                if ((0xcU != (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                              [4U]))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d = 1U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d 
        = ((0U == (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [4U])) ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q)
            : ((4U == (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                       [4U])) ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                         >> 0x20U))
                : ((8U == (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                           [4U])) ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)
                    : ((0xcU == (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                 [4U])) ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x20U))
                        : 0U))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [3U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [3U]) {
        if ((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                   [3U] & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                           [3U])))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d 
                = ((0U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                           [3U])) ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
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
                                                        << 3U))))))
                    : ((4U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                               [3U])) ? 0U : ((8U == 
                                               (0xfffU 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                [3U]))
                                               ? (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid))))
                                               : 0U)));
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((((4U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                     [3U])) & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [3U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                [3U]) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                               [3U])) & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full)) 
                                         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [5U] & (0U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                              [5U]))) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
              [5U]) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
             [5U]) & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)) 
                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [3U]) {
        if ((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                   [3U] & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                           [3U])))) {
            if ((0U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                        [3U]))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_req) 
           | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req) 
              & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                 [7U])));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we 
        = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [4U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
           [4U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req 
        = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [7U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we 
        = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [7U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
           [7U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
        = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [7U] ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
           [7U] : (0xfffffffcU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x200000U 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((0x400000U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x200000U 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((0x400000U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x200000U 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we)) 
           | ((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0x7a1U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0x14U))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we)) 
           | ((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0x7a2U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0x14U))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we)) 
           | (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q) 
                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
               & (0x7a1U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                             >> 0x14U))) << 1U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we)) 
           | (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q) 
                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
               & (0x7a2U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                             >> 0x14U))) << 1U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x200000U 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (0xfffffffcU 
                                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffe7U 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff9ffU 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q) 
                      << 6U));
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                            = 
                                                            ((0x20U 
                                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                 << 2U)) 
                                                             | ((0x10U 
                                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 3U)) 
                                                                | ((0xcU 
                                                                    & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                       >> 9U)) 
                                                                   | ((2U 
                                                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                          >> 0x10U)) 
                                                                      | (1U 
                                                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                            >> 0x15U))))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                                = 
                                                                (0x33U 
                                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | ((0x10U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 1U)) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q) 
                                               << 2U)));
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (0x20U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                               << 1U)));
            if ((3U != (3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                              >> 2U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = (0x3dU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
            }
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x23U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)
                        ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q)
                        : 4U) << 2U));
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
        = (((3U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x1eU)) << 6U) | (((2U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  >> 0x1eU)) 
                                          << 5U) | 
                                         (0x1fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                                                            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata;
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause;
                if ((1U & (~ (IData)((0U != (0x60U 
                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))))))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                        = (0x40U | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    if ((0x40U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o = 1U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                            = (0x80U | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                = (0xbfU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((0x1000000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x800000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x400000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x200000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((0x1000000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x800000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x400000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x200000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) 
                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                     & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                        | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if ((1U & (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            } else {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask 
        = ((0xcU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask)) 
           | (((IData)((0xffU == (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask 
                                           >> 8U)))) 
               << 1U) | (0xffU == (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask 
        = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask)) 
           | ((((IData)((0xffU == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask 
                                   >> 0x18U))) << 1U) 
               | (0xffU == (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask 
                                     >> 0x10U)))) << 2U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7eU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)) 
                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (2U & (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)) 
                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (1U & (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)) 
                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                     | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))) 
                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (2U & (((((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)) 
                        & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                      << 1U) | (0xfffffffeU & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                                << 1U) 
                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))) 
                    | (0xfffffffeU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_d 
        = (((QData)((IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                              & (4U == (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [4U]))) ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata
                              : (IData)(((1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q) 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                          & (0U == 
                                             (0x3ffU 
                                              & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                              [4U])))
                                          ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q))))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
           & (8U == (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                     [4U])));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
           & (0xcU == (0x3ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                       [4U])));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x108U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    if ((0x110U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                        if ((0x118U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                                if ((0U == ((0x3ffU 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                >> 2U)) 
                                            - (IData)(0xe0U)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
                                }
                                if ((1U == ((0x3ffU 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                >> 2U)) 
                                            - (IData)(0xe0U)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x108U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    if ((0x110U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                        if ((0x118U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc = 2U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                [7U]))));
            } else if ((0x108U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x110U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                        = ((~ ((IData)(1U) << (1U & 
                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                               [7U]))) 
                           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                }
            }
        }
    }
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we)))) {
            if ((0x300U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq) 
                           >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                               [7U])))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x5080006fULL;
                }
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = ((IData)(((0x40000U == (0x60000U 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) 
                                    & (0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x18U))))
                            ? 0x600006fULL : 0x380006fULL);
                }
            } else if (((0x380U <= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                        & (0x387U >= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                         >> (0x20U 
                                             & (((IData)(1U) 
                                                 + 
                                                 (0x1ffU 
                                                  & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                       >> 3U) 
                                                      - (IData)(0x70U)) 
                                                     << 1U))) 
                                                << 5U))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                     >> 
                                                     (0x20U 
                                                      & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                           >> 3U) 
                                                          - (IData)(0x70U)) 
                                                         << 6U))))));
            } else if (((0x360U <= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                        & (0x37fU >= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                        (((IData)(0x3fU) 
                                          + (0xc0U 
                                             & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                  >> 3U) 
                                                 - (IData)(4U)) 
                                                << 6U))) 
                                         >> 5U)])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                    (6U 
                                                     & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                          >> 3U) 
                                                         - (IData)(4U)) 
                                                        << 1U))])));
            } else if (((0x338U <= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                        & (0x35fU >= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                        (((IData)(0x3fU) 
                                          + (0x1c0U 
                                             & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                  >> 3U) 
                                                 - (IData)(7U)) 
                                                << 6U))) 
                                         >> 5U)])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                    (0xeU 
                                                     & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                          >> 3U) 
                                                         - (IData)(7U)) 
                                                        << 1U))])));
            } else if (((0x400U <= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                        & (0x7ffU >= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                if ((0U == (0xfffU & ((0xff8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr) 
                                      - (IData)(0x400U))))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                        = (((~ (0xffULL << (8U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel 
                                                  << 3U)))) 
                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata) 
                           | ((QData)((IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                << 1U) 
                                               | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go)))) 
                              << (8U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel 
                                        << 3U))));
                }
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x108U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    if ((0x110U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                        if ((0x118U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x108U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    if ((0x110U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                        if ((0x118U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)))) {
                                if ((0U == ((0x3ffU 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                >> 2U)) 
                                            - (IData)(0xe0U)))) {
                                    if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffffffff00ULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | (IData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                  [7U]))));
                                    }
                                    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffffff00ffULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                      [7U] 
                                                                      >> 8U)))) 
                                                  << 8U));
                                    }
                                    if ((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffff00ffffULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                      [7U] 
                                                                      >> 0x10U)))) 
                                                  << 0x10U));
                                    }
                                    if ((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffff00ffffffULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                   [7U] 
                                                                   >> 0x18U))) 
                                                  << 0x18U));
                                    }
                                }
                                if ((1U == ((0x3ffU 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                                >> 2U)) 
                                            - (IData)(0xe0U)))) {
                                    if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffff00ffffffffULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                   [7U]))) 
                                                  << 0x20U));
                                    }
                                    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffff00ffffffffffULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                      [7U] 
                                                                      >> 8U)))) 
                                                  << 0x28U));
                                    }
                                    if ((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xff00ffffffffffffULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                      [7U] 
                                                                      >> 0x10U)))) 
                                                  << 0x30U));
                                    }
                                    if ((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [7U])) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffffffffULL 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                                   [7U] 
                                                                   >> 0x18U))) 
                                                  << 0x38U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x108U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 1U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                [7U]))));
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x108U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    if ((0x110U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                        if ((0x118U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (0x1ffdU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear 
        = (1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready 
        = (1U & (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                  & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if))) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d 
        = (((QData)((IData)(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we)
                              ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata
                              : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we)
                                          ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata
                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_d 
        = (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
             >= vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q) 
            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q)) 
           & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else if ((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                          >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
        }
    } else {
        if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
              & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                 >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel))) 
             & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
        }
        if ((1U & (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq) 
                      >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel)) 
                     & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel)))) 
                    & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                          >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel)))) 
                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                      >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel))))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
        }
    }
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                          & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                          & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror = 4U;
                }
            }
        }
    }
    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror = 2U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror = 3U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready)) 
            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set))) 
           | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
              & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                         ? 0U : 5U));
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)))) {
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                        }
                    }
                }
                if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                     & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
            }
            if ((1U & (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                        & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                       & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                }
            }
        } else {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            }
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
            }
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & ((((0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                        | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                          >> 2U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 4U : 1U);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (1U | ((0xffffffe0U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
                 | ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))) 
                     << 4U) | (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid))) 
                                << 3U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                          << 2U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffe1fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch) 
               << 8U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump) 
                          << 7U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store) 
                                     << 6U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load) 
                                               << 5U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffe1ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
               << 0xcU) | ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
                            << 0xbU) | ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)) 
                                         << 0xaU) | 
                                        ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch) 
                                         << 9U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw)) 
           & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))
                ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                       >> 2U) & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)))) ? (1ULL 
                                                 + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 3U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 3U) & 
                                         (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 3U))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 4U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x10U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 4U) & 
                                         (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 4U))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 5U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x20U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 5U) & 
                                         (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 5U))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 6U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x40U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 6U) & 
                                         (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 6U))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 7U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x80U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 7U) & 
                                         (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 7U))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 8U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x100U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 8U) & 
                                         (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 8U))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 9U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x200U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 9U) & 
                                         (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 9U))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xaU));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x400U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xaU) 
                                         & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                               >> 0xaU))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xbU));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x800U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xbU) 
                                         & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                               >> 0xbU))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xcU));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xcU) 
                                         & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                               >> 0xcU))))
                                   ? (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                   : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((6U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                >> 1U) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((5U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((0x7ffffffeU & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                               >> 1U) & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
                                         << 1U))) | 
              (0xfffffffeU & ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                                << 1U) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                              & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 << 1U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | ((2U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                       ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                          >> 2U) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                                    >> 1U)) << 1U)) 
              | (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                        ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                           >> 1U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (4U & (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                     << 2U) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | ((2U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                     & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                        << 1U))) | (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                                          & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set))))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (4U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                       << 2U))));
}

VL_INLINE_OPT void Vtop_verilator___024root___multiclk__TOP__27(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___multiclk__TOP__27\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                   [1U]) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                [1U]) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
            }
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                   [1U]) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 4U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
            [1U]) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 3U;
        }
    } else {
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0x14U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
        }
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0xfU))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
    }
    if (((2U < (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    if (((0U != ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel))) 
               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we) {
            if ((0x100U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                if ((0x108U != (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                    if ((0x110U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                            [7U]))));
                    }
                }
            }
        }
    }
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (2U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0xffffffffULL << (0x20U 
                                                  & ((IData)(
                                                             (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x22U)) 
                                                     << 5U)))) 
                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q))) 
                              << (0x20U & ((IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U)) 
                                           << 5U))));
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (1U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x16U != (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if ((0x18U != (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x22U))))) {
                                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (2U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U)))))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x16U == (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                    = ((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                           >> 8U)) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                            }
                        } else if ((0x17U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            }
                        } else if ((0x18U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            }
                        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                            if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror;
    }
}

void Vtop_verilator___024root___sequent__TOP__5(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__6(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__7(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__8(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__9(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___combo__TOP__10(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__11(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__12(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__13(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__14(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__15(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__16(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__17(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___combo__TOP__19(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___multiclk__TOP__20(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__21(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___multiclk__TOP__22(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___sequent__TOP__23(Vtop_verilator___024root* vlSelf);

void Vtop_verilator___024root___eval(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)))) {
        Vtop_verilator___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i)) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop_verilator___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop_verilator___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop_verilator___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)))) {
        Vtop_verilator___024root___sequent__TOP__9(vlSelf);
    }
    Vtop_verilator___024root___combo__TOP__10(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni)))) {
        Vtop_verilator___024root___sequent__TOP__11(vlSelf);
    }
    if ((((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i)) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop_verilator___024root___sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)))) {
        Vtop_verilator___024root___sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop_verilator___024root___sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
         | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk))))) {
        Vtop_verilator___024root___sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk)))) {
        Vtop_verilator___024root___sequent__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk)) 
         & (IData)(vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk))) {
        Vtop_verilator___024root___sequent__TOP__17(vlSelf);
    }
    Vtop_verilator___024root___combo__TOP__19(vlSelf);
    if (((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)))) {
        Vtop_verilator___024root___multiclk__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop_verilator___024root___sequent__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
           | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n))) 
         | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk))))) {
        Vtop_verilator___024root___multiclk__TOP__22(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
         | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk))))) {
        Vtop_verilator___024root___sequent__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if (((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)))) {
        Vtop_verilator___024root___multiclk__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    Vtop_verilator___024root___combo__TOP__25(vlSelf);
    if ((((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
           | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n))) 
         | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk))))) {
        Vtop_verilator___024root___multiclk__TOP__26(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if (((((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
            | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n))) 
         | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk))))) {
        Vtop_verilator___024root___multiclk__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni 
        = vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux 
        = vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n 
        = vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n;
    vlSelf->__Vclklast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk;
    vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni;
    vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux;
    vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n;
}

QData Vtop_verilator___024root___change_request_1(Vtop_verilator___024root* vlSelf);

VL_INLINE_OPT QData Vtop_verilator___024root___change_request(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___change_request\n"); );
    // Body
    return (Vtop_verilator___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop_verilator___024root___change_request_1(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n ^ vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)
         | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux ^ vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)
         | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni ^ vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni));
    VL_DEBUG_IF( if(__req && ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n ^ vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n))) VL_DBG_MSGF("        CHANGE: ../src/lowrisc_ibex_demo_system_core_0/rtl/system/ibex_demo_system.sv:145: top_verilator.u_ibex_demo_system.rst_core_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux ^ vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux))) VL_DBG_MSGF("        CHANGE: ../src/pulp_riscv_debug_module_0/vendor/pulp_riscv_dbg/src/dmi_cdc.sv:64: top_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.combined_rstn_premux\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni ^ vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni))) VL_DBG_MSGF("        CHANGE: ../src/lowrisc_prim_flop_2sync_0/rtl/prim_flop_2sync.sv:15: top_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.__Vcellinp__u_combined_rstn_sync__rst_ni\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n;
    vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux;
    vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni;
    return __req;
}

#ifdef VL_DEBUG
void Vtop_verilator___024root___eval_debug_assertions(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
