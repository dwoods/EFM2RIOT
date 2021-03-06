/*
 * Copyright (C) 2015-2016 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_stk3600 Silicon Labs STK3600 starter kit
 * @ingroup     boards
 * @brief       Support for the Silicon Labs STK3600 starter kit
 * @{
 *
 * @file
 * @brief       Board specific definitions for the STK3600 starter kit
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 * @author      Bas Stottelaar <basstottelaar@gmail.com>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"

#include "periph_conf.h"
#include "periph/gpio.h"
#include "periph/spi.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Xtimer configuration.
 * @note    The timer runs at 250 KHz to increase accuracy.
 * @{
 */
#define XTIMER_HZ           (250000UL)
#define XTIMER_SHIFT        (2)
#define XTIMER_WIDTH        (16)
/** @} */

/**
 * @brief   Define for enabling Advanced Energy Monitor core output via SWO.
 * @{
 */
#ifndef AEM_ENABLED
#define AEM_ENABLED                 (1)
#endif
/** @} */

/**
 * @brief   GPIO pin for enabling communication through the board controller.
 * @{
 */
#ifndef BC_ENABLED
#define BC_ENABLED                  (1)
#endif
    #define BC_PIN              GPIO_PIN(PF, 7)
/** @} */

/**
 * @brief   Push button pin definitions.
 * @{
 */
#define PB0_PIN             GPIO_PIN(PB, 9)
#define PB1_PIN             GPIO_PIN(PB, 10)
/** @} */

/**
 * @brief    LED pin definitions.
 * @{
 */
#define LED0_PIN            GPIO_PIN(PE, 2)
#define LED1_PIN            GPIO_PIN(PE, 3)
/** @} */

/**
 * @brief   Macros for controlling the on-board LEDs.
 * @{
 */
#define LED0_ON             gpio_set(LED0_PIN)
#define LED0_OFF            gpio_clear(LED0_PIN)
#define LED0_TOGGLE         gpio_toggle(LED0_PIN)
#define LED1_ON             gpio_set(LED1_PIN)
#define LED1_OFF            gpio_clear(LED1_PIN)
#define LED1_TOGGLE         gpio_toggle(LED1_PIN)
/** @} */

/**
 * @brief   Initialize the board (GPIO, sensors, clocks).
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
