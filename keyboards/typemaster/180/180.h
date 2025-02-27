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

#include "quantum.h"

#define LAYOUT( \
    k000,   k001,    k002,   k003,   k004,   k005,   k006,   k007,   k008,   k009,   k010,   k011,   k012,   k013, \
    k100,   k101,    k102,   k103,   k104,   k105,   k106,   k107,   k108,   k109,   k110,   k111,   k112,   k113,   k114,    k115, \
    k200,   k201,    k202,   k203,   k204,   k205,   k206,   k207,   k208,   k209,   k210,   k211,   k212,   k213,            k215, \
    k300,   k301,    k302,   k303,   k304,   k305,   k306,   k307,   k308,   k309,   k310,   k311,   k312,   k313,            k315, \
    k400,   k401,    k402,   k403,   k404,   k405,   k406,   k407,   k408,   k409,   k410,   k411,   k412,           k414, \
    k500,   k501,    k502,                   k505,                                   k510,   k511,           k513,   k514,    k515  \
) \
{ \
    {k000,   k001,   k002,   k003,   k004,   k005,   k006,   k007,   k008,   k009,   k010,   k011,   k012,   k013}, \
    {k100,   k101,   k102,   k103,   k104,   k105,   k106,   k107,   k108,   k109,   k110,   k111,   k112,   k113,   k114,    k115}, \
    {k200,   k201,   k202,   k203,   k204,   k205,   k206,   k207,   k208,   k209,   k210,   k211,   k212,   k213,   KC_NO,   k215}, \
    {k300,   k301,   k302,   k303,   k304,   k305,   k306,   k307,   k308,   k309,   k310,   k311,   k312,   k313,   KC_NO,   k315}, \
    {k400,   k401,   k402,   k403,   k404,   k405,   k406,   k407,   k408,   k409,   k410,   k411,   k412,   KC_NO,  k414}, \
    {k500,   k501,   k502,   KC_NO,  KC_NO,  k505,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  k510,   k511,   KC_NO,  k513,   k514,    k515}  \
}

void matrix_init_user(void);
void matrix_scan_user(void);
