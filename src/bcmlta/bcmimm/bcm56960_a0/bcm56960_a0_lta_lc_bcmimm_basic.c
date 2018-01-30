/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 * Edits to this file will be lost when it is regenerated.
 *
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */
/* Logical Table Adaptor lifecycle management */
/* Handler: bcmimm_basic */
#include <bcmltd/bcmltd_handler.h>
#include <bcmimm/bcmimm_basic.h>
#include <bcmlta/bcm56960_a0/bcm56960_a0_lta_bcmimm.h>

static const bcmltd_generic_arg_t *
bcm56960_a0_lta_lc_bcmimm_basic_generic_arg[71] = {
    &bcm56960_a0_lta_bcmimm_ctr_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ctr_egr_flex_pool_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ctr_egr_fp_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ctr_egr_q_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ctr_ing_flex_pool_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_device_em_bank_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_device_em_bank_info_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_device_em_group_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_device_pkt_rx_q_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_egr_entry_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_egr_grp_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_egr_policy_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_egr_rule_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_em_entry_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_em_grp_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_em_policy_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_em_presel_entry_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_em_rule_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_em_src_class_mode_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_ing_entry_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_ing_grp_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_ing_policy_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_ing_presel_entry_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_ing_rule_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_ing_src_class_mode_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_vlan_entry_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_vlan_grp_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_vlan_policy_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_fp_vlan_rule_template_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_l3_alpm_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_lm_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_lm_link_state_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_lm_port_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_mirror_instance_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_autoneg_profile_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_pfc_profile_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_pm_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_pm_core_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_pm_lane_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_pm_rx_lane_profile_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_pm_tx_lane_profile_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_pc_port_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_port_bridge_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_port_egr_mirror_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_port_ing_mirror_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_port_membership_policy_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ser_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ser_control_pt_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ser_injection_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ser_injection_status_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ser_notification_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_ser_stats_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_table_em_control_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_table_op_pt_info_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_scheduler_shaper_cpu_node_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_shaper_port_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_egr_mc_port_service_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_egr_service_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_egr_uc_port_service_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_ing_headroom_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_ing_service_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_mc_q_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_port_int_pri_to_pri_grp_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_port_mc_q_to_service_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_port_pri_grp_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_port_pri_grp_to_headroom_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_port_pri_grp_to_service_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_port_uc_q_to_service_pool_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_uc_q_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_uc_q_grp_cth_handler_arg,
    &bcm56960_a0_lta_bcmimm_tm_thd_uc_q_to_uc_q_grp_cth_handler_arg,
};

static bcmltd_handler_lifecycle_arg_t
bcm56960_a0_lta_lc_bcmimm_basic_lc_arg = {
    .generic_args = 71,
    .generic_arg  = bcm56960_a0_lta_lc_bcmimm_basic_generic_arg
};

const bcmltd_table_lifecycle_handler_t
bcm56960_a0_lta_bcmimm_basic_lc_handler = {
    .init    = bcmimm_basic_init,
    .cleanup = bcmimm_basic_cleanup,
    .arg     = &bcm56960_a0_lta_lc_bcmimm_basic_lc_arg
};
