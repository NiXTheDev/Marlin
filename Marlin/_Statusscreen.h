/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'Marlin-40x12.bmp'
 */
#pragma once

#define STATUS_LOGO_Y 3
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  B01111111,B11111111,B11111111,B11111111,B11111111,  // ▐███████████████████
  B10000000,B00000000,B00000000,B00000000,B00111111,  // ▌················███
  B10001110,B01110000,B00000000,B00110110,B00011111,  // ▌·█▌▐█·······█▐▌·▐██
  B10011111,B11111000,B00000000,B00110110,B00001111,  // ▌▐████▌······█▐▌··██
  B10011001,B10011011,B11000111,B10110000,B01110111,  // ▌▐▌▐▌▐▌██·▐█▌█··▐█▐█
  B10011001,B10011111,B11101111,B11110110,B11111011,  // ▌▐▌▐▌▐███▌████▐▌██▌█
  B10011001,B10011110,B01101100,B11110110,B11011001,  // ▌▐▌▐▌▐█▌▐▌█·██▐▌█▐▌▐
  B10011001,B10011110,B01101100,B00110110,B11011001,  // ▌▐▌▐▌▐█▌▐▌█··█▐▌█▐▌▐
  B10011001,B10011111,B11111100,B00111111,B11011001,  // ▌▐▌▐▌▐█████··████▐▌▐
  B10011001,B10011011,B11111100,B00011111,B11011001,  // ▌▐▌▐▌▐▌████··▐███▐▌▐
  B10000000,B00000000,B00000000,B00000000,B00000001,  // ▌··················▐
  B01111111,B11111111,B11111111,B11111111,B11111110   // ▐██████████████████▌
};


// Old default Ender-3 Logo Bitmap

//
// Status Screen Logo bitmap
//
// #define STATUS_LOGO_Y            8
// #define STATUS_LOGO_WIDTH       39

/**  const unsigned char status_logo_bmp[] PROGMEM = {
 *    B11111000,B00000001,B10000000,B00000000,
 *    B01001000,B00000000,B10000000,B00000000,
 *    B01000011,B11000011,B10001100,B11010000,
 *    B01110001,B00100100,B10010010,B01100000,
 *    B01000001,B00100100,B10011110,B01000000,
 *    B01001001,B00100100,B10010000,B01000000,
 *    B11111011,B10110011,B11001110,B11100000
 *  };
 */
//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
