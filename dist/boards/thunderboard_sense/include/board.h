/*
 * Copyright (C) 2015-2016 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_thunderboard_sense Silicon Labs Thunderboard Sense starter kit
 * @ingroup     boards
 * @brief       Support for the Silicon Labs Thunderboard Sense starter kit
 * @{
 *
 * @file
 * @brief       Board specific definitions for the Thunderboard Sense starter kit
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
 * @brief   Xtimer configuration
 * @{
 */
#define XTIMER                      (0)
#define XTIMER_CHAN                 (0)
#define XTIMER_WIDTH                (16)
#define XTIMER_SHIFT_ON_COMPARE     (2)
/** @} */

/**
 * @brief   GPIO pin for enabling communication through the board controller
 * @{
 */
#ifndef BC_ENABLED
#define BC_ENABLED                  (1)
#endif
#define BC_PIN              GPIO_PIN(PA, 12)
/** @} */

/**
 * @brief   User button pin definitions
 * @{
 */
#define PB0_PIN             GPIO_PIN(0, 0)
#define PB1_PIN             GPIO_PIN(0, 0)
/** @} */

/**
 * @brief    LED pin definitions
 * @{
 */
#define LED0_PIN            GPIO_PIN(0, 0)
#define LED1_PIN            GPIO_PIN(0, 0)
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

/**
 * @brief   Connection to the on-board temperature/humidity sensor (Si7021)
 * @{
 */
#define SI7021_I2C          (0)
#define SI7021_EN_PIN       GPIO_PIN(0, 0)
/** @} */

/**
 * @brief Initialize board specific hardware, including clock, LEDs and stdio
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */