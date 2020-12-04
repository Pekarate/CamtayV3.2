#include "lvgl.h"

/*******************************************************************************
 * Size: 13 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ARIAL_13
#define ARIAL_13 1
#endif

#if ARIAL_13

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xfe, 0x80,

    /* U+22 "\"" */
    0xb6, 0x80,

    /* U+23 "#" */
    0x24, 0x4b, 0xf9, 0x22, 0x9f, 0xd2, 0x24, 0x48,

    /* U+24 "$" */
    0x11, 0xed, 0x64, 0x91, 0xc1, 0xc5, 0x97, 0x57,
    0x84,

    /* U+25 "%" */
    0x61, 0x24, 0x89, 0x21, 0x90, 0x9, 0x82, 0x91,
    0x24, 0x49, 0x21, 0x80,

    /* U+26 "&" */
    0x38, 0x44, 0x44, 0x28, 0x78, 0x9e, 0x8e, 0xce,
    0x79,

    /* U+27 "'" */
    0xe0,

    /* U+28 "(" */
    0x29, 0x49, 0x24, 0x89, 0x10,

    /* U+29 ")" */
    0x89, 0x12, 0x49, 0x29, 0x40,

    /* U+2A "*" */
    0x27, 0xc8, 0xa0,

    /* U+2B "+" */
    0x10, 0x4f, 0xc4, 0x10, 0x40,

    /* U+2C "," */
    0xe0,

    /* U+2D "-" */
    0xe0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x22, 0x22, 0x44, 0x48, 0x80,

    /* U+30 "0" */
    0x79, 0x28, 0x61, 0x86, 0x18, 0x52, 0x78,

    /* U+31 "1" */
    0x13, 0xd1, 0x11, 0x11, 0x10,

    /* U+32 "2" */
    0x79, 0x18, 0x41, 0x8, 0x46, 0x10, 0xfc,

    /* U+33 "3" */
    0x72, 0x20, 0x8e, 0x8, 0x18, 0x63, 0x78,

    /* U+34 "4" */
    0x8, 0x63, 0x8a, 0x4a, 0x2f, 0xc2, 0x8,

    /* U+35 "5" */
    0x7d, 0x4, 0x3e, 0xcc, 0x18, 0x73, 0x78,

    /* U+36 "6" */
    0x39, 0x38, 0x2e, 0xce, 0x18, 0x73, 0x78,

    /* U+37 "7" */
    0xfc, 0x21, 0x84, 0x30, 0x82, 0x18, 0x60,

    /* U+38 "8" */
    0x7a, 0x18, 0x5f, 0xca, 0x18, 0x73, 0x78,

    /* U+39 "9" */
    0x7b, 0x28, 0x61, 0xcd, 0xd0, 0x62, 0x70,

    /* U+3A ":" */
    0x82,

    /* U+3B ";" */
    0x83, 0x80,

    /* U+3C "<" */
    0x4, 0x76, 0x30, 0x70, 0x30, 0x0,

    /* U+3D "=" */
    0xfc, 0x0, 0x3f,

    /* U+3E ">" */
    0x83, 0x81, 0x83, 0x3b, 0x0, 0x0,

    /* U+3F "?" */
    0x74, 0x62, 0x11, 0x10, 0x80, 0x20,

    /* U+40 "@" */
    0xf, 0x83, 0x6, 0x66, 0xa4, 0x99, 0x90, 0x99,
    0x9, 0x91, 0x39, 0x32, 0x8d, 0xc4, 0x1, 0x30,
    0x61, 0xf8,

    /* U+41 "A" */
    0x18, 0xe, 0x5, 0x4, 0x82, 0x23, 0xf1, 0xc,
    0x82, 0x81, 0x0,

    /* U+42 "B" */
    0xf9, 0xa, 0x14, 0x2f, 0x90, 0xe0, 0xc1, 0xfc,

    /* U+43 "C" */
    0x3c, 0x42, 0x83, 0x80, 0x80, 0x80, 0x83, 0x42,
    0x3c,

    /* U+44 "D" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82,
    0xfc,

    /* U+45 "E" */
    0xff, 0x2, 0x4, 0xf, 0xd0, 0x20, 0x40, 0xfe,

    /* U+46 "F" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0x80,

    /* U+47 "G" */
    0x3e, 0x30, 0xb0, 0x30, 0x8, 0x7c, 0x7, 0x2,
    0xc3, 0x3e, 0x0,

    /* U+48 "H" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1, 0x82,

    /* U+49 "I" */
    0xff, 0x80,

    /* U+4A "J" */
    0x8, 0x42, 0x10, 0x86, 0x31, 0x70,

    /* U+4B "K" */
    0x87, 0x1a, 0x65, 0x8d, 0x13, 0x23, 0x42, 0x86,

    /* U+4C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0xfc,

    /* U+4D "M" */
    0xc1, 0xe0, 0xf8, 0x74, 0x5a, 0x2c, 0xa6, 0x53,
    0x29, 0x88, 0x80,

    /* U+4E "N" */
    0x83, 0x87, 0x8d, 0x99, 0x33, 0x63, 0xc3, 0x82,

    /* U+4F "O" */
    0x3e, 0x31, 0xb0, 0x70, 0x18, 0xc, 0x6, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+50 "P" */
    0xfd, 0x6, 0xc, 0x3f, 0xd0, 0x20, 0x40, 0x80,

    /* U+51 "Q" */
    0x3e, 0x21, 0xa0, 0x70, 0x18, 0xc, 0x6, 0x2,
    0xce, 0x3f, 0x80, 0x0,

    /* U+52 "R" */
    0xfc, 0x82, 0x82, 0x82, 0xfc, 0x88, 0x84, 0x86,
    0x82,

    /* U+53 "S" */
    0x3c, 0x42, 0x43, 0x60, 0x1e, 0x3, 0x41, 0x63,
    0x3e,

    /* U+54 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+55 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7c,

    /* U+56 "V" */
    0xc1, 0x20, 0x90, 0xcc, 0x42, 0x21, 0x20, 0x50,
    0x38, 0x18, 0x0,

    /* U+57 "W" */
    0xc6, 0x14, 0x61, 0x45, 0x24, 0x92, 0x49, 0x22,
    0x96, 0x28, 0xc3, 0xc, 0x30, 0xc0,

    /* U+58 "X" */
    0x41, 0x11, 0xd, 0x3, 0x80, 0x80, 0xa0, 0x98,
    0xc4, 0xc1, 0x0,

    /* U+59 "Y" */
    0x41, 0x31, 0x8c, 0x82, 0x80, 0xc0, 0x40, 0x20,
    0x10, 0x8, 0x0,

    /* U+5A "Z" */
    0xfe, 0xc, 0x30, 0xc1, 0x4, 0x10, 0x40, 0xfe,

    /* U+5B "[" */
    0xea, 0xaa, 0xab,

    /* U+5C "\\" */
    0x88, 0x44, 0x42, 0x22, 0x20,

    /* U+5D "]" */
    0xd5, 0x55, 0x57,

    /* U+5E "^" */
    0x30, 0xc6, 0x92, 0x4c,

    /* U+5F "_" */
    0xfe,

    /* U+60 "`" */
    0x90,

    /* U+61 "a" */
    0x7b, 0x10, 0x5f, 0x86, 0x37, 0x40,

    /* U+62 "b" */
    0x82, 0xf, 0xb3, 0x86, 0x18, 0x73, 0xf8,

    /* U+63 "c" */
    0x7b, 0x28, 0x20, 0x87, 0x27, 0x80,

    /* U+64 "d" */
    0x4, 0x17, 0xf3, 0x86, 0x18, 0x73, 0x7c,

    /* U+65 "e" */
    0x7b, 0x38, 0x7f, 0x83, 0x37, 0x80,

    /* U+66 "f" */
    0x74, 0xe4, 0x44, 0x44, 0x40,

    /* U+67 "g" */
    0x77, 0x38, 0x61, 0x87, 0x37, 0x41, 0x8d, 0xe0,

    /* U+68 "h" */
    0x84, 0x3d, 0x98, 0xc6, 0x31, 0x88,

    /* U+69 "i" */
    0xbf, 0x80,

    /* U+6A "j" */
    0x45, 0x55, 0x57,

    /* U+6B "k" */
    0x84, 0x27, 0x6e, 0x72, 0xd2, 0x88,

    /* U+6C "l" */
    0xff, 0x80,

    /* U+6D "m" */
    0xf7, 0x66, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+6E "n" */
    0xf4, 0x63, 0x18, 0xc6, 0x20,

    /* U+6F "o" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+70 "p" */
    0xfb, 0x38, 0x61, 0x87, 0x2f, 0xa0, 0x82, 0x0,

    /* U+71 "q" */
    0x7f, 0x38, 0x61, 0x87, 0x37, 0xc1, 0x4, 0x10,

    /* U+72 "r" */
    0xe8, 0x88, 0x88, 0x80,

    /* U+73 "s" */
    0x74, 0xf0, 0xe0, 0xc5, 0xc0,

    /* U+74 "t" */
    0x4b, 0xa4, 0x92, 0x60,

    /* U+75 "u" */
    0x8c, 0x63, 0x18, 0xcd, 0xa0,

    /* U+76 "v" */
    0xc5, 0x14, 0x9a, 0x28, 0xc1, 0x0,

    /* U+77 "w" */
    0x88, 0xe6, 0x55, 0x6a, 0xa5, 0x51, 0x98, 0x88,

    /* U+78 "x" */
    0x45, 0xa3, 0xc, 0x39, 0x2c, 0x40,

    /* U+79 "y" */
    0xc5, 0x14, 0xda, 0x28, 0xc3, 0x4, 0x21, 0x80,

    /* U+7A "z" */
    0xfc, 0x21, 0x8c, 0x63, 0xf, 0xc0,

    /* U+7B "{" */
    0x39, 0x8, 0x42, 0x60, 0x84, 0x21, 0x8, 0x30,

    /* U+7C "|" */
    0xff, 0xf0,

    /* U+7D "}" */
    0xe1, 0x8, 0x42, 0xc, 0x84, 0x21, 0x9, 0x80,

    /* U+7E "~" */
    0xe0, 0x70,

    /* U+B0 "°" */
    0x69, 0x96,

    /* U+C0 "À" */
    0x10, 0x4, 0x0, 0x3, 0x1, 0xc0, 0xa0, 0x90,
    0x44, 0x7e, 0x21, 0x90, 0x50, 0x20,

    /* U+C1 "Á" */
    0x8, 0x4, 0x0, 0x3, 0x1, 0xc0, 0xa0, 0x90,
    0x44, 0x7e, 0x21, 0x90, 0x50, 0x20,

    /* U+C2 "Â" */
    0x18, 0xa, 0x0, 0x3, 0x1, 0xc0, 0xa0, 0x90,
    0x44, 0x7e, 0x21, 0x90, 0x50, 0x20,

    /* U+C3 "Ã" */
    0x34, 0x16, 0x0, 0x3, 0x1, 0x81, 0xa0, 0x90,
    0x44, 0x7e, 0x21, 0xb0, 0x50, 0x30,

    /* U+C8 "È" */
    0x20, 0x20, 0x7, 0xf8, 0x10, 0x20, 0x7e, 0x81,
    0x2, 0x7, 0xf0,

    /* U+C9 "É" */
    0x10, 0x20, 0x7, 0xf8, 0x10, 0x20, 0x7e, 0x81,
    0x2, 0x7, 0xf0,

    /* U+CA "Ê" */
    0x30, 0x50, 0x7, 0xf8, 0x10, 0x20, 0x7e, 0x81,
    0x2, 0x7, 0xf0,

    /* U+CC "Ì" */
    0xd1, 0x55, 0x55,

    /* U+CD "Í" */
    0xe2, 0xaa, 0xaa,

    /* U+D0 "Ð" */
    0x7e, 0x20, 0x90, 0x28, 0x1f, 0x8a, 0x5, 0x2,
    0x82, 0x7e, 0x0,

    /* U+D2 "Ò" */
    0x18, 0x4, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0,

    /* U+D3 "Ó" */
    0xc, 0x4, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0,

    /* U+D4 "Ô" */
    0x1c, 0xa, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0,

    /* U+D5 "Õ" */
    0x1a, 0x16, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0,

    /* U+D9 "Ù" */
    0x30, 0x20, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x7, 0x1b, 0xe0,

    /* U+DA "Ú" */
    0x18, 0x20, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x7, 0x1b, 0xe0,

    /* U+DD "Ý" */
    0xc, 0x4, 0x0, 0x8, 0x26, 0x31, 0x90, 0x50,
    0x18, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+E0 "à" */
    0x20, 0x47, 0xb1, 0x5, 0xf8, 0x63, 0x74,

    /* U+E1 "á" */
    0x18, 0x47, 0xb1, 0x5, 0xf8, 0x63, 0x74,

    /* U+E2 "â" */
    0x31, 0x27, 0xb1, 0x5, 0xf8, 0x63, 0x74,

    /* U+E3 "ã" */
    0x78, 0x7, 0xb1, 0x5, 0xf8, 0x63, 0x74,

    /* U+E8 "è" */
    0x20, 0xc7, 0xb3, 0x87, 0xf8, 0x33, 0x78,

    /* U+E9 "é" */
    0x10, 0xc7, 0xb3, 0x87, 0xf8, 0x33, 0x78,

    /* U+EA "ê" */
    0x31, 0x27, 0xb3, 0x87, 0xf8, 0x33, 0x78,

    /* U+EC "ì" */
    0xd5, 0x55, 0x40,

    /* U+ED "í" */
    0xea, 0xaa, 0x80,

    /* U+F2 "ò" */
    0x20, 0xc7, 0xb3, 0x86, 0x18, 0x73, 0x78,

    /* U+F3 "ó" */
    0x10, 0x47, 0xb3, 0x86, 0x18, 0x73, 0x78,

    /* U+F4 "ô" */
    0x31, 0x27, 0xb3, 0x86, 0x18, 0x73, 0x78,

    /* U+F5 "õ" */
    0x78, 0x7, 0xb3, 0x86, 0x18, 0x73, 0x78,

    /* U+F9 "ù" */
    0x61, 0x23, 0x18, 0xc6, 0x33, 0x68,

    /* U+FA "ú" */
    0x31, 0x23, 0x18, 0xc6, 0x33, 0x68,

    /* U+FD "ý" */
    0x18, 0x4c, 0x51, 0x4d, 0xa2, 0x8c, 0x30, 0x42,
    0x18,

    /* U+102 "Ă" */
    0x24, 0x1e, 0x0, 0x3, 0x1, 0x81, 0x20, 0x90,
    0x44, 0x7e, 0x21, 0xb0, 0x50, 0x20,

    /* U+103 "ă" */
    0x78, 0x7, 0xb1, 0x5, 0xf8, 0x63, 0x74,

    /* U+110 "Đ" */
    0x7e, 0x20, 0x90, 0x28, 0x1f, 0x8a, 0x5, 0x2,
    0x82, 0x7e, 0x0,

    /* U+111 "đ" */
    0x1e, 0x9, 0xf6, 0x68, 0x50, 0xa1, 0x66, 0x7c,

    /* U+128 "Ĩ" */
    0x6c, 0xc0, 0x42, 0x10, 0x84, 0x21, 0x8, 0x40,

    /* U+129 "ĩ" */
    0x70, 0x8, 0x42, 0x10, 0x84, 0x20,

    /* U+168 "Ũ" */
    0x34, 0x90, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x7, 0x1b, 0xe0,

    /* U+169 "ũ" */
    0x70, 0x23, 0x18, 0xc6, 0x33, 0x68,

    /* U+1A0 "Ơ" */
    0x0, 0x9e, 0x58, 0xf8, 0x38, 0xc, 0x6, 0x3,
    0x3, 0x63, 0x1f, 0x0,

    /* U+1A1 "ơ" */
    0x2, 0xf7, 0x3c, 0x28, 0x50, 0xb3, 0x3c,

    /* U+1A2 "Ƣ" */
    0x3e, 0xe6, 0x31, 0xc1, 0x98, 0x9, 0x80, 0x98,
    0x9, 0x81, 0x96, 0x31, 0x3e, 0x10,

    /* U+1A3 "ƣ" */
    0x7f, 0x66, 0x61, 0x30, 0x98, 0x4e, 0x65, 0xe2,
    0x1, 0x0, 0x80, 0x40,

    /* U+1A4 "Ƥ" */
    0xff, 0x50, 0x48, 0x24, 0x33, 0xf1, 0x0, 0x80,
    0x40, 0x20, 0x0,

    /* U+1A5 "ƥ" */
    0xe, 0xec, 0xe1, 0x86, 0x1c, 0xbe, 0x82, 0x8,
    0x0,

    /* U+1A6 "Ʀ" */
    0x80, 0xfc, 0x82, 0x82, 0x82, 0xfc, 0x88, 0x84,
    0x86, 0x3, 0x1,

    /* U+1A7 "Ƨ" */
    0x3c, 0xc2, 0x82, 0x6, 0x78, 0xc0, 0x82, 0xc6,
    0x7c,

    /* U+1A8 "ƨ" */
    0x74, 0x46, 0xe8, 0x45, 0xc0,

    /* U+1A9 "Ʃ" */
    0xfd, 0x81, 0x81, 0x81, 0x4, 0x18, 0x60, 0xfe,

    /* U+1AA "ƪ" */
    0xca, 0xe2, 0x22, 0x22, 0x22, 0x23,

    /* U+1AB "ƫ" */
    0x44, 0xe4, 0x44, 0x44, 0x72, 0x60,

    /* U+1AC "Ƭ" */
    0xff, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+1AD "ƭ" */
    0x6b, 0xa4, 0x92, 0x60,

    /* U+1AE "Ʈ" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40, 0xc0,

    /* U+1AF "Ư" */
    0x0, 0xc1, 0x60, 0xb0, 0x68, 0x24, 0x12, 0x9,
    0x4, 0xc6, 0x3e, 0x0,

    /* U+1B0 "ư" */
    0x3, 0x16, 0x2c, 0x68, 0x91, 0x26, 0x34,

    /* U+2C6 "ˆ" */
    0x6d,

    /* U+2C7 "ˇ" */
    0x56,

    /* U+2C8 "ˈ" */
    0xe0,

    /* U+2C9 "ˉ" */
    0xf0,

    /* U+2CA "ˊ" */
    0x48,

    /* U+2CB "ˋ" */
    0x90,

    /* U+2CC "ˌ" */
    0xe0,

    /* U+2CD "ˍ" */
    0xf0,

    /* U+2CE "ˎ" */
    0x90,

    /* U+2CF "ˏ" */
    0x48,

    /* U+2D0 "ː" */
    0xc0, 0xc,

    /* U+2D1 "ˑ" */
    0xc0,

    /* U+2D2 "˒" */
    0xdc,

    /* U+2D3 "˓" */
    0xec,

    /* U+2D4 "˔" */
    0x5c,

    /* U+2D5 "˕" */
    0xe9, 0x0,

    /* U+2D6 "˖" */
    0xe0,

    /* U+2D7 "˗" */
    0xe0,

    /* U+2D8 "˘" */
    0x9f,

    /* U+2D9 "˙" */
    0x80,

    /* U+2DA "˚" */
    0xdb, 0x0,

    /* U+2DB "˛" */
    0x93, 0x80,

    /* U+2DC "˜" */
    0xd5, 0x80,

    /* U+2DD "˝" */
    0x5a, 0x80,

    /* U+2DE "˞" */
    0x4c, 0x20,

    /* U+2E0 "ˠ" */
    0xa9, 0x64,

    /* U+2E1 "ˡ" */
    0xf8,

    /* U+2E2 "ˢ" */
    0xf3, 0xf0,

    /* U+2E3 "ˣ" */
    0xa4, 0x6a,

    /* U+2E4 "ˤ" */
    0xe8, 0x84, 0x44,

    /* U+2E5 "˥" */
    0xf1, 0x11, 0x11, 0x11, 0x11,

    /* U+2E6 "˦" */
    0x11, 0xf1, 0x11, 0x11, 0x10,

    /* U+2E7 "˧" */
    0x11, 0x11, 0xf1, 0x11, 0x10,

    /* U+2E8 "˨" */
    0x11, 0x11, 0x11, 0xf1, 0x10,

    /* U+2E9 "˩" */
    0x11, 0x11, 0x11, 0x11, 0x1f,

    /* U+300 "̀" */
    0x48,

    /* U+301 "́" */
    0xe0,

    /* U+302 "̂" */
    0x65,

    /* U+303 "̃" */
    0xd5, 0x80,

    /* U+304 "̄" */
    0xf0,

    /* U+305 "̅" */
    0xfe,

    /* U+306 "̆" */
    0x3c,

    /* U+307 "̇" */
    0x80,

    /* U+308 "̈" */
    0xa0,

    /* U+309 "̉" */
    0xe8,

    /* U+30A "̊" */
    0xdb, 0x0,

    /* U+30B "̋" */
    0x5a, 0x80,

    /* U+30C "̌" */
    0x56,

    /* U+30D "̍" */
    0xe0,

    /* U+30E "̎" */
    0xb6, 0x80,

    /* U+30F "̏" */
    0xd2, 0x80,

    /* U+310 "̐" */
    0x43, 0x80,

    /* U+311 "̑" */
    0xf4,

    /* U+312 "̒" */
    0x60,

    /* U+313 "̓" */
    0xc0,

    /* U+314 "̔" */
    0xc0,

    /* U+315 "̕" */
    0xe0,

    /* U+316 "̖" */
    0x48,

    /* U+317 "̗" */
    0xe0,

    /* U+318 "̘" */
    0xd0,

    /* U+319 "̙" */
    0xe0,

    /* U+31A "̚" */
    0xe4, 0x80,

    /* U+31B "̛" */
    0x54,

    /* U+31C "̜" */
    0xc0,

    /* U+31D "̝" */
    0x5c,

    /* U+31E "̞" */
    0xe9, 0x0,

    /* U+31F "̟" */
    0xe8,

    /* U+320 "̠" */
    0xe0,

    /* U+321 "̡" */
    0x27, 0x0,

    /* U+322 "̢" */
    0x91, 0x80,

    /* U+323 "̣" */
    0x80,

    /* U+1EA0 "Ạ" */
    0x8, 0xa, 0x5, 0x6, 0xc2, 0x21, 0xf1, 0x4,
    0x82, 0xc1, 0x80, 0x0, 0x1, 0x0,

    /* U+1EA1 "ạ" */
    0x7b, 0x10, 0x5f, 0x86, 0x37, 0x40, 0x0, 0x40,

    /* U+1EA2 "Ả" */
    0x1c, 0x4, 0x0, 0x1, 0x1, 0x40, 0xa0, 0x98,
    0x44, 0x3e, 0x20, 0x90, 0x58, 0x30,

    /* U+1EA3 "ả" */
    0x38, 0x40, 0x1e, 0xc4, 0x17, 0xe1, 0x8d, 0xd0,

    /* U+1EA4 "Ấ" */
    0x1, 0xd, 0x5, 0x0, 0x1, 0x80, 0xe0, 0x50,
    0x48, 0x22, 0x3f, 0x10, 0xc8, 0x28, 0x10,

    /* U+1EA5 "ấ" */
    0x2, 0x8, 0xe0, 0x7, 0x98, 0x81, 0x3e, 0x85,
    0x19, 0xd0,

    /* U+1EA6 "Ầ" */
    0x40, 0x2c, 0x5, 0x0, 0x1, 0x80, 0xe0, 0x50,
    0x48, 0x22, 0x3f, 0x10, 0xc8, 0x28, 0x10,

    /* U+1EA7 "ầ" */
    0xc0, 0x80, 0x70, 0x3, 0xcc, 0x40, 0x9f, 0x42,
    0x8c, 0xe8,

    /* U+1EA8 "Ẩ" */
    0x7, 0xd, 0x5, 0x0, 0x1, 0x80, 0xc0, 0xd0,
    0x48, 0x26, 0x3f, 0x10, 0x98, 0x28, 0x10,

    /* U+1EA9 "ẩ" */
    0xe, 0x4, 0xd3, 0x47, 0x98, 0x81, 0x3e, 0x85,
    0x19, 0xd0,

    /* U+1EAA "Ẫ" */
    0x34, 0x16, 0x0, 0x3, 0x80, 0x0, 0xc0, 0x70,
    0x68, 0x24, 0x11, 0x1f, 0x88, 0x6c, 0x14, 0xc,

    /* U+1EAB "ẫ" */
    0x69, 0x60, 0xc, 0x49, 0xec, 0x41, 0x7e, 0x18,
    0xdd,

    /* U+1EAC "Ậ" */
    0x8, 0xa, 0x0, 0x1, 0x1, 0x40, 0xa0, 0xd8,
    0x44, 0x3e, 0x20, 0x90, 0x58, 0x30, 0x0, 0x0,
    0x20,

    /* U+1EAD "ậ" */
    0x38, 0x7, 0xb1, 0x5, 0xf8, 0x63, 0x74, 0x0,
    0x4,

    /* U+1EAE "Ắ" */
    0xc, 0x4, 0x9, 0x3, 0x0, 0x0, 0xc0, 0x60,
    0x48, 0x24, 0x33, 0x1f, 0x88, 0x48, 0x14, 0x8,

    /* U+1EAF "ắ" */
    0x18, 0x47, 0x80, 0x7a, 0x10, 0x5f, 0x86, 0x37,
    0x40,

    /* U+1EB0 "Ằ" */
    0x10, 0xc, 0x9, 0x3, 0x0, 0x0, 0xc0, 0x60,
    0x48, 0x24, 0x23, 0x1f, 0x88, 0x48, 0x14, 0x8,

    /* U+1EB1 "ằ" */
    0x20, 0x47, 0x80, 0x7a, 0x10, 0x5f, 0x86, 0x37,
    0x40,

    /* U+1EB2 "Ẳ" */
    0x1c, 0x4, 0x9, 0x3, 0x0, 0x0, 0xc0, 0x60,
    0x48, 0x24, 0x33, 0x1f, 0x88, 0x48, 0x14, 0x8,

    /* U+1EB3 "ẳ" */
    0x38, 0x21, 0x1e, 0x1, 0xe8, 0x41, 0x7e, 0x18,
    0xdd,

    /* U+1EB4 "Ẵ" */
    0x1a, 0xb, 0x4, 0x83, 0x80, 0x0, 0x60, 0x30,
    0x24, 0x12, 0x19, 0xf, 0xcc, 0x24, 0x1a, 0x4,

    /* U+1EB5 "ẵ" */
    0x69, 0x60, 0x1e, 0x1, 0xe8, 0x41, 0x7e, 0x18,
    0xdd,

    /* U+1EB6 "Ặ" */
    0x24, 0x1e, 0x0, 0x2, 0x2, 0x81, 0x40, 0x90,
    0x88, 0x7e, 0x61, 0x20, 0x50, 0x20, 0x0, 0x0,
    0x40,

    /* U+1EB7 "ặ" */
    0x78, 0x7, 0xa1, 0x5, 0xf8, 0x63, 0x74, 0x0,
    0x4,

    /* U+1EB8 "Ẹ" */
    0xff, 0x2, 0x4, 0xf, 0xd0, 0x20, 0x40, 0xfe,
    0x0, 0x0, 0x80,

    /* U+1EB9 "ẹ" */
    0x7b, 0x38, 0x7f, 0x83, 0x37, 0x80, 0x0, 0x40,

    /* U+1EBA "Ẻ" */
    0x38, 0x10, 0x40, 0xf, 0xf0, 0x20, 0x40, 0xff,
    0x2, 0x4, 0xf, 0xe0,

    /* U+1EBB "ẻ" */
    0x30, 0x40, 0x1e, 0xce, 0x1f, 0xe0, 0xcd, 0xe0,

    /* U+1EBC "Ẽ" */
    0x38, 0xb0, 0x7, 0xf8, 0x10, 0x20, 0x7e, 0x81,
    0x2, 0x7, 0xf0,

    /* U+1EBD "ẽ" */
    0x78, 0x7, 0xb3, 0x87, 0xf8, 0x33, 0x78,

    /* U+1EBE "Ế" */
    0x2, 0x68, 0xa0, 0xf, 0xf0, 0x20, 0x40, 0xfd,
    0x2, 0x4, 0xf, 0xe0,

    /* U+1EBF "ế" */
    0x6, 0x8, 0xc0, 0x7, 0x99, 0xa1, 0x7e, 0x81,
    0x99, 0xe0,

    /* U+1EC0 "Ề" */
    0x40, 0x58, 0x14, 0x0, 0x7f, 0x40, 0x40, 0x40,
    0x7e, 0x40, 0x40, 0x40, 0x7f,

    /* U+1EC1 "ề" */
    0xc0, 0x80, 0x60, 0x3, 0xcc, 0xd0, 0xbf, 0x40,
    0xcc, 0xf0,

    /* U+1EC2 "Ể" */
    0x6, 0x36, 0x28, 0x0, 0xfe, 0x80, 0x80, 0x80,
    0xfe, 0x80, 0x80, 0x80, 0xfe,

    /* U+1EC3 "ể" */
    0xe, 0x4, 0xd2, 0x47, 0x99, 0xa1, 0x7e, 0x81,
    0x99, 0xe0,

    /* U+1EC4 "Ễ" */
    0x68, 0xb0, 0x1, 0xc0, 0x1f, 0xe0, 0x40, 0x81,
    0xfa, 0x4, 0x8, 0x1f, 0xc0,

    /* U+1EC5 "ễ" */
    0x69, 0x60, 0xc, 0x49, 0xec, 0xe1, 0xfe, 0xc,
    0xde,

    /* U+1EC6 "Ệ" */
    0x10, 0x50, 0x7, 0xf8, 0x10, 0x20, 0x7e, 0x81,
    0x2, 0x7, 0xf0, 0x0, 0x4, 0x0,

    /* U+1EC7 "ệ" */
    0x30, 0x27, 0xb3, 0x87, 0xf8, 0x33, 0x78, 0x0,
    0x4,

    /* U+1EC8 "Ỉ" */
    0xe5, 0x4, 0x92, 0x49, 0x24,

    /* U+1EC9 "ỉ" */
    0xe8, 0x24, 0x92, 0x48,

    /* U+1ECA "Ị" */
    0xff, 0x90,

    /* U+1ECB "ị" */
    0xbf, 0x90,

    /* U+1ECC "Ọ" */
    0x3e, 0x31, 0xb0, 0x70, 0x18, 0xc, 0x6, 0x6,
    0xc6, 0x3e, 0x0, 0x0, 0x1, 0x0,

    /* U+1ECD "ọ" */
    0x3d, 0x8e, 0xc, 0x18, 0x38, 0xce, 0x0, 0x0,
    0x20,

    /* U+1ECE "Ỏ" */
    0x1c, 0x2, 0x2, 0x0, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x60, 0x6c, 0x63, 0xe0,

    /* U+1ECF "ỏ" */
    0x30, 0x40, 0x1e, 0xce, 0x18, 0x61, 0xcd, 0xe0,

    /* U+1ED0 "Ố" */
    0x1, 0x4, 0x85, 0x0, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x60, 0x6c, 0x63, 0xe0,

    /* U+1ED1 "ố" */
    0x6, 0x8, 0xc0, 0x7, 0x99, 0xa1, 0x42, 0x85,
    0x99, 0xe0,

    /* U+1ED2 "Ồ" */
    0x40, 0x24, 0x5, 0x0, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x60, 0x6c, 0x63, 0xe0,

    /* U+1ED3 "ồ" */
    0xc0, 0x80, 0x60, 0x3, 0xcc, 0xd0, 0xa1, 0x42,
    0xcc, 0xf0,

    /* U+1ED4 "Ổ" */
    0x3, 0xe, 0x85, 0x0, 0x3, 0xe3, 0x1b, 0x7,
    0x1, 0x80, 0xc0, 0x60, 0x6c, 0x63, 0xe0,

    /* U+1ED5 "ổ" */
    0xe, 0x4, 0xd3, 0x47, 0x99, 0xa1, 0x42, 0x85,
    0x99, 0xe0,

    /* U+1ED6 "Ỗ" */
    0x3e, 0x0, 0x7, 0x2, 0x80, 0x1, 0xf1, 0x8d,
    0x83, 0x80, 0xc0, 0x60, 0x30, 0x36, 0x31, 0xf0,

    /* U+1ED7 "ỗ" */
    0x69, 0x60, 0xc, 0x49, 0xec, 0xe1, 0x86, 0x1c,
    0xde,

    /* U+1ED8 "Ộ" */
    0x8, 0xa, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0, 0x0, 0x0,
    0x20,

    /* U+1ED9 "ộ" */
    0x38, 0x0, 0xf6, 0x38, 0x30, 0x60, 0xe3, 0x38,
    0x0, 0x0, 0x80,

    /* U+1EDA "Ớ" */
    0xc, 0x4, 0x0, 0x27, 0x96, 0x3e, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0,

    /* U+1EDB "ớ" */
    0x10, 0x25, 0xee, 0x78, 0x50, 0xa1, 0x66, 0x78,

    /* U+1EDC "Ờ" */
    0x18, 0x4, 0x0, 0x27, 0x96, 0x3e, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0,

    /* U+1EDD "ờ" */
    0x20, 0x65, 0xee, 0x78, 0x50, 0xa1, 0x66, 0x78,

    /* U+1EDE "Ở" */
    0x1c, 0x2, 0x2, 0x0, 0x13, 0xcb, 0x1f, 0x7,
    0x1, 0x80, 0xc0, 0x60, 0x6c, 0x63, 0xe0,

    /* U+1EDF "ở" */
    0x30, 0x20, 0xb, 0xdc, 0xf0, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1EE0 "Ỡ" */
    0x1a, 0x16, 0x0, 0x27, 0x96, 0x3e, 0xe, 0x3,
    0x1, 0x80, 0xc0, 0xd8, 0xc7, 0xc0,

    /* U+1EE1 "ỡ" */
    0x78, 0x5, 0xee, 0x78, 0x50, 0xa1, 0x66, 0x78,

    /* U+1EE2 "Ợ" */
    0x0, 0x9e, 0x58, 0xf8, 0x38, 0xc, 0x6, 0x3,
    0x3, 0x63, 0x1f, 0x0, 0x0, 0x0, 0x80,

    /* U+1EE3 "ợ" */
    0x2, 0xf7, 0x3c, 0x28, 0x50, 0xb3, 0x3c, 0x0,
    0x0, 0x40,

    /* U+1EE4 "Ụ" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7c,
    0x0, 0x0, 0x80,

    /* U+1EE5 "ụ" */
    0x8c, 0x63, 0x18, 0xcd, 0xa0, 0x1, 0x0,

    /* U+1EE6 "Ủ" */
    0x30, 0x10, 0x40, 0x8, 0x30, 0x60, 0xc1, 0x83,
    0x6, 0xe, 0x37, 0xc0,

    /* U+1EE7 "ủ" */
    0x71, 0x1, 0x18, 0xc6, 0x31, 0x9b, 0x40,

    /* U+1EE8 "Ứ" */
    0x18, 0x8, 0x0, 0x30, 0x58, 0x2c, 0x1a, 0x9,
    0x4, 0x82, 0x41, 0x31, 0x8f, 0x80,

    /* U+1EE9 "ứ" */
    0x30, 0x46, 0x2c, 0x58, 0xd1, 0x22, 0x4c, 0x68,

    /* U+1EEA "Ừ" */
    0x30, 0x8, 0x0, 0x30, 0x58, 0x2c, 0x1a, 0x9,
    0x4, 0x82, 0x41, 0x31, 0x8f, 0x80,

    /* U+1EEB "ừ" */
    0x60, 0x46, 0x2c, 0x58, 0xd1, 0x22, 0x4c, 0x68,

    /* U+1EEC "Ử" */
    0x30, 0x4, 0x4, 0x0, 0x18, 0x2c, 0x16, 0xd,
    0x4, 0x82, 0x41, 0x20, 0x98, 0xc7, 0xc0,

    /* U+1EED "ử" */
    0x60, 0x60, 0xc, 0x58, 0xb1, 0xa2, 0x44, 0x98,
    0xd0,

    /* U+1EEE "Ữ" */
    0x34, 0x24, 0x0, 0x30, 0x58, 0x2c, 0x1a, 0x9,
    0x4, 0x82, 0x41, 0x31, 0x8f, 0x80,

    /* U+1EEF "ữ" */
    0x70, 0x6, 0x2c, 0x58, 0xd1, 0x22, 0x4c, 0x68,

    /* U+1EF0 "Ự" */
    0x0, 0xc1, 0x60, 0xb0, 0x68, 0x24, 0x12, 0x9,
    0x4, 0xc6, 0x3e, 0x0, 0x0, 0x1, 0x0,

    /* U+1EF1 "ự" */
    0x3, 0x16, 0x2c, 0x68, 0x91, 0x26, 0x34, 0x0,
    0x0, 0x80,

    /* U+1EF2 "Ỳ" */
    0x8, 0x4, 0x0, 0x8, 0x26, 0x31, 0x90, 0x50,
    0x18, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+1EF3 "ỳ" */
    0x30, 0x4c, 0x51, 0x4d, 0xa2, 0x8c, 0x30, 0x42,
    0x18,

    /* U+1EF4 "Ỵ" */
    0x41, 0x31, 0x8c, 0x82, 0x80, 0xc0, 0x40, 0x20,
    0x10, 0x8, 0x0, 0x0, 0x1, 0x0,

    /* U+1EF5 "ỵ" */
    0x8e, 0x24, 0x94, 0x50, 0xc2, 0x8, 0x23, 0x20,

    /* U+1EF6 "Ỷ" */
    0x1c, 0x2, 0x2, 0x0, 0x4, 0x13, 0x18, 0xc8,
    0x28, 0xc, 0x4, 0x2, 0x1, 0x0, 0x80,

    /* U+1EF7 "ỷ" */
    0x70, 0x42, 0x23, 0x89, 0x25, 0x94, 0x30, 0xc2,
    0x8, 0xc0,

    /* U+1EF8 "Ỹ" */
    0x1a, 0x13, 0x0, 0x8, 0x36, 0x31, 0x10, 0x50,
    0x18, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+1EF9 "ỹ" */
    0x78, 0x8, 0x51, 0x4d, 0xa2, 0x8c, 0x30, 0x42,
    0x18
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 58, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 58, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 74, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 22, .adv_w = 185, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 139, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 40, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 44, .adv_w = 69, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 49, .adv_w = 69, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 54, .adv_w = 81, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 57, .adv_w = 121, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 62, .adv_w = 58, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 63, .adv_w = 69, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 64, .adv_w = 58, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 58, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 116, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 58, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 58, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 141, .adv_w = 121, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 147, .adv_w = 121, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 150, .adv_w = 121, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 156, .adv_w = 116, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 211, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 180, .adv_w = 139, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 127, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 162, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 150, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 58, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 173, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 150, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 162, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 324, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 139, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 127, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 150, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 139, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 196, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 139, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 139, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 127, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 58, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 416, .adv_w = 58, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 58, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 424, .adv_w = 98, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 428, .adv_w = 104, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 429, .adv_w = 69, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 430, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 58, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 475, .adv_w = 116, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 46, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 46, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 486, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 46, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 173, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 116, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 521, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 529, .adv_w = 69, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 58, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 116, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 150, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 575, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 69, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 589, .adv_w = 54, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 591, .adv_w = 69, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 599, .adv_w = 121, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 601, .adv_w = 83, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 603, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 58, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 58, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 150, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 150, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 58, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 58, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 870, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 877, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 884, .adv_w = 116, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 116, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 905, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 58, .box_w = 5, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 46, .box_w = 5, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 959, .adv_w = 150, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 116, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 161, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 212, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1009, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1021, .adv_w = 153, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 116, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1041, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1052, .adv_w = 139, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 76, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1080, .adv_w = 58, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1086, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1094, .adv_w = 58, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1109, .adv_w = 161, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 69, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1129, .adv_w = 69, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1130, .adv_w = 40, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1131, .adv_w = 69, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1132, .adv_w = 69, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1133, .adv_w = 69, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1134, .adv_w = 40, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1135, .adv_w = 69, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1136, .adv_w = 69, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1137, .adv_w = 69, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1138, .adv_w = 62, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 62, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1141, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1142, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1143, .adv_w = 71, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1144, .adv_w = 71, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1146, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1147, .adv_w = 75, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1148, .adv_w = 69, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1149, .adv_w = 69, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 1150, .adv_w = 69, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1152, .adv_w = 69, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1154, .adv_w = 69, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1156, .adv_w = 69, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1158, .adv_w = 69, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1160, .adv_w = 58, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1162, .adv_w = 32, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1163, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1165, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1167, .adv_w = 68, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1170, .adv_w = 75, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 75, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1180, .adv_w = 75, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 75, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1190, .adv_w = 75, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1196, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1197, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -6, .ofs_y = 8},
    {.bitmap_index = 1198, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 8},
    {.bitmap_index = 1200, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -6, .ofs_y = 8},
    {.bitmap_index = 1201, .adv_w = 0, .box_w = 7, .box_h = 1, .ofs_x = -7, .ofs_y = 8},
    {.bitmap_index = 1202, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1203, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1204, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1205, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 9},
    {.bitmap_index = 1206, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 1208, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 8},
    {.bitmap_index = 1210, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -6, .ofs_y = 8},
    {.bitmap_index = 1211, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1212, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1214, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 8},
    {.bitmap_index = 1216, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1218, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1219, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1220, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1221, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1222, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1223, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1224, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 1225, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1226, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 1227, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 1229, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -1, .ofs_y = 5},
    {.bitmap_index = 1230, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 1231, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1232, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = -4},
    {.bitmap_index = 1234, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1235, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -5, .ofs_y = -2},
    {.bitmap_index = 1236, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1238, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 1240, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 1241, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1255, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1263, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1285, .adv_w = 139, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1300, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1310, .adv_w = 139, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1325, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 139, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1350, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1360, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1376, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1385, .adv_w = 139, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1402, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1411, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1427, .adv_w = 116, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1436, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1452, .adv_w = 116, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1461, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1477, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1502, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1511, .adv_w = 139, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1528, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1537, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1548, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1556, .adv_w = 139, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1568, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1576, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1587, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1594, .adv_w = 139, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1616, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1629, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1639, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1652, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 139, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1675, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1684, .adv_w = 139, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1698, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1707, .adv_w = 58, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1712, .adv_w = 58, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1716, .adv_w = 58, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1718, .adv_w = 46, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1720, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1734, .adv_w = 116, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1743, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1758, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1781, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1791, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1806, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1816, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1831, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1841, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1857, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1866, .adv_w = 162, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1883, .adv_w = 116, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1894, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1908, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1916, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1930, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1953, .adv_w = 116, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1962, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1976, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1984, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1999, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2009, .adv_w = 150, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2020, .adv_w = 116, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2027, .adv_w = 150, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2039, .adv_w = 116, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2060, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2068, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2082, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2090, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2105, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2114, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2128, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2136, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2151, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2161, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2175, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2184, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2198, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2206, .adv_w = 139, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2221, .adv_w = 104, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2231, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2245, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x10, 0x11, 0x12, 0x13, 0x18, 0x19, 0x1a,
    0x1c, 0x1d, 0x20, 0x22, 0x23, 0x24, 0x25, 0x29,
    0x2a, 0x2d, 0x30, 0x31, 0x32, 0x33, 0x38, 0x39,
    0x3a, 0x3c, 0x3d, 0x42, 0x43, 0x44, 0x45, 0x49,
    0x4a, 0x4d, 0x52, 0x53, 0x60, 0x61, 0x78, 0x79,
    0xb8, 0xb9
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 176, .range_length = 186, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 42, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 416, .range_length = 17, .glyph_id_start = 138,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 710, .range_length = 25, .glyph_id_start = 155,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 736, .range_length = 10, .glyph_id_start = 180,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 768, .range_length = 36, .glyph_id_start = 190,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 7840, .range_length = 90, .glyph_id_start = 226,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 7,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Arial_13 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ARIAL_13*/

