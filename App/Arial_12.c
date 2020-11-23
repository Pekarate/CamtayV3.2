#include "lvgl.h"

/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ARIAL_12
#define ARIAL_12 1
#endif

#if ARIAL_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xfd,

    /* U+22 "\"" */
    0xb6, 0x80,

    /* U+23 "#" */
    0x24, 0x4b, 0xf9, 0x44, 0x9f, 0xd2, 0x28,

    /* U+24 "$" */
    0x23, 0xea, 0x68, 0x70, 0xb2, 0x69, 0x78, 0x80,

    /* U+25 "%" */
    0x62, 0x4a, 0x25, 0xd, 0x0, 0xb0, 0xa4, 0x52,
    0x46,

    /* U+26 "&" */
    0x30, 0x91, 0x21, 0x8d, 0x51, 0xa3, 0x39,

    /* U+27 "'" */
    0xe0,

    /* U+28 "(" */
    0x4a, 0x49, 0x24, 0x48,

    /* U+29 ")" */
    0x89, 0x12, 0x49, 0x50,

    /* U+2A "*" */
    0x2f, 0x60,

    /* U+2B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+2C "," */
    0xc0,

    /* U+2D "-" */
    0xe0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x24, 0xa4, 0xa4,

    /* U+30 "0" */
    0x7b, 0x38, 0x61, 0x86, 0x1c, 0xde,

    /* U+31 "1" */
    0x2e, 0x92, 0x49,

    /* U+32 "2" */
    0x39, 0x14, 0x41, 0x18, 0xc4, 0x1f,

    /* U+33 "3" */
    0x74, 0x42, 0x60, 0x86, 0x2e,

    /* U+34 "4" */
    0x8, 0x62, 0x8a, 0x4b, 0xf0, 0x82,

    /* U+35 "5" */
    0x7d, 0x7, 0x93, 0x7, 0x14, 0xce,

    /* U+36 "6" */
    0x79, 0x38, 0x2e, 0xc6, 0x1c, 0x5e,

    /* U+37 "7" */
    0xfc, 0x21, 0x8, 0x21, 0x84, 0x10,

    /* U+38 "8" */
    0x72, 0x28, 0x9c, 0xce, 0x18, 0xde,

    /* U+39 "9" */
    0x7b, 0x18, 0x61, 0x7c, 0x18, 0x9e,

    /* U+3A ":" */
    0x84,

    /* U+3B ";" */
    0x86,

    /* U+3C "<" */
    0x4, 0xec, 0x30, 0x38, 0x10,

    /* U+3D "=" */
    0xf8, 0x3e,

    /* U+3E ">" */
    0x81, 0x81, 0x86, 0x62, 0x0,

    /* U+3F "?" */
    0x74, 0x62, 0x33, 0x10, 0x4,

    /* U+40 "@" */
    0x1f, 0x4, 0x19, 0x35, 0xc9, 0x9a, 0x13, 0x44,
    0x68, 0x92, 0xfc, 0x60, 0x63, 0xf0,

    /* U+41 "A" */
    0x18, 0x18, 0x2c, 0x24, 0x64, 0x7e, 0x42, 0x83,

    /* U+42 "B" */
    0xfa, 0x18, 0x7e, 0x86, 0x18, 0x7e,

    /* U+43 "C" */
    0x3c, 0x8e, 0x4, 0x8, 0x10, 0x51, 0x9e,

    /* U+44 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0x61, 0x7c,

    /* U+45 "E" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f,

    /* U+46 "F" */
    0xfe, 0x8, 0x3e, 0x82, 0x8, 0x20,

    /* U+47 "G" */
    0x3c, 0x43, 0x80, 0x80, 0x8f, 0x81, 0x41, 0x3e,

    /* U+48 "H" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,

    /* U+49 "I" */
    0xff,

    /* U+4A "J" */
    0x8, 0x42, 0x10, 0x86, 0x2e,

    /* U+4B "K" */
    0x85, 0x12, 0x47, 0xd, 0x11, 0x23, 0x43,

    /* U+4C "L" */
    0x84, 0x21, 0x8, 0x42, 0x1f,

    /* U+4D "M" */
    0xc3, 0xc3, 0xc3, 0xa5, 0xa5, 0x99, 0x99, 0x99,

    /* U+4E "N" */
    0x83, 0x86, 0x8d, 0x99, 0xb1, 0x61, 0xc1,

    /* U+4F "O" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+50 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20,

    /* U+51 "Q" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x4e, 0x3f,
    0x0,

    /* U+52 "R" */
    0xfc, 0x82, 0x82, 0xfc, 0x88, 0x84, 0x86, 0x82,

    /* U+53 "S" */
    0x3c, 0x8d, 0x1, 0xc0, 0x78, 0x50, 0x9e,

    /* U+54 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+55 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x71, 0xbe,

    /* U+56 "V" */
    0x81, 0x42, 0x42, 0x24, 0x24, 0x24, 0x18, 0x18,

    /* U+57 "W" */
    0x86, 0x28, 0xc5, 0x29, 0x25, 0x24, 0x94, 0x62,
    0x8c, 0x61, 0x84,

    /* U+58 "X" */
    0x42, 0x26, 0x3c, 0x18, 0x18, 0x24, 0x66, 0xc3,

    /* U+59 "Y" */
    0x82, 0x89, 0xb1, 0x41, 0x2, 0x4, 0x8,

    /* U+5A "Z" */
    0xfe, 0x8, 0x20, 0x82, 0xc, 0x30, 0x7f,

    /* U+5B "[" */
    0xea, 0xaa, 0xb0,

    /* U+5C "\\" */
    0x91, 0x24, 0x49,

    /* U+5D "]" */
    0xd5, 0x55, 0x70,

    /* U+5E "^" */
    0x21, 0x94, 0x94, 0x80,

    /* U+5F "_" */
    0xfc,

    /* U+60 "`" */
    0x40,

    /* U+61 "a" */
    0x74, 0x47, 0xd8, 0xfc,

    /* U+62 "b" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e,

    /* U+63 "c" */
    0x76, 0x61, 0x8, 0xb8,

    /* U+64 "d" */
    0x8, 0x5f, 0x18, 0xc6, 0x2f,

    /* U+65 "e" */
    0x7a, 0x1f, 0xe0, 0xcd, 0xe0,

    /* U+66 "f" */
    0x74, 0xe4, 0x44, 0x44,

    /* U+67 "g" */
    0x7c, 0x63, 0x18, 0xbe, 0x2e,

    /* U+68 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x31,

    /* U+69 "i" */
    0xbf,

    /* U+6A "j" */
    0x45, 0x55, 0x70,

    /* U+6B "k" */
    0x84, 0x25, 0x4e, 0x52, 0x53,

    /* U+6C "l" */
    0xff,

    /* U+6D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44,

    /* U+6E "n" */
    0xf4, 0x63, 0x18, 0xc4,

    /* U+6F "o" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+70 "p" */
    0xf6, 0x63, 0x18, 0xfa, 0x10,

    /* U+71 "q" */
    0x7c, 0xe3, 0x18, 0xbc, 0x21,

    /* U+72 "r" */
    0xf2, 0x49, 0x0,

    /* U+73 "s" */
    0x74, 0x70, 0x78, 0xb8,

    /* U+74 "t" */
    0x4b, 0xa4, 0x93,

    /* U+75 "u" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+76 "v" */
    0x85, 0x24, 0x8c, 0x30, 0xc0,

    /* U+77 "w" */
    0x89, 0x2c, 0x95, 0x4a, 0xc5, 0x61, 0x30,

    /* U+78 "x" */
    0x49, 0xe3, 0xc, 0x4b, 0x30,

    /* U+79 "y" */
    0xc5, 0x24, 0x8c, 0x30, 0xc2, 0x18,

    /* U+7A "z" */
    0xfc, 0x21, 0x8, 0x43, 0xf0,

    /* U+7B "{" */
    0x69, 0x28, 0x92, 0x4c,

    /* U+7C "|" */
    0xff, 0xc0,

    /* U+7D "}" */
    0xc9, 0x22, 0x92, 0x58,

    /* U+7E "~" */
    0xe0, 0x70,

    /* U+B0 "°" */
    0xf7, 0x80,

    /* U+C0 "À" */
    0x10, 0x0, 0x18, 0x18, 0x2c, 0x24, 0x64, 0x7e,
    0x42, 0x83,

    /* U+C1 "Á" */
    0x8, 0x0, 0x18, 0x18, 0x2c, 0x24, 0x64, 0x7e,
    0x42, 0x83,

    /* U+C2 "Â" */
    0x18, 0x24, 0x18, 0x18, 0x2c, 0x24, 0x64, 0x7e,
    0x42, 0x83,

    /* U+C3 "Ã" */
    0x3c, 0x0, 0x18, 0x18, 0x2c, 0x24, 0x64, 0x7e,
    0x42, 0x83,

    /* U+C8 "È" */
    0x20, 0xf, 0xe0, 0x83, 0xf8, 0x20, 0x83, 0xf0,

    /* U+C9 "É" */
    0x10, 0xf, 0xe0, 0x83, 0xf8, 0x20, 0x83, 0xf0,

    /* U+CA "Ê" */
    0x31, 0x2f, 0xe0, 0x83, 0xf8, 0x20, 0x83, 0xf0,

    /* U+CC "Ì" */
    0x45, 0x55, 0x50,

    /* U+CD "Í" */
    0x8a, 0xaa, 0xa0,

    /* U+D0 "Ð" */
    0x7c, 0x42, 0x41, 0xf1, 0x41, 0x41, 0x42, 0x7c,

    /* U+D2 "Ò" */
    0x10, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+D3 "Ó" */
    0x8, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+D4 "Ô" */
    0x18, 0x18, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+D5 "Õ" */
    0x3c, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+D9 "Ù" */
    0x10, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0xc6,
    0xf8,

    /* U+DA "Ú" */
    0x10, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0xc6,
    0xf8,

    /* U+DD "Ý" */
    0x10, 0x2, 0xa, 0x26, 0xc5, 0x4, 0x8, 0x10,
    0x20,

    /* U+E0 "à" */
    0x20, 0x1d, 0x11, 0xf6, 0x3f,

    /* U+E1 "á" */
    0x20, 0x1d, 0x11, 0xf6, 0x3f,

    /* U+E2 "â" */
    0x32, 0x1d, 0x11, 0xf6, 0x3f,

    /* U+E3 "ã" */
    0x70, 0x1d, 0x11, 0xf6, 0x3f,

    /* U+E8 "è" */
    0x20, 0x7, 0xa1, 0xfe, 0xc, 0xde,

    /* U+E9 "é" */
    0x10, 0x7, 0xa1, 0xfe, 0xc, 0xde,

    /* U+EA "ê" */
    0x31, 0x27, 0xa1, 0xfe, 0xc, 0xde,

    /* U+EC "ì" */
    0x45, 0x55,

    /* U+ED "í" */
    0x8a, 0xaa,

    /* U+F2 "ò" */
    0x20, 0x7, 0xb3, 0x86, 0x1c, 0xde,

    /* U+F3 "ó" */
    0x10, 0x7, 0xb3, 0x86, 0x1c, 0xde,

    /* U+F4 "ô" */
    0x31, 0x27, 0xb3, 0x86, 0x1c, 0xde,

    /* U+F5 "õ" */
    0x78, 0x7, 0xb3, 0x86, 0x1c, 0xde,

    /* U+F9 "ù" */
    0x20, 0x23, 0x18, 0xc6, 0x2f,

    /* U+FA "ú" */
    0x20, 0x23, 0x18, 0xc6, 0x2f,

    /* U+FD "ý" */
    0x10, 0xc, 0x52, 0x48, 0xc3, 0xc, 0x21, 0x80,

    /* U+102 "Ă" */
    0x28, 0x70, 0x41, 0x42, 0x85, 0x91, 0x3e, 0xc7,
    0x4,

    /* U+103 "ă" */
    0x70, 0x1d, 0x11, 0xf6, 0x3f,

    /* U+110 "Đ" */
    0x7c, 0x42, 0x41, 0xf1, 0x41, 0x41, 0x42, 0x7c,

    /* U+111 "đ" */
    0x8, 0xf7, 0xa2, 0x8a, 0x28, 0x9e,

    /* U+128 "Ĩ" */
    0xe1, 0x24, 0x92, 0x48,

    /* U+129 "ĩ" */
    0xe1, 0x24, 0x92,

    /* U+168 "Ũ" */
    0x3c, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0xc6,
    0xf8,

    /* U+169 "ũ" */
    0x70, 0x23, 0x18, 0xc6, 0x2f,

    /* U+1A0 "Ơ" */
    0x0, 0x9e, 0x50, 0xf0, 0x28, 0x14, 0xa, 0x4,
    0x84, 0x3c, 0x0,

    /* U+1A1 "ơ" */
    0x5, 0xfc, 0xe1, 0x87, 0x37, 0x80,

    /* U+1A2 "Ƣ" */
    0x3d, 0xc8, 0x46, 0x4, 0xc0, 0x98, 0x13, 0x2,
    0x50, 0x89, 0xe1,

    /* U+1A3 "ƣ" */
    0x7f, 0xcd, 0x85, 0x85, 0xcd, 0x79, 0x1, 0x1,

    /* U+1A4 "Ƥ" */
    0xfe, 0xa1, 0x21, 0x21, 0x3e, 0x20, 0x20, 0x20,

    /* U+1A5 "ƥ" */
    0x18, 0xbd, 0x98, 0xc6, 0x3e, 0x84, 0x0,

    /* U+1A6 "Ʀ" */
    0x80, 0xfc, 0x82, 0x82, 0xfc, 0x88, 0x84, 0x86,
    0x2, 0x1,

    /* U+1A7 "Ƨ" */
    0x79, 0x88, 0x10, 0xce, 0x10, 0xe1, 0xbe,

    /* U+1A8 "ƨ" */
    0x74, 0x47, 0xc8, 0xb8,

    /* U+1A9 "Ʃ" */
    0xff, 0x6, 0xc, 0x31, 0x8c, 0x3f,

    /* U+1AA "ƪ" */
    0xca, 0xe2, 0x22, 0x22, 0x23,

    /* U+1AB "ƫ" */
    0x44, 0xe4, 0x44, 0x47, 0x26,

    /* U+1AC "Ƭ" */
    0xfe, 0x41, 0x4, 0x10, 0x41, 0x4,

    /* U+1AD "ƭ" */
    0x6b, 0xa4, 0x93,

    /* U+1AE "Ʈ" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x30,

    /* U+1AF "Ư" */
    0x1, 0x83, 0x83, 0x82, 0x82, 0x82, 0x82, 0xc6,
    0x7c,

    /* U+1B0 "ư" */
    0x3, 0x16, 0x34, 0x48, 0x91, 0x1e, 0x0,

    /* U+2C6 "ˆ" */
    0x66,

    /* U+2C7 "ˇ" */
    0x96,

    /* U+2C8 "ˈ" */
    0xc0,

    /* U+2C9 "ˉ" */
    0xf0,

    /* U+2CA "ˊ" */
    0x40,

    /* U+2CB "ˋ" */
    0x40,

    /* U+2CC "ˌ" */
    0xc0,

    /* U+2CD "ˍ" */
    0xf0,

    /* U+2CE "ˎ" */
    0x40,

    /* U+2CF "ˏ" */
    0x40,

    /* U+2D0 "ː" */
    0x80, 0x20,

    /* U+2D1 "ˑ" */
    0x80,

    /* U+2D2 "˒" */
    0xdc,

    /* U+2D3 "˓" */
    0xec,

    /* U+2D4 "˔" */
    0x5c,

    /* U+2D5 "˕" */
    0xe8,

    /* U+2D6 "˖" */
    0xe0,

    /* U+2D7 "˗" */
    0xe0,

    /* U+2D8 "˘" */
    0xbc,

    /* U+2D9 "˙" */
    0x80,

    /* U+2DA "˚" */
    0xf0,

    /* U+2DB "˛" */
    0x93, 0x80,

    /* U+2DC "˜" */
    0xf0,

    /* U+2DD "˝" */
    0x50,

    /* U+2DE "˞" */
    0xc, 0x20,

    /* U+2E0 "ˠ" */
    0xa9, 0x64,

    /* U+2E1 "ˡ" */
    0xf8,

    /* U+2E2 "ˢ" */
    0xd3, 0x60,

    /* U+2E3 "ˣ" */
    0xa9, 0x50,

    /* U+2E4 "ˤ" */
    0xf2, 0x24, 0x80,

    /* U+2E5 "˥" */
    0xf1, 0x11, 0x11, 0x11, 0x10,

    /* U+2E6 "˦" */
    0x11, 0xf1, 0x11, 0x11,

    /* U+2E7 "˧" */
    0x11, 0x1f, 0x11, 0x11,

    /* U+2E8 "˨" */
    0x11, 0x11, 0x1f, 0x11,

    /* U+2E9 "˩" */
    0x11, 0x11, 0x11, 0x1f,

    /* U+300 "̀" */
    0x80,

    /* U+301 "́" */
    0x80,

    /* U+302 "̂" */
    0x4a,

    /* U+303 "̃" */
    0xe0,

    /* U+304 "̄" */
    0xf0,

    /* U+305 "̅" */
    0xfc,

    /* U+306 "̆" */
    0x9c,

    /* U+307 "̇" */
    0x80,

    /* U+308 "̈" */
    0xa0,

    /* U+309 "̉" */
    0xe8,

    /* U+30A "̊" */
    0xf0,

    /* U+30B "̋" */
    0xa0,

    /* U+30C "̌" */
    0xb6,

    /* U+30D "̍" */
    0xc0,

    /* U+30E "̎" */
    0xb4,

    /* U+30F "̏" */
    0xa0,

    /* U+310 "̐" */
    0x53, 0x80,

    /* U+311 "̑" */
    0xf0,

    /* U+312 "̒" */
    0x60,

    /* U+313 "̓" */
    0xc0,

    /* U+314 "̔" */
    0xc0,

    /* U+315 "̕" */
    0xc0,

    /* U+316 "̖" */
    0x80,

    /* U+317 "̗" */
    0x80,

    /* U+318 "̘" */
    0xc0,

    /* U+319 "̙" */
    0xc0,

    /* U+31A "̚" */
    0xe4, 0x80,

    /* U+31B "̛" */
    0x58,

    /* U+31C "̜" */
    0xc0,

    /* U+31D "̝" */
    0x5c,

    /* U+31E "̞" */
    0xe8,

    /* U+31F "̟" */
    0xe0,

    /* U+320 "̠" */
    0xe0,

    /* U+321 "̡" */
    0x27, 0x0,

    /* U+322 "̢" */
    0x91, 0x80,

    /* U+323 "̣" */
    0x80,

    /* U+1EA0 "Ạ" */
    0x10, 0x28, 0x28, 0x44, 0x7c, 0x44, 0x82, 0x82,
    0x0, 0x10,

    /* U+1EA1 "ạ" */
    0x74, 0x47, 0xd8, 0xfc, 0x4,

    /* U+1EA2 "Ả" */
    0x38, 0x8, 0x10, 0x10, 0x28, 0x28, 0x6c, 0x44,
    0x7e, 0xc2, 0x82,

    /* U+1EA3 "ả" */
    0x30, 0x88, 0xe8, 0x8f, 0xb1, 0xf8,

    /* U+1EA4 "Ấ" */
    0x2, 0x18, 0x0, 0x18, 0x18, 0x2c, 0x24, 0x64,
    0x7e, 0x42, 0x83,

    /* U+1EA5 "ấ" */
    0xd, 0xc0, 0x1c, 0x88, 0x6e, 0xa2, 0xf8,

    /* U+1EA6 "Ầ" */
    0x40, 0x18, 0x0, 0x18, 0x18, 0x2c, 0x24, 0x64,
    0x7e, 0x42, 0x83,

    /* U+1EA7 "ầ" */
    0x40, 0xe0, 0xe, 0x44, 0x37, 0x51, 0x7c,

    /* U+1EA8 "Ẩ" */
    0x7, 0x1a, 0x14, 0x8, 0x14, 0x14, 0x36, 0x22,
    0x7e, 0x43, 0x41,

    /* U+1EA9 "ẩ" */
    0xc, 0x8, 0xe2, 0x87, 0x11, 0x6, 0x74, 0x89,
    0xf0,

    /* U+1EAA "Ẫ" */
    0x3c, 0x0, 0x18, 0x0, 0x18, 0x18, 0x2c, 0x24,
    0x64, 0x7e, 0x42, 0x83,

    /* U+1EAB "ẫ" */
    0x70, 0xc, 0x87, 0x44, 0x7d, 0x8f, 0xc0,

    /* U+1EAC "Ậ" */
    0x10, 0x28, 0x0, 0x10, 0x28, 0x28, 0x44, 0x7c,
    0x44, 0x82, 0x82, 0x0, 0x10,

    /* U+1EAD "ậ" */
    0x32, 0x1d, 0x11, 0xf6, 0x3f, 0x1, 0x0,

    /* U+1EAE "Ắ" */
    0x18, 0x70, 0x0, 0x82, 0x85, 0xa, 0x22, 0x7d,
    0x8e, 0x8,

    /* U+1EAF "ắ" */
    0x13, 0x80, 0xe8, 0x8f, 0xb1, 0xf8,

    /* U+1EB0 "Ằ" */
    0x10, 0x70, 0x0, 0x82, 0x85, 0xa, 0x22, 0x7d,
    0x8e, 0x8,

    /* U+1EB1 "ằ" */
    0x23, 0x80, 0xe8, 0x8f, 0xb1, 0xf8,

    /* U+1EB2 "Ẳ" */
    0x18, 0x10, 0x38, 0x0, 0x10, 0x28, 0x28, 0x24,
    0x44, 0x7e, 0xc2, 0x83,

    /* U+1EB3 "ẳ" */
    0x31, 0x1c, 0x7, 0x44, 0x7d, 0x8f, 0xc0,

    /* U+1EB4 "Ẵ" */
    0x38, 0x50, 0xe0, 0x1, 0x5, 0xa, 0x14, 0x44,
    0xfb, 0x1c, 0x10,

    /* U+1EB5 "ẵ" */
    0x78, 0xe, 0x7, 0x64, 0x7d, 0x8f, 0xc0,

    /* U+1EB6 "Ặ" */
    0x28, 0x70, 0x0, 0x82, 0x85, 0x12, 0x3e, 0x45,
    0x6, 0x8, 0x1, 0x0,

    /* U+1EB7 "ặ" */
    0x38, 0x1d, 0x91, 0xf6, 0x3f, 0x1, 0x0,

    /* U+1EB8 "Ẹ" */
    0xff, 0x2, 0x7, 0xe8, 0x10, 0x20, 0x7f, 0x0,
    0x20,

    /* U+1EB9 "ẹ" */
    0x7a, 0x1f, 0xe0, 0xcd, 0xe0, 0x8,

    /* U+1EBA "Ẻ" */
    0x30, 0x41, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+1EBB "ẻ" */
    0x30, 0x40, 0x1e, 0x87, 0xf8, 0x33, 0x78,

    /* U+1EBC "Ẽ" */
    0x78, 0xf, 0xe0, 0x83, 0xf8, 0x20, 0x83, 0xf0,

    /* U+1EBD "ẽ" */
    0x78, 0x7, 0xa1, 0xfe, 0xc, 0xde,

    /* U+1EBE "Ế" */
    0x4, 0x60, 0x7, 0xe8, 0x10, 0x3f, 0x40, 0x81,
    0x3, 0xf0,

    /* U+1EBF "ế" */
    0x4, 0x60, 0x3, 0xc8, 0x5f, 0xa0, 0x66, 0x78,

    /* U+1EC0 "Ề" */
    0x40, 0x30, 0x3, 0xf4, 0x8, 0x1f, 0xa0, 0x40,
    0x81, 0xf8,

    /* U+1EC1 "ề" */
    0x40, 0x30, 0x1, 0xe4, 0x2f, 0xd0, 0x33, 0x3c,

    /* U+1EC2 "Ể" */
    0xc, 0x69, 0x27, 0xe8, 0x10, 0x3f, 0x40, 0x81,
    0x3, 0xf0,

    /* U+1EC3 "ể" */
    0xc, 0x8, 0xd2, 0x47, 0x90, 0xbf, 0x40, 0xcc,
    0xf0,

    /* U+1EC4 "Ễ" */
    0x78, 0x3, 0x0, 0xfe, 0x8, 0x3f, 0x82, 0x8,
    0x3f,

    /* U+1EC5 "ễ" */
    0x78, 0x3, 0x12, 0x7a, 0x1f, 0xe0, 0xcd, 0xe0,

    /* U+1EC6 "Ệ" */
    0x10, 0x50, 0x7, 0xf8, 0x10, 0x3f, 0x40, 0x81,
    0x3, 0xf8, 0x1, 0x0,

    /* U+1EC7 "ệ" */
    0x31, 0x7, 0xa1, 0xfe, 0xc, 0xde, 0x0, 0x80,

    /* U+1EC8 "Ỉ" */
    0xe5, 0x24, 0x92, 0x49, 0x0,

    /* U+1EC9 "ỉ" */
    0xe5, 0x24, 0x92, 0x40,

    /* U+1ECA "Ị" */
    0xff, 0x40,

    /* U+1ECB "ị" */
    0xbf, 0x40,

    /* U+1ECC "Ọ" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,
    0x0, 0x8,

    /* U+1ECD "ọ" */
    0x74, 0x63, 0x18, 0xb8, 0x4,

    /* U+1ECE "Ỏ" */
    0x18, 0x8, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1ECF "ỏ" */
    0x30, 0x40, 0x1e, 0xce, 0x18, 0x73, 0x78,

    /* U+1ED0 "Ố" */
    0x2, 0x18, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1ED1 "ố" */
    0x4, 0x60, 0x3, 0xcc, 0xd0, 0xa1, 0x66, 0x78,

    /* U+1ED2 "Ồ" */
    0x40, 0x18, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1ED3 "ồ" */
    0x40, 0x30, 0x1, 0xe6, 0x68, 0x50, 0xb3, 0x3c,

    /* U+1ED4 "Ổ" */
    0x6, 0x2, 0x1a, 0x24, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+1ED5 "ổ" */
    0xc, 0x8, 0xd2, 0x47, 0x99, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1ED6 "Ỗ" */
    0x3c, 0x0, 0x18, 0x24, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+1ED7 "ỗ" */
    0x78, 0x3, 0x12, 0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+1ED8 "Ộ" */
    0x8, 0x14, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c, 0x0, 0x8,

    /* U+1ED9 "ộ" */
    0x22, 0x9d, 0x18, 0xc6, 0x2e, 0x1, 0x0,

    /* U+1EDA "Ớ" */
    0x8, 0x0, 0x4f, 0x28, 0x78, 0x14, 0xa, 0x5,
    0x2, 0x42, 0x1e, 0x0,

    /* U+1EDB "ớ" */
    0x10, 0x17, 0xf3, 0x86, 0x1c, 0xde,

    /* U+1EDC "Ờ" */
    0x10, 0x0, 0x4f, 0x28, 0x78, 0x14, 0xa, 0x5,
    0x2, 0x42, 0x1e, 0x0,

    /* U+1EDD "ờ" */
    0x20, 0x17, 0xf3, 0x86, 0x1c, 0xde,

    /* U+1EDE "Ở" */
    0x18, 0x4, 0x0, 0x27, 0x94, 0x3c, 0xa, 0x5,
    0x2, 0x81, 0x21, 0xf, 0x0,

    /* U+1EDF "ở" */
    0x30, 0x40, 0x5f, 0xce, 0x18, 0x73, 0x78,

    /* U+1EE0 "Ỡ" */
    0x3c, 0x0, 0x4f, 0x28, 0x78, 0x14, 0xa, 0x5,
    0x2, 0x42, 0x1e, 0x0,

    /* U+1EE1 "ỡ" */
    0x78, 0x17, 0xf3, 0x86, 0x1c, 0xde,

    /* U+1EE2 "Ợ" */
    0x0, 0x9e, 0x50, 0xf0, 0x28, 0x14, 0xa, 0x4,
    0x84, 0x3c, 0x0, 0x2, 0x0,

    /* U+1EE3 "ợ" */
    0x5, 0xfc, 0xe1, 0x87, 0x37, 0x80, 0x20,

    /* U+1EE4 "Ụ" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x71, 0xbe, 0x0,
    0x20,

    /* U+1EE5 "ụ" */
    0x8c, 0x63, 0x18, 0xbc, 0x4,

    /* U+1EE6 "Ủ" */
    0x38, 0x20, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x8d, 0xf0,

    /* U+1EE7 "ủ" */
    0x60, 0x89, 0x18, 0xc6, 0x31, 0x78,

    /* U+1EE8 "Ứ" */
    0x10, 0x1, 0x83, 0x83, 0x82, 0x82, 0x82, 0x82,
    0xc6, 0x7c,

    /* U+1EE9 "ứ" */
    0x20, 0x6, 0x2c, 0x68, 0x91, 0x22, 0x3c,

    /* U+1EEA "Ừ" */
    0x10, 0x1, 0x83, 0x83, 0x82, 0x82, 0x82, 0x82,
    0xc6, 0x7c,

    /* U+1EEB "ừ" */
    0x20, 0x6, 0x2c, 0x68, 0x91, 0x22, 0x3c,

    /* U+1EEC "Ử" */
    0x38, 0x10, 0x1, 0x83, 0x83, 0x82, 0x82, 0x82,
    0x82, 0xc6, 0x7c,

    /* U+1EED "ử" */
    0x60, 0x20, 0x8c, 0x58, 0xd1, 0x22, 0x44, 0x78,

    /* U+1EEE "Ữ" */
    0x3c, 0x1, 0x83, 0x83, 0x82, 0x82, 0x82, 0x82,
    0xc6, 0x7c,

    /* U+1EEF "ữ" */
    0x70, 0x6, 0x2c, 0x68, 0x91, 0x22, 0x3c,

    /* U+1EF0 "Ự" */
    0x1, 0x83, 0x83, 0x82, 0x82, 0x82, 0x82, 0xc6,
    0x7c, 0x0, 0x10,

    /* U+1EF1 "ự" */
    0x3, 0x16, 0x34, 0x48, 0x91, 0x1e, 0x0, 0x20,

    /* U+1EF2 "Ỳ" */
    0x10, 0x2, 0xa, 0x26, 0xc5, 0x4, 0x8, 0x10,
    0x20,

    /* U+1EF3 "ỳ" */
    0x30, 0xc, 0x52, 0x48, 0xc3, 0xc, 0x21, 0x80,

    /* U+1EF4 "Ỵ" */
    0x82, 0x89, 0xb1, 0x41, 0x2, 0x4, 0x8, 0x0,
    0x20,

    /* U+1EF5 "ỵ" */
    0x89, 0x24, 0x94, 0x30, 0x82, 0x32,

    /* U+1EF6 "Ỷ" */
    0x38, 0x8, 0x10, 0x82, 0x44, 0x6c, 0x28, 0x10,
    0x10, 0x10, 0x10,

    /* U+1EF7 "ỷ" */
    0x70, 0x80, 0x22, 0x49, 0x25, 0xc, 0x20, 0x8c,
    0x0,

    /* U+1EF8 "Ỹ" */
    0x38, 0x2, 0xa, 0x26, 0xc5, 0x4, 0x8, 0x10,
    0x20,

    /* U+1EF9 "ỹ" */
    0x78, 0xc, 0x52, 0x48, 0xc3, 0xc, 0x21, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 53, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 68, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 19, .adv_w = 171, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 37, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 36, .adv_w = 64, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 40, .adv_w = 64, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 44, .adv_w = 75, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 46, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 50, .adv_w = 53, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 51, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 52, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 53, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 107, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 53, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 53, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 114, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 119, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 121, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 126, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 195, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 145, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 53, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 256, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 181, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 329, .adv_w = 53, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 335, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 339, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 340, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 341, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 53, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 373, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 43, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 43, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 382, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 43, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 160, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 409, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 414, .adv_w = 64, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 53, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 139, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 451, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 64, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 460, .adv_w = 50, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 462, .adv_w = 64, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 466, .adv_w = 112, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 468, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 470, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 53, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 53, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 700, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 53, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 43, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 149, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 196, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 150, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 785, .adv_w = 141, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 800, .adv_w = 139, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 810, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 70, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 832, .adv_w = 53, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 837, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 53, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 117, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 855, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 119, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 871, .adv_w = 64, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 872, .adv_w = 64, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 873, .adv_w = 37, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 874, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 875, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 876, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 877, .adv_w = 37, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 878, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 879, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 880, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 881, .adv_w = 58, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 884, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 885, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 886, .adv_w = 65, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 887, .adv_w = 65, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 888, .adv_w = 54, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 889, .adv_w = 69, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 890, .adv_w = 64, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 891, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 892, .adv_w = 64, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 893, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 895, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 896, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 897, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 899, .adv_w = 53, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 901, .adv_w = 29, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 902, .adv_w = 52, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 904, .adv_w = 53, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 906, .adv_w = 62, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 909, .adv_w = 69, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 914, .adv_w = 69, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 69, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 69, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 69, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 931, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 932, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 933, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 934, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 935, .adv_w = 0, .box_w = 6, .box_h = 1, .ofs_x = -6, .ofs_y = 7},
    {.bitmap_index = 936, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 937, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 938, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 939, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 940, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 941, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 942, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 943, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 944, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 945, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 946, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 948, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -5, .ofs_y = 6},
    {.bitmap_index = 949, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 950, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 951, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 952, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 953, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 954, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 955, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 956, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 957, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 959, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 960, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 961, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 962, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 963, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 964, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -5, .ofs_y = -2},
    {.bitmap_index = 965, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = -2},
    {.bitmap_index = 967, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 969, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 970, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 980, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 985, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1013, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1077, .adv_w = 128, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1090, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1097, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1129, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1141, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1148, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1159, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1166, .adv_w = 128, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1178, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1185, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1194, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1200, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1216, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1224, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1248, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1266, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1276, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1285, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1294, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1302, .adv_w = 128, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1314, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1322, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1327, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1331, .adv_w = 53, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1333, .adv_w = 43, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1335, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1345, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1350, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1361, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1368, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1379, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1387, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1398, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1406, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1418, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1427, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1447, .adv_w = 149, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1460, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1467, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1479, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1503, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1516, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1523, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1535, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1541, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1554, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1561, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1570, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1575, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1585, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1591, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1601, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1608, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1618, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1625, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1636, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1654, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1661, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1672, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1680, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1689, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1697, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1706, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1712, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1723, .adv_w = 96, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1732, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1741, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2}
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
lv_font_t Arial_12 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ARIAL_12*/

