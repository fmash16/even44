/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2017 F_YUUCHI

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

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x04D8
#define PRODUCT_ID      0xEB2D
#define DEVICE_VER      0x0001
#define MANUFACTURER    fmash 
#define PRODUCT         even44

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
//
// Arduino Pro Micro pinout conversion to avr ATmega32u4
// (Omit the P in pin names)
//------------------------------------------------------------------------
//  TX  D1  PD3     |       RAW (+5V from USB)
//  RX  D0  PD2     |       GND
//  GND             |       Reset
//  GND             |       Vcc (+3V*)
//  SDA D2  PD1     |       PF4 D21 A3
//  SCL D3  PD0     |       PF5 D20 A2
//  A6  D4  PD4     |       PF6 D19 A1
//      D5  PC6     |       PF7 D18 A0
//  A7  D6  PD7     |       PB1 D15 SCLK
//      D7  PE6     |       PB3 D14 MISO
//  A8  D8  PB4     |       PB2 D16 MOSI
//  A9  D9  PB5     |       PB6 D10 A10
//------------------------------------------------------------------------

#define MATRIX_ROW_PINS { D7, E6, B4, B5 }          // Pro Micro: D6-D9
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }  // Pro Micro: D19-D10

#define SOFT_SERIAL_PIN D2
#define SPLIT_USB_DETECT
#define SERIAL_USE_MULTI_TRANSACTION

#define ENCODERS_PAD_A \
    { D4 }                  // Pro Micro D4
#define ENCODERS_PAD_B \
    { C6 }                  // Pro Micro D5


/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN D3
#define RGBLED_NUM 12    // Number of LEDs

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
