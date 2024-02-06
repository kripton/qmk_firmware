/* Copyright 2023 @ Keychron(https://www.keychron.com)
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

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

/* Factory Reset Key Definition */
#define FN_KEY1 MO(1)
#define FN_KEY2 MO(3)

// Space cadet: Shift is normal parantheses (default)
//              Control is curly braces = shift + square braces
#define LCPO_KEYS KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_LEFT_BRACKET
#define RCPC_KEYS KC_RIGHT_CTRL, KC_LEFT_SHIFT, KC_RIGHT_BRACKET
//              Alt is angled brackets = shift + comma / dot
#define LAPO_KEYS KC_LEFT_ALT, KC_LEFT_SHIFT, KC_COMMA
#define RAPC_KEYS KC_RIGHT_ALT, KC_RIGHT_SHIFT, KC_DOT
