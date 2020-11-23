#include "lvgl.h"

/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ARIAL_14
#define ARIAL_14 1
#endif

#if ARIAL_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0x20,

    /* U+22 "\"" */
    0x99, 0x99,

    /* U+23 "#" */
    0x24, 0x48, 0x97, 0xf2, 0x49, 0x12, 0x7f, 0x48,
    0x91, 0x20,

    /* U+24 "$" */
    0x11, 0xe9, 0x64, 0x91, 0xc3, 0x85, 0x16, 0x5d,
    0x5e, 0x10, 0x40,

    /* U+25 "%" */
    0x61, 0x24, 0x89, 0x22, 0x50, 0x64, 0x2, 0x60,
    0xa4, 0x29, 0x12, 0x44, 0x92, 0x18,

    /* U+26 "&" */
    0x38, 0x44, 0x44, 0x6c, 0x38, 0x78, 0xdb, 0x8e,
    0x86, 0xcf, 0x79,

    /* U+27 "'" */
    0xf0,

    /* U+28 "(" */
    0x29, 0x49, 0x24, 0x91, 0x24, 0x40,

    /* U+29 ")" */
    0x89, 0x22, 0x49, 0x25, 0x25, 0x0,

    /* U+2A "*" */
    0x25, 0x58, 0xa5, 0x0,

    /* U+2B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+2C "," */
    0xe0,

    /* U+2D "-" */
    0xf0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x13, 0x22, 0x24, 0x44, 0x48, 0x80,

    /* U+30 "0" */
    0x39, 0x28, 0x61, 0x86, 0x18, 0x61, 0x85, 0x27,
    0x0,

    /* U+31 "1" */
    0x13, 0x7d, 0x11, 0x11, 0x11, 0x10,

    /* U+32 "2" */
    0x79, 0x3c, 0x41, 0xc, 0x21, 0x8c, 0x63, 0xf,
    0xc0,

    /* U+33 "3" */
    0x38, 0x9b, 0x10, 0x20, 0x83, 0x81, 0x81, 0xc2,
    0x88, 0xe0,

    /* U+34 "4" */
    0x8, 0x30, 0x61, 0x46, 0x89, 0x22, 0x7f, 0x8,
    0x10, 0x20,

    /* U+35 "5" */
    0x7d, 0xc, 0x20, 0xbb, 0x30, 0x41, 0x87, 0x27,
    0x0,

    /* U+36 "6" */
    0x39, 0x38, 0x60, 0xbb, 0x38, 0x61, 0x85, 0x33,
    0x80,

    /* U+37 "7" */
    0xfc, 0x20, 0x84, 0x10, 0xc2, 0x8, 0x21, 0x84,
    0x0,

    /* U+38 "8" */
    0x39, 0x14, 0x51, 0x39, 0x28, 0x61, 0x87, 0x37,
    0x80,

    /* U+39 "9" */
    0x73, 0x28, 0x61, 0x87, 0x37, 0x41, 0x87, 0x27,
    0x0,

    /* U+3A ":" */
    0x81,

    /* U+3B ";" */
    0x81, 0xc0,

    /* U+3C "<" */
    0x6, 0x39, 0xc6, 0xe, 0x3, 0x1, 0x80,

    /* U+3D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+3E ">" */
    0x81, 0xc0, 0x60, 0x31, 0xce, 0x30, 0x0,

    /* U+3F "?" */
    0x3c, 0xcf, 0x8, 0x10, 0x61, 0x86, 0x8, 0x10,
    0x0, 0x40,

    /* U+40 "@" */
    0xf, 0xc0, 0x83, 0x8, 0x4, 0x8e, 0xb4, 0x8c,
    0xcc, 0x66, 0x42, 0x32, 0x11, 0x91, 0x94, 0xcd,
    0x93, 0xb0, 0xc0, 0x13, 0x3, 0x7, 0xe0,

    /* U+41 "A" */
    0x8, 0xa, 0x5, 0x2, 0xc3, 0x61, 0x10, 0x8c,
    0xfe, 0x41, 0x60, 0xf0, 0x20,

    /* U+42 "B" */
    0xfd, 0xe, 0xc, 0x18, 0x5f, 0xa1, 0xc1, 0x83,
    0xf, 0xf0,

    /* U+43 "C" */
    0x3c, 0x63, 0x41, 0x80, 0x80, 0x80, 0x80, 0x81,
    0x41, 0x63, 0x3c,

    /* U+44 "D" */
    0xfc, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x82, 0x86, 0xfc,

    /* U+45 "E" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xe0, 0x40, 0x81,
    0x3, 0xf8,

    /* U+46 "F" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0x8,
    0x0,

    /* U+47 "G" */
    0x1e, 0x30, 0x90, 0x30, 0x8, 0x4, 0x3e, 0x3,
    0x1, 0x40, 0xb0, 0xc7, 0x80,

    /* U+48 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+49 "I" */
    0xff, 0xe0,

    /* U+4A "J" */
    0x8, 0x42, 0x10, 0x84, 0x21, 0x8c, 0x5c,

    /* U+4B "K" */
    0x82, 0x84, 0x88, 0x90, 0xb0, 0xf0, 0xd8, 0x8c,
    0x84, 0x86, 0x83,

    /* U+4C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+4D "M" */
    0xc1, 0xe0, 0xf0, 0x74, 0x5a, 0x2d, 0x16, 0xdb,
    0x29, 0x94, 0xce, 0x62, 0x20,

    /* U+4E "N" */
    0x81, 0xc1, 0xe1, 0xa1, 0xb1, 0x99, 0x8d, 0x85,
    0x87, 0x83, 0x81,

    /* U+4F "O" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x31, 0x8f, 0x80,

    /* U+50 "P" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa0, 0x40, 0x81,
    0x2, 0x0,

    /* U+51 "Q" */
    0x3c, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x45, 0xb1, 0x87, 0xe0, 0x10,

    /* U+52 "R" */
    0xfe, 0x41, 0xa0, 0x50, 0x28, 0x37, 0xf2, 0x31,
    0xc, 0x82, 0x41, 0xa0, 0x60,

    /* U+53 "S" */
    0x3c, 0x62, 0x43, 0x40, 0x78, 0x1e, 0x3, 0x41,
    0x41, 0x63, 0x3c,

    /* U+54 "T" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10,

    /* U+55 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+56 "V" */
    0xc0, 0xa0, 0xd0, 0x4c, 0x22, 0x31, 0x10, 0xc8,
    0x2c, 0x14, 0xe, 0x3, 0x0,

    /* U+57 "W" */
    0xc3, 0xa, 0x38, 0xd1, 0x44, 0x8a, 0x26, 0x59,
    0x16, 0x58, 0xa2, 0x85, 0x14, 0x28, 0xa1, 0xc3,
    0x4, 0x10,

    /* U+58 "X" */
    0x41, 0xb1, 0x8c, 0x82, 0xc1, 0xc0, 0x60, 0x70,
    0x6c, 0x23, 0x30, 0xb0, 0x60,

    /* U+59 "Y" */
    0xc1, 0xb0, 0x88, 0x86, 0xc1, 0x40, 0xe0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x0,

    /* U+5A "Z" */
    0x7f, 0x3, 0x6, 0x4, 0xc, 0x18, 0x30, 0x30,
    0x60, 0xc0, 0xff,

    /* U+5B "[" */
    0xea, 0xaa, 0xaa, 0xb0,

    /* U+5C "\\" */
    0x88, 0x44, 0x44, 0x22, 0x22, 0x10,

    /* U+5D "]" */
    0xd5, 0x55, 0x55, 0x70,

    /* U+5E "^" */
    0x10, 0xc2, 0x9a, 0x4d, 0x10,

    /* U+5F "_" */
    0xfe,

    /* U+60 "`" */
    0x90,

    /* U+61 "a" */
    0x7b, 0x10, 0x4f, 0xe6, 0x18, 0xdd,

    /* U+62 "b" */
    0x82, 0x8, 0x3e, 0xca, 0x18, 0x61, 0x87, 0x2f,
    0x0,

    /* U+63 "c" */
    0x79, 0x38, 0x20, 0x82, 0x14, 0xde,

    /* U+64 "d" */
    0x4, 0x10, 0x5f, 0x4e, 0x18, 0x61, 0x85, 0x37,
    0xc0,

    /* U+65 "e" */
    0x38, 0x8a, 0xf, 0xf8, 0x10, 0x51, 0x9e,

    /* U+66 "f" */
    0x32, 0x11, 0xe4, 0x21, 0x8, 0x42, 0x10,

    /* U+67 "g" */
    0x7d, 0x38, 0x61, 0x86, 0x14, 0xdf, 0x7, 0x37,
    0x80,

    /* U+68 "h" */
    0x82, 0x8, 0x2e, 0xc6, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+69 "i" */
    0x9f, 0xe0,

    /* U+6A "j" */
    0x20, 0x12, 0x49, 0x24, 0x92, 0xc0,

    /* U+6B "k" */
    0x82, 0x8, 0x26, 0x92, 0x8e, 0x2c, 0x92, 0x68,
    0x80,

    /* U+6C "l" */
    0xff, 0xe0,

    /* U+6D "m" */
    0xf7, 0x66, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x23,
    0x11,

    /* U+6E "n" */
    0xbb, 0x18, 0x61, 0x86, 0x18, 0x61,

    /* U+6F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+70 "p" */
    0xfb, 0x28, 0x61, 0x86, 0x1c, 0xbc, 0x82, 0x8,
    0x0,

    /* U+71 "q" */
    0x7d, 0x38, 0x61, 0x86, 0x14, 0xcf, 0x4, 0x10,
    0x40,

    /* U+72 "r" */
    0xf8, 0x88, 0x88, 0x88,

    /* U+73 "s" */
    0x7a, 0x38, 0x3c, 0x1e, 0x18, 0x5e,

    /* U+74 "t" */
    0x9, 0x74, 0x92, 0x49, 0x80,

    /* U+75 "u" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0xdd,

    /* U+76 "v" */
    0xc6, 0x89, 0x13, 0x62, 0x85, 0xe, 0x8,

    /* U+77 "w" */
    0x8c, 0x73, 0x34, 0xc9, 0x3a, 0x52, 0x8c, 0xc3,
    0x30, 0xcc,

    /* U+78 "x" */
    0x44, 0xd8, 0xa0, 0x83, 0x85, 0x1b, 0x63,

    /* U+79 "y" */
    0xc6, 0x89, 0x13, 0x62, 0x85, 0xe, 0x8, 0x10,
    0x61, 0x80,

    /* U+7A "z" */
    0xfc, 0x21, 0x84, 0x21, 0x8c, 0x3f,

    /* U+7B "{" */
    0x19, 0x8, 0x42, 0x13, 0x4, 0x21, 0x8, 0x42,
    0xc,

    /* U+7C "|" */
    0xff, 0xfc,

    /* U+7D "}" */
    0xc1, 0x8, 0x42, 0x10, 0x64, 0x21, 0x8, 0x42,
    0x60,

    /* U+7E "~" */
    0xf3, 0x3c,

    /* U+B0 "°" */
    0x69, 0x96,

    /* U+C0 "À" */
    0x18, 0x4, 0x0, 0x1, 0x1, 0x40, 0xa0, 0x58,
    0x6c, 0x22, 0x11, 0x9f, 0xc8, 0x2c, 0x1e, 0x4,

    /* U+C1 "Á" */
    0xc, 0x4, 0x0, 0x1, 0x1, 0x40, 0xa0, 0x58,
    0x6c, 0x22, 0x11, 0x9f, 0xc8, 0x2c, 0x1e, 0x4,

    /* U+C2 "Â" */
    0x8, 0xe, 0x5, 0x81, 0x1, 0x40, 0xa0, 0x58,
    0x6c, 0x22, 0x11, 0x9f, 0xc8, 0x2c, 0x1e, 0x4,

    /* U+C3 "Ã" */
    0x3c, 0x0, 0x6, 0x3, 0x1, 0xc1, 0xa0, 0x98,
    0x4c, 0x62, 0x3f, 0xb0, 0xd8, 0x28, 0x18,

    /* U+C8 "È" */
    0x20, 0x20, 0x7, 0xf8, 0x10, 0x20, 0x40, 0xff,
    0x2, 0x4, 0x8, 0x1f, 0xc0,

    /* U+C9 "É" */
    0x18, 0x20, 0x7, 0xf8, 0x10, 0x20, 0x40, 0xff,
    0x2, 0x4, 0x8, 0x1f, 0xc0,

    /* U+CA "Ê" */
    0x10, 0x51, 0xb7, 0xf8, 0x10, 0x20, 0x40, 0xff,
    0x2, 0x4, 0x8, 0x1f, 0xc0,

    /* U+CC "Ì" */
    0xd1, 0x55, 0x55, 0x50,

    /* U+CD "Í" */
    0xe2, 0xaa, 0xaa, 0xa0,

    /* U+D0 "Ð" */
    0x7e, 0x20, 0x90, 0x48, 0x14, 0xf, 0xc5, 0x2,
    0x81, 0x41, 0x21, 0x9f, 0x80,

    /* U+D2 "Ò" */
    0x18, 0x4, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xf0,

    /* U+D3 "Ó" */
    0xc, 0x4, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xf0,

    /* U+D4 "Ô" */
    0x18, 0xa, 0xd, 0x87, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xf0,

    /* U+D5 "Õ" */
    0x1a, 0x16, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xf0,

    /* U+D9 "Ù" */
    0x30, 0x18, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+DA "Ú" */
    0xc, 0x18, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+DD "Ý" */
    0xc, 0x4, 0x0, 0x18, 0x36, 0x11, 0x10, 0xd8,
    0x28, 0x1c, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40,

    /* U+E0 "à" */
    0x20, 0x40, 0x1e, 0xc4, 0x13, 0xf9, 0x86, 0x37,
    0x40,

    /* U+E1 "á" */
    0x18, 0x40, 0x1e, 0xc4, 0x13, 0xf9, 0x86, 0x37,
    0x40,

    /* U+E2 "â" */
    0x31, 0xa0, 0x1e, 0xc4, 0x13, 0xf9, 0x86, 0x37,
    0x40,

    /* U+E3 "ã" */
    0x69, 0x60, 0x1e, 0xc4, 0x13, 0xf9, 0x86, 0x37,
    0x40,

    /* U+E8 "è" */
    0x30, 0x20, 0x1, 0xc4, 0x50, 0x7f, 0xc0, 0x82,
    0x8c, 0xf0,

    /* U+E9 "é" */
    0x18, 0x20, 0x1, 0xc4, 0x50, 0x7f, 0xc0, 0x82,
    0x8c, 0xf0,

    /* U+EA "ê" */
    0x38, 0xd8, 0x1, 0xc4, 0x50, 0x7f, 0xc0, 0x82,
    0x8c, 0xf0,

    /* U+EC "ì" */
    0xd1, 0x55, 0x54,

    /* U+ED "í" */
    0xe2, 0xaa, 0xa8,

    /* U+F2 "ò" */
    0x30, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+F3 "ó" */
    0x18, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+F4 "ô" */
    0x38, 0xd8, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+F5 "õ" */
    0x74, 0xb8, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+F9 "ù" */
    0x60, 0xc0, 0x21, 0x86, 0x18, 0x61, 0x86, 0x37,
    0x40,

    /* U+FA "ú" */
    0x18, 0xc0, 0x21, 0x86, 0x18, 0x61, 0x86, 0x37,
    0x40,

    /* U+FD "ý" */
    0x18, 0x20, 0x6, 0x34, 0x48, 0x9b, 0x14, 0x28,
    0x70, 0x40, 0x83, 0xc, 0x0,

    /* U+102 "Ă" */
    0x12, 0x4, 0x80, 0xc0, 0x30, 0xc, 0x7, 0x81,
    0x20, 0x48, 0x33, 0xc, 0x43, 0xf9, 0x86, 0x40,
    0x90, 0x30,

    /* U+103 "ă" */
    0x48, 0xc0, 0x1e, 0xc4, 0x13, 0xf9, 0x86, 0x37,
    0x40,

    /* U+110 "Đ" */
    0x7e, 0x20, 0x90, 0x48, 0x14, 0xf, 0xc5, 0x2,
    0x81, 0x41, 0x21, 0x9f, 0x80,

    /* U+111 "đ" */
    0x4, 0x3c, 0x13, 0xe4, 0xd0, 0xa1, 0x42, 0x84,
    0x99, 0xf0,

    /* U+128 "Ĩ" */
    0x78, 0x8, 0x42, 0x10, 0x84, 0x21, 0x8, 0x42,
    0x0,

    /* U+129 "ĩ" */
    0x6c, 0xc0, 0x42, 0x10, 0x84, 0x21, 0x8,

    /* U+168 "Ũ" */
    0x32, 0x4c, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+169 "ũ" */
    0x6a, 0x60, 0x21, 0x86, 0x18, 0x61, 0x86, 0x37,
    0x40,

    /* U+1A0 "Ơ" */
    0x0, 0x47, 0x96, 0x35, 0x6, 0x80, 0xa0, 0x28,
    0xa, 0x2, 0x80, 0x90, 0x46, 0x30, 0xf0,

    /* U+1A1 "ơ" */
    0x2, 0x75, 0x1c, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+1A2 "Ƣ" */
    0x1e, 0xe6, 0x31, 0x41, 0x98, 0x9, 0x80, 0x98,
    0x9, 0x80, 0x98, 0x9, 0x41, 0x16, 0x31, 0x3c,
    0x10,

    /* U+1A3 "ƣ" */
    0x3f, 0x23, 0x60, 0xb0, 0x58, 0x2c, 0x15, 0x12,
    0x71, 0x0, 0x80, 0x40, 0x20,

    /* U+1A4 "Ƥ" */
    0xff, 0x50, 0xe8, 0x24, 0x12, 0x19, 0xf8, 0x80,
    0x40, 0x20, 0x10, 0x8, 0x0,

    /* U+1A5 "ƥ" */
    0xc, 0x2b, 0xb3, 0x86, 0x18, 0x61, 0xcb, 0xc8,
    0x20, 0x80,

    /* U+1A6 "Ʀ" */
    0x80, 0x7f, 0x20, 0xd0, 0x28, 0x14, 0x1b, 0xf9,
    0x18, 0x86, 0x41, 0x20, 0xc0, 0x20, 0x18,

    /* U+1A7 "Ƨ" */
    0x3c, 0x46, 0x82, 0x2, 0x1e, 0x78, 0xc0, 0x83,
    0x83, 0x46, 0x3c,

    /* U+1A8 "ƨ" */
    0x7b, 0x10, 0x4f, 0xe2, 0x18, 0x5e,

    /* U+1A9 "Ʃ" */
    0xff, 0x81, 0x81, 0x81, 0x3, 0xc, 0x10, 0x61,
    0x83, 0xf8,

    /* U+1AA "ƪ" */
    0x64, 0xa4, 0xe1, 0x8, 0x42, 0x10, 0x84, 0x21,
    0xc,

    /* U+1AB "ƫ" */
    0x4, 0x4f, 0x44, 0x44, 0x44, 0x73, 0x70,

    /* U+1AC "Ƭ" */
    0xff, 0x22, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40,

    /* U+1AD "ƭ" */
    0x69, 0x74, 0x92, 0x49, 0x80,

    /* U+1AE "Ʈ" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x10, 0x1c,

    /* U+1AF "Ư" */
    0x0, 0x60, 0x58, 0x16, 0x6, 0x81, 0x20, 0x48,
    0x12, 0x4, 0x81, 0x20, 0x44, 0x20, 0xf0,

    /* U+1B0 "ư" */
    0x1, 0x85, 0x85, 0x86, 0x84, 0x84, 0x84, 0x8c,
    0x74,

    /* U+2C6 "ˆ" */
    0x65,

    /* U+2C7 "ˇ" */
    0x56,

    /* U+2C8 "ˈ" */
    0xe0,

    /* U+2C9 "ˉ" */
    0xf0,

    /* U+2CA "ˊ" */
    0xe0,

    /* U+2CB "ˋ" */
    0x90,

    /* U+2CC "ˌ" */
    0xe0,

    /* U+2CD "ˍ" */
    0xf0,

    /* U+2CE "ˎ" */
    0x90,

    /* U+2CF "ˏ" */
    0xe0,

    /* U+2D0 "ː" */
    0xe0, 0xb,

    /* U+2D1 "ˑ" */
    0xe0,

    /* U+2D2 "˒" */
    0xdc,

    /* U+2D3 "˓" */
    0xec,

    /* U+2D4 "˔" */
    0x5c,

    /* U+2D5 "˕" */
    0xe9, 0x0,

    /* U+2D6 "˖" */
    0x5d, 0x0,

    /* U+2D7 "˗" */
    0xe0,

    /* U+2D8 "˘" */
    0x96,

    /* U+2D9 "˙" */
    0x80,

    /* U+2DA "˚" */
    0xf7, 0x80,

    /* U+2DB "˛" */
    0x92, 0x70,

    /* U+2DC "˜" */
    0xd5, 0x80,

    /* U+2DD "˝" */
    0x7a, 0x80,

    /* U+2DE "˞" */
    0x65, 0xc,

    /* U+2E0 "ˠ" */
    0x96, 0x44, 0x66,

    /* U+2E1 "ˡ" */
    0xf8,

    /* U+2E2 "ˢ" */
    0xf3, 0xf0,

    /* U+2E3 "ˣ" */
    0xa6, 0x6a,

    /* U+2E4 "ˤ" */
    0xe9, 0x88, 0x44, 0x40,

    /* U+2E5 "˥" */
    0xf1, 0x11, 0x11, 0x11, 0x11, 0x10,

    /* U+2E6 "˦" */
    0x11, 0x1f, 0x11, 0x11, 0x11, 0x10,

    /* U+2E7 "˧" */
    0x11, 0x11, 0x1f, 0x11, 0x11, 0x10,

    /* U+2E8 "˨" */
    0x11, 0x11, 0x11, 0x11, 0xf1, 0x10,

    /* U+2E9 "˩" */
    0x11, 0x11, 0x11, 0x11, 0x11, 0xf0,

    /* U+300 "̀" */
    0xd0,

    /* U+301 "́" */
    0x58,

    /* U+302 "̂" */
    0x6d,

    /* U+303 "̃" */
    0xd5, 0x80,

    /* U+304 "̄" */
    0xf0,

    /* U+305 "̅" */
    0xfe,

    /* U+306 "̆" */
    0x96,

    /* U+307 "̇" */
    0x80,

    /* U+308 "̈" */
    0x90,

    /* U+309 "̉" */
    0xe5, 0x0,

    /* U+30A "̊" */
    0xf7, 0x80,

    /* U+30B "̋" */
    0x54, 0x80,

    /* U+30C "̌" */
    0xd6,

    /* U+30D "̍" */
    0xe0,

    /* U+30E "̎" */
    0xb6, 0x80,

    /* U+30F "̏" */
    0xf2, 0x80,

    /* U+310 "̐" */
    0x20, 0x1c,

    /* U+311 "̑" */
    0x69,

    /* U+312 "̒" */
    0xe0,

    /* U+313 "̓" */
    0xe0,

    /* U+314 "̔" */
    0xe0,

    /* U+315 "̕" */
    0xe0,

    /* U+316 "̖" */
    0xd0,

    /* U+317 "̗" */
    0x58,

    /* U+318 "̘" */
    0x74,

    /* U+319 "̙" */
    0xb8,

    /* U+31A "̚" */
    0xf1, 0x10,

    /* U+31B "̛" */
    0x56,

    /* U+31C "̜" */
    0xe0,

    /* U+31D "̝" */
    0x5c,

    /* U+31E "̞" */
    0xe9, 0x0,

    /* U+31F "̟" */
    0x5d, 0x0,

    /* U+320 "̠" */
    0xf0,

    /* U+321 "̡" */
    0x11, 0x1e,

    /* U+322 "̢" */
    0x88, 0x87,

    /* U+323 "̣" */
    0x80,

    /* U+1EA0 "Ạ" */
    0x8, 0xa, 0x5, 0x2, 0x82, 0x61, 0x10, 0xf8,
    0x82, 0x41, 0x60, 0xf0, 0x60, 0x0, 0x0, 0x40,

    /* U+1EA1 "ạ" */
    0x7b, 0x10, 0x4f, 0xe6, 0x18, 0xdd, 0x0, 0x1,
    0x0,

    /* U+1EA2 "Ả" */
    0x1c, 0x2, 0x2, 0x3, 0x1, 0xc0, 0xa0, 0xd0,
    0x4c, 0x22, 0x31, 0x1f, 0xc8, 0x2c, 0x1c, 0xc,

    /* U+1EA3 "ả" */
    0x38, 0x21, 0x0, 0x7b, 0x10, 0x4f, 0xe6, 0x18,
    0xdd,

    /* U+1EA4 "Ấ" */
    0x1, 0x86, 0x85, 0x0, 0x0, 0x80, 0xa0, 0x50,
    0x2c, 0x36, 0x11, 0x8, 0xcf, 0xe4, 0x16, 0xf,
    0x2,

    /* U+1EA5 "ấ" */
    0x2, 0x69, 0xa0, 0x7, 0x98, 0x81, 0x1e, 0xe5,
    0xa, 0x33, 0xa0,

    /* U+1EA6 "Ầ" */
    0x40, 0x36, 0x5, 0x0, 0x0, 0x80, 0xa0, 0x50,
    0x2c, 0x36, 0x11, 0x8, 0xcf, 0xe4, 0x16, 0xf,
    0x2,

    /* U+1EA7 "ầ" */
    0xc0, 0xb0, 0xd0, 0x3, 0xcc, 0x40, 0x8f, 0x72,
    0x85, 0x19, 0xd0,

    /* U+1EA8 "Ẩ" */
    0x3, 0x80, 0x20, 0xd0, 0x48, 0xc, 0x7, 0x1,
    0x40, 0x58, 0x32, 0xc, 0xc2, 0x31, 0xfc, 0x61,
    0x90, 0x6c, 0x8,

    /* U+1EA9 "ẩ" */
    0xe, 0x2, 0x34, 0x68, 0x0, 0x78, 0xc4, 0x4,
    0x3c, 0xe4, 0x84, 0x8c, 0x74,

    /* U+1EAA "Ẫ" */
    0x34, 0x16, 0x0, 0x3, 0x80, 0x0, 0xc0, 0x60,
    0x38, 0x34, 0x13, 0x9, 0x8c, 0x47, 0xf2, 0x1b,
    0x5, 0x3,

    /* U+1EAB "ẫ" */
    0x78, 0x3, 0x1a, 0x1, 0xec, 0x41, 0x3f, 0x98,
    0x63, 0x74,

    /* U+1EAC "Ậ" */
    0x8, 0xa, 0x5, 0x81, 0x1, 0x40, 0xa0, 0x50,
    0x4c, 0x22, 0x1f, 0x10, 0x48, 0x2c, 0x1e, 0xc,
    0x0, 0x0, 0x8, 0x0,

    /* U+1EAD "ậ" */
    0x31, 0xa0, 0x1e, 0xc4, 0x13, 0xf9, 0x86, 0x37,
    0x40, 0x0, 0x40,

    /* U+1EAE "Ắ" */
    0x6, 0x1, 0x1, 0x20, 0x30, 0x0, 0x3, 0x0,
    0xc0, 0x78, 0x12, 0x4, 0x83, 0x30, 0x84, 0x3f,
    0x18, 0x64, 0x9, 0x3,

    /* U+1EAF "ắ" */
    0x18, 0x44, 0x8c, 0x1, 0xec, 0x41, 0x3f, 0x98,
    0x63, 0x74,

    /* U+1EB0 "Ằ" */
    0x8, 0x3, 0x1, 0x20, 0x30, 0x0, 0x3, 0x0,
    0xc0, 0x78, 0x12, 0x4, 0x83, 0x30, 0x8c, 0x3f,
    0x18, 0x64, 0x9, 0x3,

    /* U+1EB1 "ằ" */
    0x20, 0x44, 0x8c, 0x1, 0xec, 0x41, 0x3f, 0x98,
    0x63, 0x74,

    /* U+1EB2 "Ẳ" */
    0xe, 0x1, 0x1, 0x20, 0x30, 0x0, 0x3, 0x0,
    0xc0, 0x78, 0x12, 0x4, 0x83, 0x30, 0x84, 0x3f,
    0x18, 0x64, 0x9, 0x3,

    /* U+1EB3 "ẳ" */
    0x38, 0x21, 0x12, 0x30, 0x7, 0xb1, 0x4, 0xfe,
    0x61, 0x8d, 0xd0,

    /* U+1EB4 "Ẵ" */
    0x1a, 0x5, 0x81, 0x20, 0x70, 0x0, 0x3, 0x0,
    0xc0, 0x78, 0x12, 0x4, 0x83, 0x30, 0x84, 0x7f,
    0x98, 0x64, 0xb, 0x3,

    /* U+1EB5 "ẵ" */
    0x78, 0x4, 0x8c, 0x1, 0xec, 0x41, 0x3f, 0x98,
    0x63, 0x74,

    /* U+1EB6 "Ặ" */
    0x12, 0x3, 0x0, 0x0, 0x10, 0xa, 0x2, 0x81,
    0xa0, 0x4c, 0x11, 0xf, 0xc2, 0x19, 0x86, 0x40,
    0x90, 0x30, 0x0, 0x0, 0x4, 0x0,

    /* U+1EB7 "ặ" */
    0x68, 0xc0, 0x1e, 0xc4, 0x13, 0xf9, 0x86, 0x37,
    0x40, 0x0, 0x40,

    /* U+1EB8 "Ẹ" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xe0, 0x40, 0x81,
    0x3, 0xf8, 0x0, 0x2, 0x0,

    /* U+1EB9 "ẹ" */
    0x38, 0x8a, 0xf, 0xf8, 0x10, 0x51, 0x9e, 0x0,
    0x0, 0x40,

    /* U+1EBA "Ẻ" */
    0x38, 0x10, 0x47, 0xf8, 0x10, 0x20, 0x40, 0xff,
    0x2, 0x4, 0x8, 0x1f, 0xc0,

    /* U+1EBB "ẻ" */
    0x38, 0x10, 0x40, 0x3, 0x88, 0xa0, 0xff, 0x81,
    0x5, 0x19, 0xe0,

    /* U+1EBC "Ẽ" */
    0x3c, 0x3, 0xfc, 0x8, 0x10, 0x20, 0x7f, 0x81,
    0x2, 0x4, 0xf, 0xe0,

    /* U+1EBD "ẽ" */
    0x74, 0xb8, 0x1, 0xc4, 0x50, 0x7f, 0xc0, 0x82,
    0x8c, 0xf0,

    /* U+1EBE "Ế" */
    0x2, 0x36, 0x28, 0x0, 0xfe, 0x80, 0x80, 0x80,
    0x80, 0xfe, 0x80, 0x80, 0x80, 0x80, 0xfe,

    /* U+1EBF "ế" */
    0x3, 0x3a, 0x6c, 0x0, 0x38, 0x44, 0x82, 0xfe,
    0x80, 0x82, 0x46, 0x3c,

    /* U+1EC0 "Ề" */
    0x40, 0x58, 0x14, 0x0, 0x7f, 0x40, 0x40, 0x40,
    0x40, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x7f,

    /* U+1EC1 "ề" */
    0xc0, 0x5c, 0x36, 0x0, 0x1c, 0x22, 0x41, 0x7f,
    0x40, 0x41, 0x23, 0x1e,

    /* U+1EC2 "Ể" */
    0x7, 0x1, 0x3a, 0x6c, 0xfe, 0x80, 0x80, 0x80,
    0x80, 0xfe, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+1EC3 "ể" */
    0x6, 0x2, 0x3a, 0x6c, 0x0, 0x38, 0x44, 0x82,
    0xfe, 0x80, 0x82, 0x46, 0x3c,

    /* U+1EC4 "Ễ" */
    0x34, 0x4c, 0x0, 0x38, 0x0, 0xfe, 0x80, 0x80,
    0x80, 0x80, 0xfe, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+1EC5 "ễ" */
    0x74, 0xb8, 0x1, 0xc6, 0xc0, 0xe, 0x22, 0x83,
    0xfe, 0x4, 0x14, 0x67, 0x80,

    /* U+1EC6 "Ệ" */
    0x10, 0x51, 0xb7, 0xf8, 0x10, 0x20, 0x40, 0xff,
    0x2, 0x4, 0x8, 0x1f, 0xc0, 0x0, 0x10,

    /* U+1EC7 "ệ" */
    0x30, 0xd0, 0x11, 0xc4, 0x50, 0x7f, 0xc0, 0x82,
    0x8c, 0xf0, 0x0, 0x2, 0x0,

    /* U+1EC8 "Ỉ" */
    0xe5, 0x24, 0x92, 0x49, 0x24, 0x80,

    /* U+1EC9 "ỉ" */
    0xe5, 0x4, 0x92, 0x49, 0x20,

    /* U+1ECA "Ị" */
    0xff, 0xe4,

    /* U+1ECB "ị" */
    0x9f, 0xe4,

    /* U+1ECC "Ọ" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x31, 0x8f, 0x80, 0x0, 0x0, 0x40,

    /* U+1ECD "ọ" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c, 0x0,
    0x0, 0x40,

    /* U+1ECE "Ỏ" */
    0x1c, 0x4, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xf0,

    /* U+1ECF "ỏ" */
    0x38, 0x10, 0x40, 0x3, 0x88, 0xa0, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+1ED0 "Ố" */
    0x1, 0x4, 0x85, 0x0, 0x3, 0xe3, 0x19, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x14, 0x13, 0x18,
    0xf8,

    /* U+1ED1 "ố" */
    0x3, 0x3a, 0x6c, 0x0, 0x38, 0x44, 0x82, 0x82,
    0x82, 0x82, 0x44, 0x38,

    /* U+1ED2 "Ồ" */
    0x40, 0x24, 0x5, 0x0, 0x3, 0xe3, 0x19, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x14, 0x13, 0x18,
    0xf8,

    /* U+1ED3 "ồ" */
    0xc0, 0x5c, 0x36, 0x0, 0x1c, 0x22, 0x41, 0x41,
    0x41, 0x41, 0x22, 0x1c,

    /* U+1ED4 "Ổ" */
    0x3, 0xe, 0x85, 0x0, 0x3, 0xe3, 0x19, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x14, 0x13, 0x18,
    0xf8,

    /* U+1ED5 "ổ" */
    0x6, 0x2, 0x3a, 0x6c, 0x0, 0x38, 0x44, 0x82,
    0x82, 0x82, 0x82, 0x44, 0x38,

    /* U+1ED6 "Ỗ" */
    0x1a, 0x16, 0x0, 0x3, 0x83, 0x61, 0xf1, 0x8c,
    0x82, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xa, 0x9,
    0x8c, 0x7c,

    /* U+1ED7 "ỗ" */
    0x74, 0xb8, 0x1, 0xc6, 0xc0, 0xe, 0x22, 0x83,
    0x6, 0xc, 0x14, 0x47, 0x0,

    /* U+1ED8 "Ộ" */
    0x8, 0xa, 0xd, 0x87, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xf0,
    0x0, 0x0, 0x8, 0x0,

    /* U+1ED9 "ộ" */
    0x30, 0x51, 0x11, 0xc4, 0x50, 0x60, 0xc1, 0x82,
    0x88, 0xe0, 0x0, 0x2, 0x0,

    /* U+1EDA "Ớ" */
    0xc, 0x2, 0x0, 0x4, 0x79, 0x63, 0x50, 0x68,
    0xa, 0x2, 0x80, 0xa0, 0x28, 0x9, 0x4, 0x63,
    0xf, 0x0,

    /* U+1EDB "ớ" */
    0x18, 0x20, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1EDC "Ờ" */
    0x18, 0x2, 0x0, 0x4, 0x79, 0x63, 0x50, 0x68,
    0xa, 0x2, 0x80, 0xa0, 0x28, 0x9, 0x4, 0x63,
    0xf, 0x0,

    /* U+1EDD "ờ" */
    0x30, 0x20, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1EDE "Ở" */
    0x1c, 0x3, 0x0, 0x4, 0x79, 0x63, 0x50, 0x68,
    0xa, 0x2, 0x80, 0xa0, 0x28, 0x9, 0x4, 0x63,
    0xf, 0x0,

    /* U+1EDF "ở" */
    0x38, 0x10, 0x60, 0x13, 0xa8, 0xe0, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+1EE0 "Ỡ" */
    0x1a, 0xb, 0x0, 0x4, 0x79, 0x63, 0x50, 0x68,
    0xa, 0x2, 0x80, 0xa0, 0x28, 0x9, 0x4, 0x63,
    0xf, 0x0,

    /* U+1EE1 "ỡ" */
    0x74, 0xb8, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1EE2 "Ợ" */
    0x1e, 0x58, 0xd4, 0x1e, 0x2, 0x80, 0xa0, 0x28,
    0xa, 0x2, 0x41, 0x18, 0xc3, 0xc0, 0x0, 0x0,
    0x2, 0x0,

    /* U+1EE3 "ợ" */
    0x2, 0x75, 0x1c, 0x18, 0x30, 0x60, 0xa2, 0x38,
    0x0, 0x0, 0x80,

    /* U+1EE4 "Ụ" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x89, 0xe0, 0x0, 0x2, 0x0,

    /* U+1EE5 "ụ" */
    0x8c, 0x63, 0x18, 0xc6, 0x6d, 0x0, 0x8,

    /* U+1EE6 "Ủ" */
    0x38, 0x18, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+1EE7 "ủ" */
    0x70, 0x62, 0x0, 0x86, 0x18, 0x61, 0x86, 0x18,
    0xdd,

    /* U+1EE8 "Ứ" */
    0xc, 0x6, 0x0, 0x6, 0x5, 0x81, 0x60, 0x68,
    0x12, 0x4, 0x81, 0x20, 0x48, 0x12, 0x4, 0x42,
    0xf, 0x0,

    /* U+1EE9 "ứ" */
    0x18, 0x30, 0x1, 0x85, 0x85, 0x86, 0x84, 0x84,
    0x84, 0x8c, 0x74,

    /* U+1EEA "Ừ" */
    0x30, 0x6, 0x0, 0x6, 0x5, 0x81, 0x60, 0x68,
    0x12, 0x4, 0x81, 0x20, 0x48, 0x12, 0x4, 0x42,
    0xf, 0x0,

    /* U+1EEB "ừ" */
    0x60, 0x30, 0x1, 0x85, 0x85, 0x86, 0x84, 0x84,
    0x84, 0x8c, 0x74,

    /* U+1EEC "Ử" */
    0x38, 0x6, 0x0, 0x6, 0x5, 0x81, 0x60, 0x68,
    0x12, 0x4, 0x81, 0x20, 0x48, 0x12, 0x4, 0x42,
    0xf, 0x0,

    /* U+1EED "ử" */
    0x70, 0x18, 0x30, 0x1, 0x85, 0x85, 0x86, 0x84,
    0x84, 0x84, 0x8c, 0x74,

    /* U+1EEE "Ữ" */
    0x32, 0x13, 0x0, 0x6, 0x5, 0x81, 0x60, 0x68,
    0x12, 0x4, 0x81, 0x20, 0x48, 0x12, 0x4, 0x42,
    0xf, 0x0,

    /* U+1EEF "ữ" */
    0x68, 0x98, 0x1, 0x85, 0x85, 0x86, 0x84, 0x84,
    0x84, 0x8c, 0x74,

    /* U+1EF0 "Ự" */
    0x81, 0x60, 0x58, 0x16, 0x6, 0x81, 0x20, 0x48,
    0x12, 0x4, 0x81, 0x10, 0x83, 0xc0, 0x0, 0x0,
    0x4, 0x0,

    /* U+1EF1 "ự" */
    0x1, 0x85, 0x85, 0x86, 0x84, 0x84, 0x84, 0x8c,
    0x74, 0x0, 0x0, 0x20,

    /* U+1EF2 "Ỳ" */
    0x8, 0x4, 0x0, 0x18, 0x36, 0x11, 0x10, 0xd8,
    0x28, 0x1c, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40,

    /* U+1EF3 "ỳ" */
    0x10, 0x20, 0x6, 0x34, 0x48, 0x9b, 0x14, 0x28,
    0x70, 0x40, 0x83, 0xc, 0x0,

    /* U+1EF4 "Ỵ" */
    0xc1, 0xb0, 0x88, 0x86, 0xc1, 0x40, 0xe0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x0, 0x0, 0x0, 0x40,

    /* U+1EF5 "ỵ" */
    0xc6, 0x89, 0x11, 0x22, 0x85, 0x6, 0x8, 0x10,
    0x21, 0x90,

    /* U+1EF6 "Ỷ" */
    0x1c, 0x2, 0x2, 0x18, 0x16, 0x11, 0x18, 0xc8,
    0x28, 0x1c, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40,

    /* U+1EF7 "ỷ" */
    0x38, 0x10, 0x40, 0xc, 0x28, 0x91, 0x32, 0x28,
    0x50, 0x60, 0x81, 0x6, 0x18, 0x0,

    /* U+1EF8 "Ỹ" */
    0x1e, 0x0, 0x30, 0x6c, 0x22, 0x31, 0x90, 0x50,
    0x38, 0x8, 0x4, 0x2, 0x1, 0x0, 0x80,

    /* U+1EF9 "ỹ" */
    0x68, 0xb0, 0x4, 0x2c, 0x49, 0x92, 0x34, 0x28,
    0x60, 0xc0, 0x82, 0xc, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 62, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 80, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 5, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 125, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 199, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 43, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 52, .adv_w = 75, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 58, .adv_w = 75, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 64, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 68, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 75, .adv_w = 62, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 76, .adv_w = 75, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 77, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 62, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 125, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 62, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 62, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 176, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 183, .adv_w = 131, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 187, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 194, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 227, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 227, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 149, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 149, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 137, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 174, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 62, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 174, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 149, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 405, .adv_w = 162, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 211, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 62, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 523, .adv_w = 62, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 62, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 533, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 538, .adv_w = 112, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 539, .adv_w = 75, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 540, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 62, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 593, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 50, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 50, .box_w = 3, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 610, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 50, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 187, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 652, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 661, .adv_w = 75, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 62, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 162, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 716, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 75, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 731, .adv_w = 58, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 733, .adv_w = 75, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 742, .adv_w = 131, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 744, .adv_w = 90, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 746, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 149, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 149, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 149, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 149, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 62, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 62, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 162, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 933, .adv_w = 162, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 162, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1004, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1013, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1023, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1046, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1059, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1079, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1120, .adv_w = 149, .box_w = 10, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1138, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 162, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1160, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 62, .box_w = 5, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1179, .adv_w = 50, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 162, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1200, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1224, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 228, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1249, .adv_w = 175, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1262, .adv_w = 165, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 125, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1285, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1300, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1311, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1317, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1327, .adv_w = 82, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1336, .adv_w = 62, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1343, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1353, .adv_w = 62, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 137, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1372, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1387, .adv_w = 139, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1396, .adv_w = 75, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1397, .adv_w = 75, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1398, .adv_w = 43, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1399, .adv_w = 75, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1400, .adv_w = 75, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 1401, .adv_w = 75, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1402, .adv_w = 43, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1403, .adv_w = 75, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1404, .adv_w = 75, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1405, .adv_w = 75, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1406, .adv_w = 67, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1408, .adv_w = 67, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1409, .adv_w = 50, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1410, .adv_w = 50, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1411, .adv_w = 76, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1412, .adv_w = 76, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1414, .adv_w = 63, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1416, .adv_w = 81, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1417, .adv_w = 75, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1418, .adv_w = 75, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 1419, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1421, .adv_w = 75, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1423, .adv_w = 75, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1425, .adv_w = 75, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1427, .adv_w = 75, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1429, .adv_w = 62, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1432, .adv_w = 34, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1433, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1435, .adv_w = 61, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1437, .adv_w = 73, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1441, .adv_w = 81, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1447, .adv_w = 81, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1453, .adv_w = 81, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 81, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1465, .adv_w = 81, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1471, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -5, .ofs_y = 9},
    {.bitmap_index = 1472, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 9},
    {.bitmap_index = 1473, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1474, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1476, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1477, .adv_w = 0, .box_w = 7, .box_h = 1, .ofs_x = -7, .ofs_y = 9},
    {.bitmap_index = 1478, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1479, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = 9},
    {.bitmap_index = 1480, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1481, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 11},
    {.bitmap_index = 1483, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1485, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1487, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1488, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 9},
    {.bitmap_index = 1489, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 9},
    {.bitmap_index = 1491, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1493, .adv_w = 0, .box_w = 5, .box_h = 3, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1495, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1496, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -5, .ofs_y = 9},
    {.bitmap_index = 1497, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 9},
    {.bitmap_index = 1498, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -5, .ofs_y = 9},
    {.bitmap_index = 1499, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1500, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1501, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1502, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -5, .ofs_y = -4},
    {.bitmap_index = 1503, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -5, .ofs_y = -4},
    {.bitmap_index = 1504, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 1506, .adv_w = 0, .box_w = 2, .box_h = 4, .ofs_x = -1, .ofs_y = 5},
    {.bitmap_index = 1507, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1508, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = -3},
    {.bitmap_index = 1509, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = -4},
    {.bitmap_index = 1511, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = -4},
    {.bitmap_index = 1513, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -6, .ofs_y = -3},
    {.bitmap_index = 1514, .adv_w = 0, .box_w = 4, .box_h = 4, .ofs_x = -6, .ofs_y = -3},
    {.bitmap_index = 1516, .adv_w = 0, .box_w = 4, .box_h = 4, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 1518, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 1519, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1535, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1544, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1560, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1569, .adv_w = 149, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1586, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1597, .adv_w = 149, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1614, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1625, .adv_w = 149, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 125, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1657, .adv_w = 149, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1675, .adv_w = 125, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1685, .adv_w = 149, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1705, .adv_w = 125, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1716, .adv_w = 149, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1736, .adv_w = 125, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1746, .adv_w = 149, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 125, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1776, .adv_w = 149, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1796, .adv_w = 125, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1807, .adv_w = 149, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1827, .adv_w = 125, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1837, .adv_w = 149, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1859, .adv_w = 125, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1870, .adv_w = 149, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1883, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1893, .adv_w = 149, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1906, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1917, .adv_w = 149, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1929, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1939, .adv_w = 149, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1954, .adv_w = 125, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1966, .adv_w = 149, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1981, .adv_w = 125, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1993, .adv_w = 149, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2008, .adv_w = 125, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2021, .adv_w = 149, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2037, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2050, .adv_w = 149, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2065, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2078, .adv_w = 62, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2084, .adv_w = 62, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2089, .adv_w = 62, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2091, .adv_w = 50, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2093, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2109, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2119, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2135, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2146, .adv_w = 174, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2163, .adv_w = 125, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2175, .adv_w = 174, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2192, .adv_w = 125, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2204, .adv_w = 174, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2221, .adv_w = 125, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2234, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2252, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2265, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2285, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2298, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2316, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2326, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2344, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2354, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2372, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2383, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2401, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2411, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2429, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2440, .adv_w = 162, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2453, .adv_w = 125, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2460, .adv_w = 162, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2474, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2483, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2501, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2512, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2530, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2541, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2559, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2571, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2589, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2600, .adv_w = 174, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2618, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2630, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2646, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2659, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2675, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2685, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2701, .adv_w = 112, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2715, .adv_w = 149, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2730, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3}
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
lv_font_t Arial_14 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
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



#endif /*#if ARIAL_14*/

