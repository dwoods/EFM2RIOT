/*
 * Copyright (C) 2016 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @addtogroup      cpu_efm32hg
 * @{
 *
 * @file
 * @brief           Memory definitions for the EFM32HG110F32 CPU
 *
 * @}
 */

MEMORY
{
    rom (rx)    : ORIGIN = 0x00000000, LENGTH = 32768
    ram (rwx)   : ORIGIN = 0x20000000, LENGTH = 4096
}

INCLUDE cortexm_base.ld
