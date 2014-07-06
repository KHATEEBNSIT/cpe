/*
 * Copyright (c) 2012 Qualcomm Atheros, Inc.
 * All rights reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 *
 */

#ifndef _ISIS_REG_ACCESS_H_
#define _ISIS_REG_ACCESS_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "common/sw.h"

#define ISIS_HEADER_CMD_LEN 8
#define ISIS_HEADER_DATA_LEN 4
#define ISIS_HEADER_LEN   4
#define ISIS_HEADER_MAX_DATA_LEN 16
#define VID_LEN   2
#define ATHRS_HEADER_4BYTE_VAL 0xaaaa

    typedef enum {
        NORMAL_PACKET,
        RESERVED0,
        MIB_1ST,
        RESERVED1,
        RESERVED2,
        READ_WRITE_REG,
        READ_WRITE_REG_ACK,
        RESERVED3
    }
    ATHRS_HEADER_TYPE;

    typedef struct
    {
        a_uint8_t    version;
        a_uint8_t    priority;
        a_uint8_t    type ;
        a_uint8_t    broadcast;
        a_uint8_t    from_cpu;
        a_uint8_t    port_num;
    } athrs_header_t;

    typedef struct
    {
        a_uint32_t    reg_addr;
        a_uint8_t    cmd_len;
        a_uint8_t    cmd;
        a_uint16_t    check_code;
        a_uint32_t    seq_num;
    } athrs_header_regcmd_t;

    typedef struct
    {
        a_uint8_t data[ISIS_HEADER_MAX_DATA_LEN];
        a_uint8_t len;
        a_uint16_t athrs_4byte_value;
        volatile a_uint32_t seq;
    } athrs_cmd_resp_t;

    sw_error_t
    isis_phy_get(a_uint32_t dev_id, a_uint32_t phy_addr,
                 a_uint32_t reg, a_uint16_t * value);

    sw_error_t
    isis_phy_set(a_uint32_t dev_id, a_uint32_t phy_addr,
                 a_uint32_t reg, a_uint16_t value);

    sw_error_t
    isis_reg_get(a_uint32_t dev_id, a_uint32_t reg_addr, a_uint8_t value[],
                 a_uint32_t value_len);

    sw_error_t
    isis_reg_set(a_uint32_t dev_id, a_uint32_t reg_addr, a_uint8_t value[],
                 a_uint32_t value_len);

    sw_error_t
    isis_reg_field_get(a_uint32_t dev_id, a_uint32_t reg_addr,
                       a_uint32_t bit_offset, a_uint32_t field_len,
                       a_uint8_t value[], a_uint32_t value_len);

    sw_error_t
    isis_reg_field_set(a_uint32_t dev_id, a_uint32_t reg_addr,
                       a_uint32_t bit_offset, a_uint32_t field_len,
                       const a_uint8_t value[], a_uint32_t value_len);

    sw_error_t
    isis_reg_access_init(a_uint32_t dev_id, hsl_access_mode mode);

    sw_error_t
    isis_access_mode_set(a_uint32_t dev_id, hsl_access_mode mode);

    int
    isis_reg_config_header (a_uint8_t *header,  a_uint8_t wr_flag,
                            a_uint32_t reg_addr, a_uint8_t cmd_len,
                            a_uint8_t *val, a_uint32_t seq_num);

    sw_error_t isis_reg_parser_header_skb(a_uint8_t *header_buf, athrs_cmd_resp_t *cmd_resp);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _ISIS_REG_ACCESS_H_ */

