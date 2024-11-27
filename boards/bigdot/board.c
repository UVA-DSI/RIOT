/*
 * Copyright (C) 2024  LF Murillo
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_bigdot
 * @{
 *
 * @file        board.c
 * @brief       Board specific implementations for the librelab::Big Dot board
 *
 *
 * @author      LF Murillo <unixjazz@riseup.net>
 *
 * @}
 */

#include <stdio.h>

#include "board.h"
#include "cpu.h"
#include "periph/gpio.h"

#ifdef MODULE_SX127X
#include "sx127x_params.h"
#endif

void board_init(void)
{
    /* initialize board LED */
    gpio_init(LED0_PIN, GPIO_OUT);
}
