// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator___024root.h"
#include "Vtop_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_num_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_num_TOP\n"); );
    // Variables
    // Body
    mhpmcounter_num__Vfuncrtn = 0xaU;
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_get_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_get_TOP\n"); );
    // Variables
    // Body
    mhpmcounter_get__Vfuncrtn = vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
        [(0x1fU & index)];
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP\n"); );
    // Variables
    // Body
    simutil_get_scramble_key__Vfuncrtn = 0U;
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP\n"); );
    // Variables
    // Body
    simutil_get_scramble_nonce__Vfuncrtn = 0U;
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP(Vtop_verilator__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP\n"); );
    // Variables
    // Body
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP\n"); );
    // Variables
    IData/*31:0*/ valid;
    // Body
    valid = (VL_LTES_III(1,32,32, 0x8000U, index) ? 0U
              : 1U);
    if ((1U == valid)) {
        vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x7fffU 
                                                                                & index)] 
            = val[0U];
    }
    simutil_set_mem__Vfuncrtn = valid;
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP\n"); );
    // Variables
    IData/*31:0*/ valid;
    // Body
    valid = (VL_LTES_III(1,32,32, 0x8000U, index) ? 0U
              : 1U);
    if ((1U == valid)) {
        val[0U] = 0U;
        val[1U] = 0U;
        val[2U] = 0U;
        val[3U] = 0U;
        val[4U] = 0U;
        val[5U] = 0U;
        val[6U] = 0U;
        val[7U] = 0U;
        val[8U] = 0U;
        val[9U] = 0U;
        val[0U] = vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x7fffU & index)];
    }
    simutil_get_mem__Vfuncrtn = valid;
}

extern "C" void* uartdpi_create(const char* name, const char* log_file_path);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create_TOP(std::string name, std::string log_file_path, QData/*63:0*/ &uartdpi_create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create_TOP\n"); );
    // Body
    const char* name__Vcvt;
    for (size_t name__Vidx = 0; name__Vidx < 1; ++name__Vidx) name__Vcvt = name.c_str();
    const char* log_file_path__Vcvt;
    for (size_t log_file_path__Vidx = 0; log_file_path__Vidx < 1; ++log_file_path__Vidx) log_file_path__Vcvt = log_file_path.c_str();
    void* uartdpi_create__Vfuncrtn__Vcvt;
    uartdpi_create__Vfuncrtn__Vcvt = uartdpi_create(name__Vcvt, log_file_path__Vcvt);
    uartdpi_create__Vfuncrtn = VL_CVT_VP_Q(uartdpi_create__Vfuncrtn__Vcvt);
}

extern "C" void uartdpi_close(void* ctx);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP(QData/*63:0*/ ctx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    uartdpi_close(ctx__Vcvt);
}

extern "C" char uartdpi_read(void* ctx);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read_TOP(QData/*63:0*/ ctx, CData/*7:0*/ &uartdpi_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    char uartdpi_read__Vfuncrtn__Vcvt;
    uartdpi_read__Vfuncrtn__Vcvt = uartdpi_read(ctx__Vcvt);
    uartdpi_read__Vfuncrtn = (0xffU & uartdpi_read__Vfuncrtn__Vcvt);
}

extern "C" int uartdpi_can_read(void* ctx);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read_TOP(QData/*63:0*/ ctx, IData/*31:0*/ &uartdpi_can_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    int uartdpi_can_read__Vfuncrtn__Vcvt;
    uartdpi_can_read__Vfuncrtn__Vcvt = uartdpi_can_read(ctx__Vcvt);
    uartdpi_can_read__Vfuncrtn = uartdpi_can_read__Vfuncrtn__Vcvt;
}

extern "C" void uartdpi_write(void* ctx, int data);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write_TOP(QData/*63:0*/ ctx, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    uartdpi_write(ctx__Vcvt, data__Vcvt);
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__5(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
    } else {
        vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_ready 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = 0U;
    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__6(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol;
    IData/*31:0*/ __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount;
    IData/*31:0*/ __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount;
    // Body
    vlSelf->__Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount 
        = vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol 
        = vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount 
        = vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount 
        = vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount 
        = ((IData)(1U) + vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount);
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive) {
            if ((0U == vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount)) {
                if ((0xd8U == vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount)) {
                    if (vlSelf->top_verilator__DOT__uart_sys_tx) {
                        vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive = 0U;
                    } else {
                        __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount 
                            = ((IData)(1U) + vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount);
                        __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0U;
                    }
                }
            } else if (VL_GTES_III(1,32,32, 8U, vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount)) {
                if ((0x1b1U == vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount)) {
                    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol 
                        = (((~ ((IData)(1U) << (7U 
                                                & (vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount 
                                                   - (IData)(1U))))) 
                            & (IData)(__Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol)) 
                           | (0xffU & ((IData)(vlSelf->top_verilator__DOT__uart_sys_tx) 
                                       << (7U & (vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount 
                                                 - (IData)(1U))))));
                    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0U;
                    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount 
                        = ((IData)(1U) + vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount);
                }
            } else if ((0x1b1U == vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount)) {
                if (vlSelf->top_verilator__DOT__uart_sys_tx) {
                    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write_TOP(vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx, (IData)(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol));
                }
                vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive = 0U;
            }
        } else if (((~ (IData)(vlSelf->top_verilator__DOT__uart_sys_tx)) 
                    & (IData)(vlSelf->top_verilator__DOT__u_uartdpi__DOT__seen_reset))) {
            __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount = 0U;
            vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive = 1U;
            __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0U;
        }
    } else {
        vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive = 0U;
        vlSelf->top_verilator__DOT__u_uartdpi__DOT__seen_reset = 1U;
    }
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount 
        = __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount 
        = __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol 
        = __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol;
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__7(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__7\n"); );
    // Variables
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q;
    CData/*2:0*/ __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish;
    // Body
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish;
    if (vlSelf->rst_ni) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_d;
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos)))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d;
            }
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_rvalid_o 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_req));
    if (vlSelf->rst_ni) {
        if ((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned)));
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start) 
             | (0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)) 
             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid))) {
            if ((1U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck 
                    = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck)));
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck = 0U;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count 
        = ((IData)(vlSelf->rst_ni) & (((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid)) 
                                      & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count_at_limit)) 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q 
        = ((IData)(vlSelf->rst_ni) ? ((6U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q) 
                                             << 1U)) 
                                      | (IData)(vlSelf->top_verilator__DOT__uart_sys_rx))
            : 0U);
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start) 
             | (0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d;
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
        = ((IData)(vlSelf->rst_ni) ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_d
            : 0ULL);
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q = 0ULL;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
    } else {
        vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
               & 1U);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req) 
               & 1U);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
            = (0xffff00U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                            << 8U));
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q))) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o = 0U;
        } else {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter 
                = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter) 
                    < (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter)))
                    : 0U);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q) 
                   > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q 
        = ((IData)(vlSelf->rst_ni) & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                       [5U] & (4U == 
                                               (0xfffU 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                [5U]))) 
                                      & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [5U])));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q 
        = ((IData)(vlSelf->rst_ni) & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                       [1U] & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                               [1U])) 
                                      & (8U == (0xfffU 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                [1U]))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q 
        = ((IData)(vlSelf->rst_ni) & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                       [1U] & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                               [1U])) 
                                      & (4U == (0xfffU 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                [1U]))));
    if (vlSelf->rst_ni) {
        if (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
              [1U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
              [1U]) & (0U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                              [1U])))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q 
        = ((IData)(vlSelf->rst_ni) & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr 
                                      >> 2U));
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
    } else {
        vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q 
            = ((0x800U <= (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
               & 1U);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_d) 
               & 1U);
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
    } else {
        vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp 
            = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid) 
                & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid))) 
               & 1U);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req) 
               & 1U);
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U];
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d;
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0x40000U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0x40000U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q 
        = ((IData)(vlSelf->rst_ni) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [4U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o 
        = ((IData)(vlSelf->rst_ni) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [5U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o 
        = ((IData)(vlSelf->rst_ni) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [2U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o 
        = ((IData)(vlSelf->rst_ni) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [1U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o 
        = ((IData)(vlSelf->rst_ni) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [0U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid 
        = ((IData)(vlSelf->rst_ni) & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
           [7U]);
    if (vlSelf->rst_ni) {
        if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
             [6U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
             [6U])) {
            if ((0U == (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                 [6U] >> 2U)))) {
                if (VL_UNLIKELY((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                 [6U]))) {
                    VL_FWRITEF(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd,"%c",
                               8,(0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [6U]));
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd) { VL_FFLUSH_I(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd); }
                }
            } else if ((2U == (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [6U] >> 2U)))) {
                if (VL_UNLIKELY(((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [6U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [6U]) & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish))))) {
                    VL_WRITEF("Terminating simulation by software request.\n");
                    __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish = 1U;
                }
            }
        }
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
            [6U];
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o = 0U;
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish = 0U;
    }
    if ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish))) {
        __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish)));
    }
    if (VL_UNLIKELY((2U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish)))) {
        VL_FINISH_MT("../src/lowrisc_ibex_sim_shared_0/./rtl/sim/simulator_ctrl.sv", 93, "");
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish;
    vlSelf->top_verilator__DOT__uart_sys_tx = (1U & 
                                               ((2U 
                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))
                                                 ? 
                                                ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q) 
                                                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q))
                                                 : 
                                                (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q)))) {
            if ((7U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q)));
            }
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_d)
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count_at_limit 
        = (1U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q)))) {
            if ((7U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q)));
            }
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid = 0U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid = 1U;
            }
        }
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos)))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg) {
                if ((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d 
                        = (0xfeU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q) 
                                    << 1U));
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy 
        = (IData)((0U != (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q;
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (0xbU == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (0xbU == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (0xaU == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (0xaU == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                          [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (9U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (9U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o 
        = ((0xffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o)) 
           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o) 
               << 0xbU) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o) 
                            << 0xaU) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o) 
                                         << 9U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o) 
                                                   << 8U)))));
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (8U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (8U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (7U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (7U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (6U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (6U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (5U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (5U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o 
        = ((0xf0fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o)) 
           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o) 
               << 7U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o) 
                          << 6U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o) 
                                     << 5U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o) 
                                               << 4U)))));
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (4U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (4U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (3U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (3U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (2U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (2U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (1U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (1U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o 
        = ((0xff0U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__pwm_o)) 
           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o) 
               << 3U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o) 
                          << 2U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o) 
                                     << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o)))));
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (0U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                [2U] >> 2U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
               [2U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
               [2U]) & (0U == (0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                        [2U] >> 3U)))) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                   [2U] >> 2U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q 
                = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                   [2U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x17U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x17U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x16U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x16U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x15U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x15U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x14U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x14U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xfU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q) 
               << 7U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q) 
                          << 6U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q) 
                                     << 5U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q) 
                                               << 4U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x13U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x13U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x12U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x12U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x11U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x11U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x10U) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x10U)) == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xf0U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q) 
               << 3U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q) 
                          << 2U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q) 
                                     << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U] = 0x517U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U] = 0xc55513U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U] = 0xc51513U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x13U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x13U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x13U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x13U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U] = 0x7b302573U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x100073U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU] = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU] = 0U;
    if ((0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x18U))) {
        if ((((3U > (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                           >> 0x14U))) & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x11U)) 
             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x10U))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0xeU)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if ((IData)((0x100aU == (0x103fU 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelf->__Vfunc_load__16__size = (7U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                     >> 0x14U));
                vlSelf->__Vfunc_load__16__Vfuncout 
                    = (0x38050403U | ((IData)(vlSelf->__Vfunc_load__16__size) 
                                      << 0xcU));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelf->__Vfunc_load__16__Vfuncout;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            } else if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelf->__Vfunc_load__20__dest = (0x1fU 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                vlSelf->__Vfunc_load__20__size = (7U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                     >> 0x14U));
                vlSelf->__Vfunc_load__20__Vfuncout 
                    = (0x38050003U | (((IData)(vlSelf->__Vfunc_load__20__size) 
                                       << 0xcU) | ((IData)(vlSelf->__Vfunc_load__20__dest) 
                                                   << 7U)));
                vlSelf->__Vfunc_float_load__19__dest 
                    = (0x1fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                vlSelf->__Vfunc_float_load__19__size 
                    = (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                             >> 0x14U));
                vlSelf->__Vfunc_float_load__19__Vfuncout 
                    = (0x38050007U | (((IData)(vlSelf->__Vfunc_float_load__19__size) 
                                       << 0xcU) | ((IData)(vlSelf->__Vfunc_float_load__19__dest) 
                                                   << 7U)));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x20U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? vlSelf->__Vfunc_float_load__19__Vfuncout
                        : vlSelf->__Vfunc_load__20__Vfuncout);
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelf->__Vfunc_load__22__size = (7U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                     >> 0x14U));
                vlSelf->__Vfunc_load__22__Vfuncout 
                    = (0x38050403U | ((IData)(vlSelf->__Vfunc_load__22__size) 
                                      << 0xcU));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelf->__Vfunc_load__22__Vfuncout;
                vlSelf->__Vfunc_csrw__23__csr = (0xfffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                vlSelf->__Vfunc_csrw__23__Vfuncout 
                    = (0x41073U | ((IData)(vlSelf->__Vfunc_csrw__23__csr) 
                                   << 0x14U));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelf->__Vfunc_csrw__23__Vfuncout))));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelf->__Vfunc_csrw__23__Vfuncout))) 
                               >> 0x20U));
            }
        } else if ((IData)(((0x20000U == (0x30000U 
                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) 
                            & (3U > (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                           >> 0x14U)))))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0xeU)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if ((IData)((0x100aU == (0x103fU 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                vlSelf->__Vfunc_store__29__size = (7U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                      >> 0x14U));
                vlSelf->__Vfunc_store__29__Vfuncout 
                    = (0x38850023U | ((IData)(vlSelf->__Vfunc_store__29__size) 
                                      << 0xcU));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelf->__Vfunc_store__29__Vfuncout))));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelf->__Vfunc_store__29__Vfuncout))) 
                               >> 0x20U));
            } else if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelf->__Vfunc_store__32__src = (0x1fU 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                vlSelf->__Vfunc_store__32__size = (7U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                      >> 0x14U));
                vlSelf->__Vfunc_store__32__Vfuncout 
                    = (0x38050023U | (((IData)(vlSelf->__Vfunc_store__32__src) 
                                       << 0x14U) | 
                                      ((IData)(vlSelf->__Vfunc_store__32__size) 
                                       << 0xcU)));
                vlSelf->__Vfunc_float_store__31__src 
                    = (0x1fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                vlSelf->__Vfunc_float_store__31__size 
                    = (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                             >> 0x14U));
                vlSelf->__Vfunc_float_store__31__Vfuncout 
                    = (0x38050027U | (((IData)(vlSelf->__Vfunc_float_store__31__src) 
                                       << 0x14U) | 
                                      ((IData)(vlSelf->__Vfunc_float_store__31__size) 
                                       << 0xcU)));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x20U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? vlSelf->__Vfunc_float_store__31__Vfuncout
                        : vlSelf->__Vfunc_store__32__Vfuncout);
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelf->__Vfunc_csrr__34__csr = (0xfffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                vlSelf->__Vfunc_csrr__34__Vfuncout 
                    = (0x2473U | ((IData)(vlSelf->__Vfunc_csrr__34__csr) 
                                  << 0x14U));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelf->__Vfunc_csrr__34__Vfuncout;
                vlSelf->__Vfunc_store__35__size = (7U 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                      >> 0x14U));
                vlSelf->__Vfunc_store__35__Vfuncout 
                    = (0x38850023U | ((IData)(vlSelf->__Vfunc_store__35__size) 
                                      << 0xcU));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelf->__Vfunc_store__35__Vfuncout))));
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelf->__Vfunc_store__35__Vfuncout))) 
                               >> 0x20U));
            }
        } else if ((1U & ((3U <= (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x14U))) 
                          | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                             >> 0x13U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
        }
        if ((1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x12U) & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x13U;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
        }
    }
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 1U;
    }
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel 
        = ((0xffc00U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                        << 4U)) | (0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x10U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = 0U;
    if (((2U < (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = 4U;
    }
    if (((0U != ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = 3U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = 0U;
    if (((2U < (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = 1U;
    }
    if (((0U != ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked 
        = (3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & ((IData)(0xffffffffU) << (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask = 0U;
    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                  >> 0x13U)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask 
            = ((0x40000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                ? 0xfU : ((0x20000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                           ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                              | (0xfU & ((IData)(3U) 
                                         << (2U & ((IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                            >> 1U)) 
                                                   << 1U)))))
                           : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                              | (0xfU & ((IData)(1U) 
                                         << (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))))));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[1U] 
        = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 1U;
        }
    }
    if (((2U < (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    }
    if (((0U != ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg 
        = ((1U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count)) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q 
        = __Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[1U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q)
            ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)
            : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q)
                ? (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                            >> 0x10U)) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel 
                      >> 5U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 
            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
               >> (0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0) 
                            << 5U)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[1U] 
        = ((0x1fU >= ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                      << 3U)) ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q) 
                                 << ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
                                     << 3U)) : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be 
                    = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask;
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
        [7U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_d 
        = ((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))));
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel 
                     >> 0xaU));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
        = ((0xfffffffeU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
           | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 
            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
               >> (0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1) 
                            << 5U)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[0U] 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp)) 
           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i
              [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[1U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) 
           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i
              [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos 
        = ((1U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel 
                    >> 0xfU));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
        = ((0xfffffffeU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
           | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 
            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
               >> (0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2) 
                            << 5U)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o = 1U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o 
            = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q) 
                     | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q) 
                        >> 7U)));
    } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o = 0U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            if ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d 
                    = (7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q) 
                             - (IData)(1U)));
            }
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d = 7U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = 0U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 
        = ((0xfffffffeU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3) 
           | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = 0U;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                    [1U]) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                        = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                 >> 0x10U));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                [1U]) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                    = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x10U));
            }
        }
    }
}

extern const VlUnpacked<QData/*63:0*/, 32> Vtop_verilator__ConstPool__TABLE_9d65803c_0;

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__8(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__8\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx7;
    CData/*4:0*/ __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    CData/*4:0*/ __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    CData/*4:0*/ __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    SData/*14:0*/ __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    SData/*14:0*/ __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    SData/*14:0*/ __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    SData/*14:0*/ __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    // Body
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0U;
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0U;
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [0U]) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
            [0U]) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 4U;
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                ? 0ULL : ((0x43U >= (0x7fU & ((IData)(0x22U) 
                                              * (1U 
                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                           ? (0x3ffffffffULL & (((QData)((IData)(
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
                           : 0ULL));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WIII(1024,8,(0x3f8U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                            << 3U)), vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, 
                          (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                           [3U]));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_req) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                         >> 2U))];
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT____Vlvbound1 
            = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
               [5U]);
        if ((0x3f7U >= (0x3f8U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                  << 3U)))) {
            VL_ASSIGNSEL_WIII(1016,8,(0x3f8U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                << 3U)), vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT____Vlvbound1);
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [4U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [0U]) {
        if ((1U & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                   [0U]))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                             [0U] >> 2U))];
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [0U]) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
            [0U]) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                       [0U]);
                __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
                __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
                __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [0U] >> 2U));
            }
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                [0U] >> 8U));
                __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 1U;
                __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 8U;
                __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = (0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [0U] >> 2U));
            }
            if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                [0U] >> 0x10U));
                __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 1U;
                __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0x10U;
                __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = (0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [0U] >> 2U));
            }
            if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                       [0U] >> 0x18U);
                __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 1U;
                __Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0x18U;
                __Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = (0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [0U] >> 2U));
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q 
            = (0x1fU & (IData)(((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr)) 
                                >> 3U)));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WIII(1024,8,(0x3f8U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                            << 3U)), vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q);
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
        [4U]) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d;
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0))) 
                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0))));
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1))) 
                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1))));
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2))) 
                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2))));
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3))) 
                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__Vdlyvdim0__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3))));
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
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound1 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp;
        if ((0x43U >= (0x7fU & ((IData)(0x22U) * (1U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) {
            VL_ASSIGNSEL_WIIQ(68,34,(0x7fU & ((IData)(0x22U) 
                                              * (1U 
                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))), vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound1);
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o;
    __Vtableidx7 = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata 
        = Vtop_verilator__ConstPool__TABLE_9d65803c_0
        [__Vtableidx7];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q;
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err
        [7U];
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__9(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)
            ? ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                 | ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                | (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))
                ? 5U : 0xaU) : 0xaU);
}

VL_INLINE_OPT void Vtop_verilator___024root___combo__TOP__10(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___combo__TOP__10\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
           & (IData)(vlSelf->clk_i));
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__11(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__u_combined_rstn_sync__DOT__intq));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__u_combined_rstn_sync__DOT__intq 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni;
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__12(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__12\n"); );
    // Variables
    CData/*7:0*/ __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read__46__Vfuncout;
    IData/*31:0*/ __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read__45__Vfuncout;
    // Body
    if (vlSelf->rst_ni) {
        if (vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive) {
            vlSelf->__Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount 
                = ((IData)(1U) + vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount);
            vlSelf->top_verilator__DOT__uart_sys_rx 
                = ((9U >= (0xfU & vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount)) 
                   & ((IData)(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txsymbol) 
                      >> (0xfU & vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount)));
            if ((0x1b1U == vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount)) {
                vlSelf->__Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0U;
                if ((9U == vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount)) {
                    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive = 0U;
                } else {
                    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount 
                        = ((IData)(1U) + vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount);
                }
            }
        } else {
            Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read_TOP(vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx, __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read__45__Vfuncout);
            vlSelf->top_verilator__DOT__uart_sys_rx = 1U;
            if ((0U != __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read__45__Vfuncout)) {
                Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read_TOP(vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx, __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read__46__Vfuncout);
                vlSelf->top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c 
                    = VL_EXTENDS_II(32,8, (IData)(__Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read__46__Vfuncout));
                vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount = 0U;
                vlSelf->top_verilator__DOT__u_uartdpi__DOT__txsymbol 
                    = (0x200U | (0x1feU & (vlSelf->top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c 
                                           << 1U)));
                vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive = 1U;
                vlSelf->__Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0U;
            }
        }
    } else {
        vlSelf->top_verilator__DOT__uart_sys_rx = 1U;
        vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive = 0U;
    }
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount 
        = vlSelf->__Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount;
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__13(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (2U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                     >> 1U)) << 1U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (2U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                     >> 1U)) << 1U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid 
        = (1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready 
        = (1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_ready)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_ready));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
            }
        }
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req) {
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_d 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack)) 
           & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
            if ((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req)) 
                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
            }
        }
    } else if (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)) 
                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__14(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__14\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[0U] 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp)) 
           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i
              [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[1U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) 
           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i
              [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start) 
             | (0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rdata 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
            ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux 
                       >> 0x20U)) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_err_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_err_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
                = (0x7fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q) 
                            >> 1U));
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                ? 0U : (0xffU & (((0U == (0x18U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   << 3U)))
                                   ? 0U : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                           (((IData)(7U) 
                                             + (0x3f8U 
                                                & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   << 3U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x18U 
                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U))))) 
                                 | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                    (0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                              >> 2U))] 
                                    >> (0x18U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                 << 3U))))));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid 
        = (1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid 
        = (1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
                = (0xfeU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q) 
                            << 1U));
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                ? 0U : ((0x3f7U >= (0x3f8U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                              << 3U)))
                         ? (0xffU & (((0U == (0x18U 
                                              & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                 << 3U)))
                                       ? 0U : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                               (((IData)(7U) 
                                                 + 
                                                 (0x3f8U 
                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       << 3U))))) 
                                     | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                        (0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                  >> 2U))] 
                                        >> (0x18U & 
                                            ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                             << 3U)))))
                         : 0U));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[5U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q)
            ? (((0U == ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)
                         ? 0x7fU : (0x7fU & (((1U & 
                                               ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 7U)) 
                                              == (1U 
                                                  & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 7U)))
                                              ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                              : (((IData)(0x7fU) 
                                                  - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                 + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full))
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start 
        = ((IData)((4U == (6U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q)))) 
           & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid 
        = (1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rdata
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rdata;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid)
                    ? 1U : 0U);
        } else if ((7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 2U;
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid) 
            & ((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q)) 
               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte))) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 0U;
        } else if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 2U;
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid) 
            & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d) 
               & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q)))) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d 
                = ((0x80U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q) 
                             << 5U)) | (0x7fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q) 
                                                 >> 1U)));
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 0U;
        } else if ((7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d 
            = ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q))
                ? 0U : 2U);
    } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_d)
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q) 
            << 0x10U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
        [7U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7eU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[0U] = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[1U] 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i
            [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp];
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[0U] 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i
            [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp];
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[1U] = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_d 
        = ((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))
            ? 0U : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start)
                     ? 0xd9U : (0x1ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)) 
             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid)) 
            & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o)) 
               & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__15(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__15\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1;
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    CData/*0:0*/ __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3;
    QData/*33:0*/ __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    QData/*33:0*/ __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    // Body
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                   [0U] >> 8U);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)
            ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d)
            : 0U);
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                ? (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                         >> 1U)) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                ? (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                         >> 1U)) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n));
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                    ? 0x100001U : (1U | (0xffffff00U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = (7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q 
            = ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))
                ? 2U : (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                         ? 1U : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)
                                  ? 3U : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                           ? 4U : 0U))));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
               & 1U);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw) 
               & 1U);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw) 
               & 1U);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d) 
               & 1U);
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                    ? ((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) << 2U) : (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)
            ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)
            : 0U);
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
             >> 0x1fU)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x80000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x40000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x20000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x10000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x8000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x800U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x400U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x200U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x100U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x80U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x40U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x20U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((0x10U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
             & (0x7a0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                           >> 0x14U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q 
                = (1U & ((2U <= vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                         | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = 0U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [0U];
            __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
    } else {
        __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [1U];
            __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
    } else {
        __Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = __Vdlyvval__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (__Vdlyvset__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              << 1U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
            = (1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
                  [0U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
                  [1U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
        [1U];
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__16(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__16\n"); );
    // Body
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id 
            = (0xffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata);
    }
    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U];
    }
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U];
    }
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U];
    }
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
          & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr;
    }
    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
         | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id 
            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               << 1U);
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2 
            = (1U & ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                        & (3U == (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                       [1U]) | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    >> 1U) & (IData)(
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))) 
                     & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                        [0U])));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id 
            = (3U != (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err) 
               | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                  [0U] | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                           & (3U == (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                          [1U])));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((6U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((5U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
         | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 0U;
    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1aU)))) {
                            if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x17U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x16U)))) {
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 1U;
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x15U)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x18U)))) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x17U)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x16U)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x15U)))) {
                                    if ((0x100000U 
                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x18U)))) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x17U)))) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x16U)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x15U)))) {
                                if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((0x800000U 
                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                          ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x16U) 
                                             | ((0x200000U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                 ? 
                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)
                                                 : 
                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))
                                          : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x16U)));
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr 
                = (IData)((0x1a800000U != (0x1ff00000U 
                                           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)));
        }
    } else if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x18U)))) {
                        if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x18U)))) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x17U)))) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x16U)))) {
                            if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    if (((((((((((((((((((((0x3a0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x14U)) | 
                           (0x3a1U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x14U))) 
                          | (0x3a2U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U))) 
                         | (0x3a3U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x14U))) 
                        | (0x3b0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x14U))) | 
                       (0x3b1U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))) | (0x3b2U 
                                                  == 
                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
                     | (0x3b3U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))) | (0x3b4U 
                                                  == 
                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
                   | (0x3b5U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 0x14U))) | (0x3b6U 
                                                == 
                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))) 
                 | (0x3b7U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 0x14U))) | (0x3b8U 
                                              == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))) 
               | (0x3b9U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                             >> 0x14U))) | (0x3baU 
                                            == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))) 
             | (0x3bbU == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                           >> 0x14U))) | (0x3bcU == 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U))) 
           | (0x3bdU == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                         >> 0x14U))) | (0x3beU == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
         | (0x3bfU == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                       >> 0x14U)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__17(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__17\n"); );
    // Body
    if (VL_UNLIKELY(((((5U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d)))) {
        VL_WRITEF("%t: Illegal instruction (hart 0) at PC 0x%x: 0x%x\n",
                  64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id,
                  32,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                       ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                       : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id));
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___combo__TOP__19(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___combo__TOP__19\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_combined_rstn));
}

VL_INLINE_OPT void Vtop_verilator___024root___multiclk__TOP__20(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___multiclk__TOP__20\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 0U;
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
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((0x7fU 
                                              & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))) 
                                             - (IData)(4U)))));
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
                                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                                            = ((0x1fU 
                                                >= 
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((0x10U 
                                                      | (0xfU 
                                                         & (IData)(
                                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                    >> 0x22U)))) 
                                                     - (IData)(0x10U))))) 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                  >> 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   (0x1fU 
                                                    & ((0x10U 
                                                        | (0xfU 
                                                           & (IData)(
                                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                      >> 0x22U)))) 
                                                       - (IData)(0x10U))))));
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
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((0x7fU 
                                              & (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x22U))) 
                                             - (IData)(4U)))));
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
                            if ((0x17U == (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 1U;
                                }
                            } else if ((0x18U != (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                             >> 0x22U))))) {
                                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                                        = ((0x1fU >= 
                                            ((IData)(0x10U) 
                                             + (0x1fU 
                                                & ((0x10U 
                                                    | (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                  >> 0x22U)))) 
                                                   - (IData)(0x10U))))) 
                                           & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                              >> ((IData)(0x10U) 
                                                  + 
                                                  (0x1fU 
                                                   & ((0x10U 
                                                       | (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                     >> 0x22U)))) 
                                                      - (IData)(0x10U))))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
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
                if ((0x10U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x22U))))) {
                                    if ((0x18U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                            VL_ASSIGNSEL_WIII(256,32,
                                                              (0xe0U 
                                                               & ((IData)(
                                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                           >> 0x22U)) 
                                                                  << 5U)), vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q));
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = (0xffff0fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d);
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
                if ((0x10U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x22U))))) {
                                    if ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = 0U;
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xfffff000U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (3U 
                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)));
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xffffU 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (0xff0000U 
                                                      & ((IData)(
                                                                 (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                  >> 0x10U)) 
                                                         << 0x10U)));
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q;
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
                if ((0x10U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x22U))))) {
                                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                            = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0U;
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (1U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
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
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x22U))))))))) {
            if (((((((((0x40U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U)))))) {
                if ((0x40U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x13U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x34U != (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if ((0x35U != (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                if ((0x38U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x22U))))) {
                                    if ((0x39U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x22U))))) {
                                        if ((0x3aU 
                                             != (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                            if ((1U 
                                                 & ((0U 
                                                     != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                    | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                       >> 0x16U)))) {
                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                    = 
                                                    (0x400000U 
                                                     | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x3dU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            }
        }
    }
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
            if ((0x38U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                            >> 0x22U))))) {
                if ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                        = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = ((0xffbfffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                           | (0x400000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                           & ((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 0x16U)) 
                                              << 0x16U))));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = ((0xffff8fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                           | (((0U != (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0xcU)))
                                ? 0U : (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0xcU))) 
                              << 0xcU));
                }
            } else if ((0x39U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            } else if ((0x3aU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            } else if ((0x3cU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            } else if ((0x3dU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            }
        }
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
            = ((0xffff8fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
               | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror) 
                  << 0xcU));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x20000000U | (0x1fffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = ((0xffdfffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
           | ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
              << 0x15U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x407U | (0xfffff000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid = 0U;
    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (1U == (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
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
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x22U))))))))) {
            if (((((((((0x40U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x22U)))))) {
                if ((0x40U != (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((0x13U != (0x7fU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x22U))))) {
                        if ((0x34U != (0x7fU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x22U))))) {
                            if ((0x35U != (0x7fU & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                if ((0x38U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x22U))))) {
                                    if ((0x39U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x22U))))) {
                                        if ((0x3aU 
                                             != (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x22U))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((0U 
                                                      != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                     | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                        >> 0x16U))))) {
                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid 
                                                    = 
                                                    (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                         >> 0xcU)));
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid = 0U;
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
                if ((0x39U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid 
                            = (0U == (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xcU)));
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid = 0U;
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
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid 
                                    = (0U == (7U & 
                                              (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0xcU)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                           + ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                               ? ((IData)(1U) << (7U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U)))
                               : 0U))));
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
                if ((0x39U == (0x7fU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                            = ((0xffffffff00000000ULL 
                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                               | (IData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)));
                    }
                } else if ((0x3aU == (0x7fU & (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                            = ((0xffffffffULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                               | ((QData)((IData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q))) 
                                  << 0x20U));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__21(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__21\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__hartsel);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq = 0U;
    if ((0U >= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound1 
            = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
               >> 0x1fU);
        if (VL_LIKELY((0U >= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                   | (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound1) 
                            << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
        }
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound2 
            = (1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1eU));
        if (VL_LIKELY((0U >= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq)) 
                   | (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound2) 
                            << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rdata;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt));
}

VL_INLINE_OPT void Vtop_verilator___024root___multiclk__TOP__22(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___multiclk__TOP__22\n"); );
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
        = (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
            | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
            [0U]) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                 [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 
        = (((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
            | (4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
           [0U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 
        = (((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)) 
           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
           [0U]);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
            [0U] | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x19U)))) {
                                if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x17U)))) {
                                        if ((0x400000U 
                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x15U)))) {
                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x100000U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : 0x16U);
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x19U)))) {
                            if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x1aU)))) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x19U)))) {
                        if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        }
                    }
                }
            }
        }
    } else if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x19U)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x18U)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x17U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x16U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x15U)))) {
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x100000U 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x17U)))) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x16U)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((0x200000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                        } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x16U)))) {
                                if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x16U)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? 0U : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                       [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q])
                                    : ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? (0x28001048U 
                                           | (4U & 
                                              (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                               << 2U)))
                                        : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                        }
                    }
                }
            }
        } else if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x1aU)))) {
                    if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x18U)))) {
                            if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x16U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x15U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))) {
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x1aU)))) {
                    if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x200000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xfU]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xeU])
                                            : ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xdU]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xcU]))
                                        : ((0x200000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xbU]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xaU])
                                            : ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x200000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((0x200000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((0x100000U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x17U)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x16U)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x100000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [0xfU] 
                                                << 0x18U) 
                                               | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xeU] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xdU] 
                                                      << 8U) 
                                                     | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [0xcU])))
                                            : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [0xbU] 
                                                << 0x18U) 
                                               | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [9U] 
                                                      << 8U) 
                                                     | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [8U]))))
                                        : ((0x100000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [7U] 
                                                << 0x18U) 
                                               | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [5U] 
                                                      << 8U) 
                                                     | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [4U])))
                                            : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [3U] 
                                                << 0x18U) 
                                               | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [0U])))));
                            }
                        }
                    }
                }
            } else if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x19U)))) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x18U)))) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x17U)))) {
                            if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x15U)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (8U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 0xeU)));
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x80U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 9U)));
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x800U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 4U)));
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0x8000ffffU 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x7fff0000U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     << 0x10U)));
                                    }
                                }
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x100000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))) 
                                                << 0x1fU) 
                                               | ((((0x40U 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))
                                                     ? 0x3ffffffU
                                                     : 0U) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))))
                                        : ((0x100000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
            } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))];
                } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))];
                } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))];
                } else if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x14U))];
                    }
                } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x14U)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
                }
            } else if ((0x1000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x16U)))) {
                        if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x16U)))) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x15U)))) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x14U)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((0x800000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x16U)))) {
                    if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x14U)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((0x400000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x200000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0xeU)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 9U)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x800U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                        >> 4U)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x10U)));
                }
            } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 0x15U)))) {
                if ((0x100000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 2U)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       << 3U)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffe7ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x1800U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         << 9U)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffdffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x20000U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          << 0x10U)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffdfffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x200000U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                           << 0x15U)));
                }
            }
        }
    }
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? (((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                    [0U] >> 0x1fU))) 
                        << 8U) | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                  [0U] >> 0x18U)) : 
                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                    [0U] >> 0x18U)) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                           [0U] 
                                                           >> 0x17U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                 [0U] 
                                                 >> 0x10U)))
                                        : (0xffU & 
                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                            [0U] >> 0x10U))));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? (((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                          [0U] >> 7U)))) 
                        << 0x10U) | ((0xff00U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                 [0U] 
                                                 << 8U)) 
                                     | (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 0x10U))))
                    : ((0xff00U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                   [0U] << 8U)) | (0xffU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                      >> 0x10U))))
                : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? (((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                    [0U] >> 0x1fU))) 
                        << 0x10U) | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                     [0U] >> 0x10U))
                    : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                       [0U] >> 0x10U)));
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? (((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                          [0U] >> 0xfU)))) 
                        << 8U) | (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                           [0U] >> 8U)))
                    : (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                [0U] >> 8U))) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                                  [0U] 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                     [0U]))
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                  [0U])));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? (((- (IData)((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                          [0U] >> 0x17U)))) 
                        << 0x10U) | (0xffffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                [0U] 
                                                >> 8U)))
                    : (0xffffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                  [0U] >> 8U))) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                                    [0U] 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                       [0U]))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                                    [0U])));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xeU;
    }
    if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xdU;
    }
    if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xcU;
    }
    if ((0x800U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xbU;
    }
    if ((0x400U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xaU;
    }
    if ((0x200U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x100U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x80U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x40U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x20U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x10U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
             & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                   >> 2U))) & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q))) 
           & ((0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs) 
              & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                  >> 5U) | (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
               [0U]) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err_raw 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err_raw 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext
            : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext
                : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                            [0U] << 8U) | (0xffU & 
                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                            >> 0x10U)))
                        : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                            [0U] << 0x10U) | (0xffffU 
                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 8U))))
                    : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                            [0U] << 0x18U) | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                        : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                       [0U]))));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_b86343db_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_551438b9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_c51e0277_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_804e9375_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_79fa64b1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_18f95561_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_83aafd00_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_464dd407_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_7c1ef788_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_d8c0d3d0_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop_verilator__ConstPool__TABLE_2327bd0d_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_verilator__ConstPool__TABLE_434db6d7_0;

VL_INLINE_OPT void Vtop_verilator___024root___sequent__TOP__23(Vtop_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___sequent__TOP__23\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx5;
    CData/*4:0*/ __Vtableidx6;
    SData/*8:0*/ __Vtableidx4;
    // Body
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0xfU))];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0x14U))];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[2U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[3U] 
        = (IData)((((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)) 
                    << 0x20U) | (QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                 << 1U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__crash_dump_o[4U] 
        = (IData)(((((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)) 
                     << 0x20U) | (QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  << 1U)))) 
                   >> 0x20U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
              & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                 [0U])));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | (0xfffffffeU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                             & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                  << 1U) == vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                 [1U]) << 1U))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) 
           & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
              & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n)
            ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)
            : 0U);
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                              >> 0x10U) : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                                           >> 0x10U)));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc));
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))) 
                   << 1U));
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))) 
                                                  << 1U))));
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q 
            = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d) 
               & 1U);
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | (3U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                    >> 1U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((6U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((5U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | ((IData)((1U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
              << 1U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | ((IData)((2U == (6U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
              << 2U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering = 1U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = 1U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = 0U;
        } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 2U)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int 
            = (IData)((1U == (3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 2U;
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
            } else if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x302U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x7b2U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x105U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((IData)((0U != (0xf8f80U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xeU)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = (IData)((0x2000U == (0x6000U 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)));
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x18U)) | 
                                (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0xcU))))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 0x1fU)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = (1U & (IData)(((0U != 
                                              (0x3e000000U 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                             | ((0x4000U 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                 ? (IData)(
                                                           (0x1000U 
                                                            != 
                                                            (0x3000U 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)))
                                                 : (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3000U 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)))))));
                    } else if ((0x20000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x8000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x4000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x2000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0xcU)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = (1U & ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                              ? (IData)(((0x1000U == 
                                          (0x3000U 
                                           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                         & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x1aU) 
                                            | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU) 
                                               | ((0x40000000U 
                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                   ? (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3e000000U 
                                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)))
                                                   : (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3e000000U 
                                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id))))))))
                              : (IData)(((0x1000U == 
                                          (0x3000U 
                                           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0xfe000000U 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)))))));
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((0U == (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0xcU)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = 1U;
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xeU)));
            if ((0U == (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0xcU)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 0U;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xdU)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1fU)))) {
                                if ((0x40000000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (0x1000U 
                                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                        >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0xcU)))) {
                                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (0x2000000U 
                                                     & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0x1000U 
                                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            } else {
                                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            }
                                                        } else if (
                                                                   (0x1000U 
                                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        } else {
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x2000U 
                                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        } else {
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    } else {
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    }
                                                } else {
                                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x4000U 
                                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 0xaU
                                                            : 0U)));
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
        } else if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0xeU)))) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x4000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 4U : 3U);
                        } else if ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x1bU))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x1bU))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x1000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0xaU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0xcU)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                  >> 0x1fU) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = (1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U) & ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                             ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                                   >> 0x1fU)) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                                                    >> 0x1fU)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
        = (1U & ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                  ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                     & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                         >> 1U) & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                   >> 0x1fU))) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                                                  & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                      >> 1U) 
                                                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                        >> 0x1fU)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (1U & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                  >> 0x1fU) & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
          | (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) 
         & (0U == (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xfU))))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
            ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? 0U : ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                         ? 0U : 3U)) : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                         ? 2U : 1U));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
        } else if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else if ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
        [0U];
    if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U))))));
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                             & (IData)(
                                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                    ? (QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U)))))
                    : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                   [0U]);
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
            = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                      [0U] 
                                                      >> 0x10U)))))
                : 0ULL);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
           & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) 
              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
            ? 1U : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec));
    __Vtableidx5 = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vtop_verilator__ConstPool__TABLE_b86343db_0
        [__Vtableidx5];
    __Vtableidx3 = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vtop_verilator__ConstPool__TABLE_551438b9_0
        [__Vtableidx3];
    __Vtableidx2 = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vtop_verilator__ConstPool__TABLE_c51e0277_0
        [__Vtableidx2];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vtop_verilator__ConstPool__TABLE_c51e0277_0
        [__Vtableidx2];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vtop_verilator__ConstPool__TABLE_c51e0277_0
        [__Vtableidx2];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vtop_verilator__ConstPool__TABLE_804e9375_0
        [__Vtableidx2];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
            ? 6U : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                               | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
            } else if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
            } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 3U;
            } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 4U;
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 1U)))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr 
        = (((1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
            | (2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))) 
           | (3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)));
    __Vtableidx1 = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                     << 5U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                << 4U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                               << 1U) 
                                              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vtop_verilator__ConstPool__TABLE_79fa64b1_0
        [__Vtableidx1];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_18f95561_0
        [__Vtableidx1];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_83aafd00_0
        [__Vtableidx1];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_464dd407_0
        [__Vtableidx1];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vtop_verilator__ConstPool__TABLE_7c1ef788_0
        [__Vtableidx1];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vtop_verilator__ConstPool__TABLE_d8c0d3d0_0
        [__Vtableidx1];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (0x3ffffffffULL & ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                              ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                  : ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                              : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                  : ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store 
                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid 
        = (1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)) 
                 | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                         ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                             ? 2U : 4U) : (((- (IData)(
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
                                                       >> 0x14U)))))))
            : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (0xfffff000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                    : (((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x14U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access) 
           & ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr) 
                | ((3U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                           >> 0x1eU)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
               | ((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                         >> 0x1cU)) > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))) 
              | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr) 
                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)
                                    : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id);
                        } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                    ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                                    : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
                        } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio)))) {
                                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                } else if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 1U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                if ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[0U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out) 
           & (~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
              [2U]));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
            << 1U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                      | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw 
                                = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
                        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
            if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffff8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((4U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                     >> 0x1bU)) | ((2U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                          >> 0x1dU)) 
                                   | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      >> 0x1fU))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffc7U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x20U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0x15U)) | ((0x10U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               >> 0x19U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffe3fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x100U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 0xfU)) | ((0x80U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x13U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffff1ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x800U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 9U)) | ((0x400U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 >> 0xdU)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffff8fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x4000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          >> 3U)) | ((0x2000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 7U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffc7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x20000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 3U)) | ((0x10000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                          >> 1U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffe3ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x100000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         << 5U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xff1fffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x800000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               << 0xbU)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xf8ffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x4000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 0x11U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xc7ffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((0x20000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  << 0x17U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0x3fffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
               << 0x1fU) | (0x40000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                           << 0x1dU))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
        = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
               | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
                  & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) 
              | ((3U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                    | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)
            : 0U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw) 
           & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
               | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
            : (((4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
                : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = ((0x20U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt)) 
           | (0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                        ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b
                        : (- vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                   ? (1ULL | ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                              << 2U))
                                   : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                       ? (1ULL | ((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                  << 3U))
                                       : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                           ? (1ULL 
                                              | ((QData)((IData)(
                                                                 (0x1fffffffU 
                                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                 << 4U))
                                           : (1ULL 
                                              | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))))) 
                             + (0x1ffffffffULL & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U))))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id) 
           & (6U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump 
                            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set;
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch 
                            = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set;
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((4U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                     >> 0x1bU)) | ((2U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 0x1dU)) 
                                   | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x1fU))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffc7U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0x15U)) | ((0x10U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x19U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffe3fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 0xfU)) | ((0x80U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x13U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff1ffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 9U)) | ((0x400U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0xdU)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff8fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          >> 3U)) | ((0x2000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   >> 7U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffc7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 3U)) | ((0x10000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 1U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffe3ffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 5U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff1fffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0xbU)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf8ffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 << 0x11U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xc7ffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  << 0x17U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x3fffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
               << 0x1fU) | (0x40000000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                           << 0x1dU))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc);
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
            ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                   ? 
                                                  (((~ 
                                                     ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  (((~ 
                                                     ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | ((1U 
                                                   == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U))))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                  [1U]);
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc);
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 0x20U)))));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[0U] 
        = ((1U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                          >> 2U))) ? ((1U & (IData)(
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
            : ((1U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                              >> 1U))) ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                           << 8U) | 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                           >> 0x18U))
                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc));
    __Vtableidx6 = (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0xcU & ((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)) 
                                        << 2U)) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = Vtop_verilator__ConstPool__TABLE_2327bd0d_0
        [__Vtableidx6];
    __Vtableidx4 = ((0x100U & ((((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  ^ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b) 
                                 >> 0x1fU) ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               >> 0x1fU) 
                                              ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                 : (~ (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 0x20U)))) 
                               << 8U)) | (((0U == (IData)(
                                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U))) 
                                           << 7U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vtop_verilator__ConstPool__TABLE_434db6d7_0
        [__Vtableidx4];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[0U] 
        = ((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                    >> 3U)) << 2U);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn)) 
             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d)) 
            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)) 
           & (6U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[1U] 
        = (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                      [0U]);
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                            = (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x20U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x10U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U)))))));
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
        [0U];
    if ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                             ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))
                            ? (QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                           [0U]) : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                    [0U])) : ((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
            = ((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                ? 0x3ffffffffULL : (QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc)));
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                          [0U]) : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[0U] 
        = ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o
        [1U];
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
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o
        [1U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex
        [0U];
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1U] 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex
        [1U];
}
