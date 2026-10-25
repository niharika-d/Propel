// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator___024root.h"
#include "Vtop_verilator__Syms.h"

#include "verilated_dpi.h"

void Vtop_verilator___024root___settle__TOP__3(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___settle__TOP__3\n"); );
    // Body
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[0U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex)
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done 
        = (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb 
        = (((- (IData)((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
            [0U]) | ((- (IData)((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we) 
                                       >> 1U)))) & 
                     vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
                     [1U]));
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
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0U] 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d
            [0U];
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1U] 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d
            [1U];
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0U] 
            = (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [0U]));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1U] 
            = (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [1U]));
    }
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o
        [1U];
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex
        [1U];
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

void Vtop_verilator___024root___settle__TOP__18(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___settle__TOP__18\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
                        = (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                            >> 0x22U)));
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
            }
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 4U;
            }
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 2U;
        }
    } else if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
        if ((1U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 1U;
        } else if ((2U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 3U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear)))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
                }
            } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                        = ((0U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))
                            ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q 
                                       >> 2U)) : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))
                                                   ? 0xdeadbeefU
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))
                                                    ? 0xb051b051U
                                                    : 0xbaadc0deU)));
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
            if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                 & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                    = (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                               >> 2U));
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 0U;
    } else {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                        if ((2U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = 1U;
                        } else if ((3U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                    if ((0U != (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                        if ((2U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = 1U;
                        } else if ((3U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
             & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) 
             & ((1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)) 
                | (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy) 
             & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 3U;
        }
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed) 
             & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 2U;
        }
        if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                 >> 0x10U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 0U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d = 0ULL;
    } else {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
                if (((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                     & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                        = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                            << 0x22U) | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                         << 2U));
                } else if (((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                        = (3ULL | (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                                    << 0x22U) | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                                 << 2U)));
                }
            }
        }
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                    = (0xffffffffffULL & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                          >> 1U));
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
            if ((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req)) 
                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
            }
        }
    } else if (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)) 
                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
    }
}

void Vtop_verilator___024root___initial__TOP__1(Vtop_verilator___024root* vlSelf) VL_ATTR_COLD;
void Vtop_verilator_ibex_pkg___initial__TOP__ibex_pkg__1(Vtop_verilator_ibex_pkg* vlSelf) VL_ATTR_COLD;

void Vtop_verilator___024root___eval_initial(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_initial\n"); );
    // Body
    Vtop_verilator___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_verilator_ibex_pkg___initial__TOP__ibex_pkg__1((&vlSymsp->TOP__ibex_pkg));
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
}

void Vtop_verilator___024root___settle__TOP__2(Vtop_verilator___024root* vlSelf) VL_ATTR_COLD;

void Vtop_verilator___024root___eval_settle(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_settle\n"); );
    // Body
    Vtop_verilator___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_verilator___024root___settle__TOP__3(vlSelf);
    Vtop_verilator___024root___settle__TOP__18(vlSelf);
}

void Vtop_verilator___024root___final_TOP(Vtop_verilator___024root* vlSelf) VL_ATTR_COLD;

void Vtop_verilator___024root___final(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___final\n"); );
    // Body
    Vtop_verilator___024root___final_TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop_verilator___024root___ctor_var_reset(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__uart_sys_rx = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__uart_sys_tx = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o = VL_RAND_RESET_I(16);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o = VL_RAND_RESET_I(12);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__td_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(160, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[__Vi0] = VL_RAND_RESET_I(22);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id = VL_RAND_RESET_I(16);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs = VL_RAND_RESET_I(18);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d);
    VL_RAND_RESET_W(96, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_RAND_RESET_I(31);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_RAND_RESET_I(31);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b = VL_RAND_RESET_Q(33);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = VL_RAND_RESET_Q(33);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext = VL_RAND_RESET_Q(34);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt = VL_RAND_RESET_I(6);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_RAND_RESET_Q(33);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = VL_RAND_RESET_Q(34);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_RAND_RESET_Q(34);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_RAND_RESET_Q(34);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = VL_RAND_RESET_Q(33);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a = VL_RAND_RESET_I(16);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b = VL_RAND_RESET_I(16);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(24);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d = VL_RAND_RESET_I(6);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d = VL_RAND_RESET_I(18);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip = VL_RAND_RESET_I(18);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_RAND_RESET_I(13);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(13);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_RAND_RESET_I(18);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_Q(40);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_wmask = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32768; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__b_wmask = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q = VL_RAND_RESET_I(24);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d = VL_RAND_RESET_I(16);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__unused_device_be = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_d = VL_RAND_RESET_I(9);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1016, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count_at_limit = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_wdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel = VL_RAND_RESET_I(20);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 = VL_RAND_RESET_I(15);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 = VL_RAND_RESET_I(10);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d);
    VL_RAND_RESET_W(256, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = VL_RAND_RESET_Q(34);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound1 = VL_RAND_RESET_Q(34);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__tdo_oe_o = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q = VL_RAND_RESET_I(2);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req = VL_RAND_RESET_Q(41);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d = VL_RAND_RESET_Q(41);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q = VL_RAND_RESET_Q(41);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q = VL_RAND_RESET_I(7);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d = VL_RAND_RESET_I(4);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = VL_RAND_RESET_I(5);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q = VL_RAND_RESET_I(32);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_combined_rstn = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__u_combined_rstn_sync__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_ack = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__not_in_reset_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q = VL_RAND_RESET_Q(41);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q = VL_RAND_RESET_Q(34);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txsymbol = VL_RAND_RESET_I(10);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__seen_reset = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive = VL_RAND_RESET_I(1);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol = VL_RAND_RESET_I(8);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c = 0;
    vlSelf->__Vfunc_load__16__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_load__16__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_float_load__19__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_float_load__19__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_float_load__19__dest = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_load__20__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_load__20__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_load__20__dest = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_load__22__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_load__22__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_csrw__23__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_csrw__23__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_store__29__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_store__29__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_float_store__31__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_float_store__31__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_float_store__31__src = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_store__32__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_store__32__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_store__32__src = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_csrr__34__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_csrr__34__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_store__35__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_store__35__size = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0;
    vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<18; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
