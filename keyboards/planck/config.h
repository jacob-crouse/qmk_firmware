/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define MANUFACTURER    OLKB
#define PRODUCT         Planck
#define DESCRIPTION     A compact ortholinear keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Planck PCB default pin-out */
/*#define MATRIX_ROW_PINS { D0, D5, B5, B6 }
#define MATRIX_COL_PINS { F1, F0, B0, C7, F4, F5, F6, F7, D4, D6, B4, D7 }*/

// WHITE HOMEMADE PLANCK PINS
/*#define MATRIX_ROW_PINS { B3, B7, D0, D1 }
#define MATRIX_COL_PINS { B0, B1, F0, F1, F4, F5, F6, F7, B6, B5, B4, D7 }*/

// LUBED, SPRING SWAPPED, FILMED CHERRY MX BLACK PLANCK PINS & KAILH BOX NAVY PLANCK PINS
#define MATRIX_ROW_PINS { D1, D0, D4, C6 }
#define MATRIX_COL_PINS { D7, D2, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4 }

#define UNUSED_PINS

#define QMK_ESC_OUTPUT F1
#define QMK_ESC_INPUT D5
#define QMK_LED     E6
#define QMK_SPEAKER C6

#define AUDIO_VOICES
#define C6_AUDIO

#define BACKLIGHT_PIN B7

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
