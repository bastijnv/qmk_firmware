/* 
 * Copyright 2021 Typemaster
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define VENDOR_ID 0x544D
#define PRODUCT_ID 0x0180
#define DEVICE_VER 0x0001
#define MANUFACTURER Typemaster
#define PRODUCT Typemaster 180
#define DESCRIPTION Typemaster 180

#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { B0, B1, D1, D4, B5, F7 }
#define MATRIX_COL_PINS { F0, B4, D7, D6, C7, C6, B6, D5, D3, D2, B7, B3, B2, F4, F5, F6 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5
