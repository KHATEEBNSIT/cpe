/*
 * Copyright (c) 2012 Qualcomm Atheros, Inc.
 * All rights reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 *
 */
/**
 * @defgroup fal_igmp FAL_IGMP
 * @{
 */
#ifndef _FAL_IGMP_H_
#define _FAL_IGMP_H_

#ifdef __cplusplus
extern "C" {
#endif                          /* __cplusplus */

#include "common/sw.h"
#include "fal/fal_type.h"



    sw_error_t
    fal_port_igmps_status_set(a_uint32_t dev_id, fal_port_t port_id, a_bool_t enable);



    sw_error_t
    fal_port_igmps_status_get(a_uint32_t dev_id, fal_port_t port_id, a_bool_t *enable);



    sw_error_t
    fal_igmp_mld_cmd_set(a_uint32_t dev_id, fal_fwd_cmd_t cmd);



    sw_error_t
    fal_igmp_mld_cmd_get(a_uint32_t dev_id, fal_fwd_cmd_t * cmd);



    sw_error_t
    fal_port_igmp_mld_join_set(a_uint32_t dev_id, fal_port_t port_id, a_bool_t enable);



    sw_error_t
    fal_port_igmp_mld_join_get(a_uint32_t dev_id, fal_port_t port_id, a_bool_t * enable);



    sw_error_t
    fal_port_igmp_mld_leave_set(a_uint32_t dev_id, fal_port_t port_id, a_bool_t enable);



    sw_error_t
    fal_port_igmp_mld_leave_get(a_uint32_t dev_id, fal_port_t port_id, a_bool_t * enable);



    sw_error_t
    fal_igmp_mld_rp_set(a_uint32_t dev_id, fal_pbmp_t pts);



    sw_error_t
    fal_igmp_mld_rp_get(a_uint32_t dev_id, fal_pbmp_t * pts);



    sw_error_t
    fal_igmp_mld_entry_creat_set(a_uint32_t dev_id, a_bool_t enable);



    sw_error_t
    fal_igmp_mld_entry_creat_get(a_uint32_t dev_id, a_bool_t * enable);


    sw_error_t
    fal_igmp_mld_entry_static_set(a_uint32_t dev_id, a_bool_t static_en);


    sw_error_t
    fal_igmp_mld_entry_static_get(a_uint32_t dev_id, a_bool_t * static_en);


    sw_error_t
    fal_igmp_mld_entry_leaky_set(a_uint32_t dev_id, a_bool_t enable);


    sw_error_t
    fal_igmp_mld_entry_leaky_get(a_uint32_t dev_id, a_bool_t * enable);


    sw_error_t
    fal_igmp_mld_entry_v3_set(a_uint32_t dev_id, a_bool_t enable);


    sw_error_t
    fal_igmp_mld_entry_v3_get(a_uint32_t dev_id, a_bool_t * enable);


    sw_error_t
    fal_igmp_mld_entry_queue_set(a_uint32_t dev_id, a_bool_t enable, a_uint32_t queue);


    sw_error_t
    fal_igmp_mld_entry_queue_get(a_uint32_t dev_id, a_bool_t * enable, a_uint32_t * queue);


    sw_error_t
    fal_port_igmp_mld_learn_limit_set(a_uint32_t dev_id, fal_port_t port_id,
                                      a_bool_t enable, a_uint32_t cnt);


    sw_error_t
    fal_port_igmp_mld_learn_limit_get(a_uint32_t dev_id, fal_port_t port_id,
                                      a_bool_t * enable, a_uint32_t * cnt);


    sw_error_t
    fal_port_igmp_mld_learn_exceed_cmd_set(a_uint32_t dev_id, fal_port_t port_id,
                                           fal_fwd_cmd_t cmd);


    sw_error_t
    fal_port_igmp_mld_learn_exceed_cmd_get(a_uint32_t dev_id, fal_port_t port_id,
                                           fal_fwd_cmd_t * cmd);


#ifdef __cplusplus
}
#endif                          /* __cplusplus */
#endif                          /* _FAL_IGMP_H_ */

/**
 * @}
 */
