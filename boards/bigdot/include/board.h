/*
 * Copyright (C) 2024  LF Murillo
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_bigdot Big Dot board
 * @ingroup     boards
 * @brief       Support for the librelab::Big Dot board
 * @{
 *
 * @file
 * @brief       Support for the librelab::Big Dot SAML21-based board.
 *
 * @author      LF Murillo <unixjazz@riseup.net>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"
#include "periph_conf.h"
#include "periph/pm.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define CONFIG_USB_PID        (0xBD00)
#define CONFIG_USB_VID        (0x1207)
#define CONFIG_USB_MANUF_STR  "librelab::Big Dot"
#define CONFIG_USB_SERIAL_STR "20210601"

/**
 * @name Semtech SX1276 configuration
 * @{
 */
#define SX127X_PARAM_SPI		(SPI_DEV(0))
#define SX127X_PARAM_RESET GPIO_PIN     (PA, 14)
#define SX127X_PARAM_DIO0 GPIO_PIN      (PA, 15)
#define SX127X_PARAM_DIO1 GPIO_PIN      (PA, 27)
#define SX127X_PARAM_DIO2               GPIO_UNDEF
#define SX127X_PARAM_DIO3               GPIO_UNDEF
#define SX127X_PARAM_PASELECT           (SX127X_PA_BOOST)
/** @}*/

/**
 * @name LED pin definitions and handlers
 * @{
 */
#define LED_PORT PORT->Group[0]
#define LED0_PIN GPIO_PIN(PA, 6)
#define LED0_MASK (1 << 6)
#define LED0_ON (LED_PORT.OUTCLR.reg = LED0_MASK)
#define LED0_OFF (LED_PORT.OUTSET.reg = LED0_MASK)
#define LED0_TOGGLE (LED_PORT.OUTTGL.reg = LED0_MASK)
/** @}*/

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
