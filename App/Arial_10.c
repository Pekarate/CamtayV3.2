#include "lvgl.h"

/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ARIAL_10
#define ARIAL_10 1
#endif

#if ARIAL_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xfa,

    /* U+22 "\"" */
    0xb4,

    /* U+23 "#" */
    0x2a, 0x7e, 0xaf, 0xaa, 0x40,

    /* U+24 "$" */
    0x27, 0xab, 0x47, 0x16, 0xae, 0x20,

    /* U+25 "%" */
    0xe4, 0xa8, 0xa8, 0xf6, 0x29, 0x29, 0x46,

    /* U+26 "&" */
    0x33, 0x45, 0x18, 0x9b, 0x66, 0xc0,

    /* U+27 "'" */
    0xc0,

    /* U+28 "(" */
    0x5a, 0xa9, 0x40,

    /* U+29 ")" */
    0xa5, 0x56, 0x80,

    /* U+2A "*" */
    0x46, 0x60,

    /* U+2B "+" */
    0x27, 0xc8, 0x40,

    /* U+2C "," */
    0xc0,

    /* U+2D "-" */
    0xe0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x29, 0x29, 0x20,

    /* U+30 "0" */
    0x74, 0x63, 0x18, 0xc5, 0xc0,

    /* U+31 "1" */
    0x2c, 0x92, 0x48,

    /* U+32 "2" */
    0x74, 0x42, 0x22, 0x23, 0xe0,

    /* U+33 "3" */
    0xe9, 0x17, 0x19, 0xe0,

    /* U+34 "4" */
    0x11, 0x94, 0xa9, 0x7c, 0x40,

    /* U+35 "5" */
    0x7a, 0x1d, 0x10, 0xc5, 0xc0,

    /* U+36 "6" */
    0x76, 0x6d, 0x98, 0xc5, 0xc0,

    /* U+37 "7" */
    0xf8, 0x88, 0x44, 0x21, 0x0,

    /* U+38 "8" */
    0x64, 0xa4, 0xe8, 0xc5, 0xc0,

    /* U+39 "9" */
    0x74, 0x63, 0x17, 0xcd, 0xc0,

    /* U+3A ":" */
    0x88,

    /* U+3B ";" */
    0x8c,

    /* U+3C "<" */
    0x9, 0xb0, 0xc1, 0x80,

    /* U+3D "=" */
    0xf0, 0xf0,

    /* U+3E ">" */
    0x7, 0x6, 0x4c, 0x0,

    /* U+3F "?" */
    0x76, 0x42, 0x22, 0x0, 0x80,

    /* U+40 "@" */
    0x1e, 0x30, 0x96, 0xb6, 0x9a, 0x4d, 0x2a, 0x78,
    0xc3, 0x3e, 0x0,

    /* U+41 "A" */
    0x10, 0x60, 0xa2, 0x47, 0xc8, 0xa1, 0x0,

    /* U+42 "B" */
    0xf4, 0x63, 0xe8, 0xc7, 0xc0,

    /* U+43 "C" */
    0x7b, 0x18, 0x20, 0x87, 0x17, 0x80,

    /* U+44 "D" */
    0xfa, 0x38, 0x61, 0x86, 0x3f, 0x80,

    /* U+45 "E" */
    0xfc, 0x21, 0xf8, 0x43, 0xe0,

    /* U+46 "F" */
    0xfc, 0x21, 0xe8, 0x42, 0x0,

    /* U+47 "G" */
    0x3c, 0x8e, 0x4, 0x78, 0x28, 0x4f, 0x0,

    /* U+48 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x40,

    /* U+49 "I" */
    0xfe,

    /* U+4A "J" */
    0x11, 0x11, 0x19, 0x60,

    /* U+4B "K" */
    0x8a, 0x4a, 0x38, 0x92, 0x28, 0xc0,

    /* U+4C "L" */
    0x84, 0x21, 0x8, 0x43, 0xe0,

    /* U+4D "M" */
    0xc7, 0x8f, 0x1d, 0x5a, 0xb6, 0x64, 0x80,

    /* U+4E "N" */
    0x87, 0x1a, 0x6d, 0x96, 0x38, 0x40,

    /* U+4F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+50 "P" */
    0xf4, 0x63, 0xe8, 0x42, 0x0,

    /* U+51 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x29, 0x8f, 0x80,

    /* U+52 "R" */
    0xf9, 0xa, 0x17, 0xc8, 0x91, 0xa1, 0x0,

    /* U+53 "S" */
    0x39, 0x14, 0xe, 0x5, 0x17, 0x80,

    /* U+54 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x80,

    /* U+55 "U" */
    0x86, 0x18, 0x61, 0x86, 0x17, 0x80,

    /* U+56 "V" */
    0x84, 0x89, 0x12, 0x42, 0x86, 0x4, 0x0,

    /* U+57 "W" */
    0x88, 0xc6, 0x55, 0x2a, 0xa5, 0x33, 0x18, 0x8c,

    /* U+58 "X" */
    0x44, 0xd0, 0xe0, 0x82, 0x89, 0xb1, 0x0,

    /* U+59 "Y" */
    0x44, 0x88, 0xa0, 0x81, 0x2, 0x4, 0x0,

    /* U+5A "Z" */
    0xfc, 0x21, 0x8, 0x43, 0xf, 0xc0,

    /* U+5B "[" */
    0xea, 0xaa, 0xc0,

    /* U+5C "\\" */
    0x92, 0x24, 0x88,

    /* U+5D "]" */
    0xd5, 0x55, 0xc0,

    /* U+5E "^" */
    0x26, 0x59,

    /* U+5F "_" */
    0xf8,

    /* U+60 "`" */
    0x40,

    /* U+61 "a" */
    0x7c, 0x5f, 0x1f, 0x80,

    /* U+62 "b" */
    0x84, 0x3d, 0x18, 0xc7, 0xc0,

    /* U+63 "c" */
    0x74, 0x21, 0x17, 0x0,

    /* U+64 "d" */
    0x8, 0x5f, 0x18, 0xc5, 0xe0,

    /* U+65 "e" */
    0x74, 0x7f, 0x17, 0x0,

    /* U+66 "f" */
    0x6b, 0xa4, 0x90,

    /* U+67 "g" */
    0x7c, 0x63, 0x17, 0xc5, 0xc0,

    /* U+68 "h" */
    0x88, 0xf9, 0x99, 0x90,

    /* U+69 "i" */
    0xbe,

    /* U+6A "j" */
    0x45, 0x55, 0xc0,

    /* U+6B "k" */
    0x88, 0x9a, 0xea, 0x90,

    /* U+6C "l" */
    0xfe,

    /* U+6D "m" */
    0xff, 0x26, 0x4c, 0x99, 0x20,

    /* U+6E "n" */
    0xf9, 0x99, 0x90,

    /* U+6F "o" */
    0x74, 0x63, 0x17, 0x0,

    /* U+70 "p" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+71 "q" */
    0x7c, 0x63, 0x17, 0x84, 0x20,

    /* U+72 "r" */
    0xf2, 0x48,

    /* U+73 "s" */
    0xe9, 0x69, 0xf0,

    /* U+74 "t" */
    0xb, 0xa4, 0x98,

    /* U+75 "u" */
    0x99, 0x99, 0xf0,

    /* U+76 "v" */
    0x8a, 0x94, 0xa2, 0x0,

    /* U+77 "w" */
    0x93, 0x35, 0xb3, 0x66, 0xc0,

    /* U+78 "x" */
    0x52, 0x88, 0xad, 0x80,

    /* U+79 "y" */
    0x8a, 0x94, 0xa2, 0x11, 0x0,

    /* U+7A "z" */
    0xf8, 0x88, 0x8f, 0x80,

    /* U+7B "{" */
    0x69, 0x28, 0x92, 0x60,

    /* U+7C "|" */
    0xff, 0x80,

    /* U+7D "}" */
    0xc9, 0x22, 0x92, 0xc0,

    /* U+7E "~" */
    0xe1, 0xc0,

    /* U+B0 "°" */
    0xf7, 0x80,

    /* U+C0 "À" */
    0x10, 0x20, 0xc1, 0x44, 0x8f, 0x91, 0x42,

    /* U+C1 "Á" */
    0x10, 0x20, 0xc1, 0x44, 0x8f, 0x91, 0x42,

    /* U+C2 "Â" */
    0x10, 0x50, 0x41, 0x82, 0x89, 0x1f, 0x22, 0x84,

    /* U+C3 "Ã" */
    0x28, 0xb0, 0x41, 0x82, 0x89, 0x1f, 0x22, 0x84,

    /* U+C8 "È" */
    0x27, 0xe1, 0xf, 0xc2, 0x1f,

    /* U+C9 "É" */
    0x27, 0xe1, 0xf, 0xc2, 0x1f,

    /* U+CA "Ê" */
    0x22, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+CC "Ì" */
    0x55, 0x55,

    /* U+CD "Í" */
    0xaa, 0xaa,

    /* U+D0 "Ð" */
    0x7c, 0x8d, 0xf, 0x94, 0x28, 0xdf, 0x0,

    /* U+D2 "Ò" */
    0x10, 0x71, 0x14, 0x18, 0x30, 0x51, 0x1c,

    /* U+D3 "Ó" */
    0x10, 0x71, 0x14, 0x18, 0x30, 0x51, 0x1c,

    /* U+D4 "Ô" */
    0x10, 0x50, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+D5 "Õ" */
    0x38, 0xb0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+D9 "Ù" */
    0x22, 0x18, 0x61, 0x86, 0x18, 0x5e,

    /* U+DA "Ú" */
    0x12, 0x18, 0x61, 0x86, 0x18, 0x5e,

    /* U+DD "Ý" */
    0x10, 0x89, 0x11, 0x41, 0x2, 0x4, 0x8,

    /* U+E0 "à" */
    0x20, 0x1f, 0x17, 0xc7, 0xe0,

    /* U+E1 "á" */
    0x20, 0x1f, 0x17, 0xc7, 0xe0,

    /* U+E2 "â" */
    0x32, 0x1f, 0x17, 0xc7, 0xe0,

    /* U+E3 "ã" */
    0x70, 0x1f, 0x17, 0xc7, 0xe0,

    /* U+E8 "è" */
    0x20, 0x1d, 0x1f, 0xc5, 0xc0,

    /* U+E9 "é" */
    0x20, 0x1d, 0x1f, 0xc5, 0xc0,

    /* U+EA "ê" */
    0x22, 0x9d, 0x1f, 0xc5, 0xc0,

    /* U+EC "ì" */
    0x45, 0x54,

    /* U+ED "í" */
    0x8a, 0xa8,

    /* U+F2 "ò" */
    0x20, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+F3 "ó" */
    0x20, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+F4 "ô" */
    0x22, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+F5 "õ" */
    0x70, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+F9 "ù" */
    0x40, 0x99, 0x99, 0xf0,

    /* U+FA "ú" */
    0x20, 0x99, 0x99, 0xf0,

    /* U+FD "ý" */
    0x20, 0x22, 0xa5, 0x28, 0x84, 0x40,

    /* U+102 "Ă" */
    0x8, 0x60, 0x41, 0x82, 0x89, 0x1f, 0x22, 0x84,

    /* U+103 "ă" */
    0x51, 0x9f, 0x17, 0xc7, 0xe0,

    /* U+110 "Đ" */
    0x7c, 0x8d, 0xf, 0x94, 0x28, 0xdf, 0x0,

    /* U+111 "đ" */
    0x8, 0xf7, 0xa2, 0x8a, 0x27, 0x80,

    /* U+128 "Ĩ" */
    0xfd, 0x24, 0x92, 0x40,

    /* U+129 "ĩ" */
    0xe1, 0x24, 0x90,

    /* U+168 "Ũ" */
    0x29, 0x68, 0x61, 0x86, 0x18, 0x61, 0x78,

    /* U+169 "ũ" */
    0x60, 0x99, 0x99, 0xf0,

    /* U+1A0 "Ơ" */
    0x3b, 0x46, 0x82, 0x82, 0x82, 0x44, 0x38,

    /* U+1A1 "ơ" */
    0xb, 0xe3, 0x18, 0xb8,

    /* U+1A2 "Ƣ" */
    0x3b, 0x22, 0x60, 0xb0, 0x58, 0x2a, 0x24, 0xe2,

    /* U+1A3 "ƣ" */
    0x7f, 0x16, 0x2c, 0x57, 0x20, 0x40, 0x80,

    /* U+1A4 "Ƥ" */
    0x7d, 0x44, 0x89, 0xe2, 0x4, 0x8, 0x0,

    /* U+1A5 "ƥ" */
    0x1f, 0xa3, 0x18, 0xfa, 0x10,

    /* U+1A6 "Ʀ" */
    0x81, 0xf2, 0x14, 0x2f, 0x91, 0x23, 0x2,

    /* U+1A7 "Ƨ" */
    0x72, 0x20, 0x9c, 0x82, 0x27, 0x0,

    /* U+1A8 "ƨ" */
    0x79, 0x69, 0xf0,

    /* U+1A9 "Ʃ" */
    0xfe, 0x18, 0x44, 0x63, 0xe0,

    /* U+1AA "ƪ" */
    0xea, 0xe2, 0x22, 0x22, 0x30,

    /* U+1AB "ƫ" */
    0xb, 0xa4, 0x99, 0x60,

    /* U+1AC "Ƭ" */
    0x7e, 0x41, 0x4, 0x10, 0x41, 0x0,

    /* U+1AD "ƭ" */
    0x6b, 0xa4, 0x98,

    /* U+1AE "Ʈ" */
    0xf9, 0x8, 0x42, 0x10, 0x84, 0x30,

    /* U+1AF "Ư" */
    0x87, 0xe, 0x14, 0x28, 0x50, 0x9e, 0x0,

    /* U+1B0 "ư" */
    0xe, 0x69, 0x24, 0x93, 0xc0,

    /* U+2C6 "ˆ" */
    0x54,

    /* U+2C7 "ˇ" */
    0xac,

    /* U+2C8 "ˈ" */
    0xc0,

    /* U+2C9 "ˉ" */
    0xe0,

    /* U+2CA "ˊ" */
    0x80,

    /* U+2CB "ˋ" */
    0x40,

    /* U+2CC "ˌ" */
    0xc0,

    /* U+2CD "ˍ" */
    0xe0,

    /* U+2CE "ˎ" */
    0x40,

    /* U+2CF "ˏ" */
    0x80,

    /* U+2D0 "ː" */
    0x88,

    /* U+2D1 "ˑ" */
    0x80,

    /* U+2D2 "˒" */
    0xc0,

    /* U+2D3 "˓" */
    0xc0,

    /* U+2D4 "˔" */
    0x5c,

    /* U+2D5 "˕" */
    0xe8,

    /* U+2D6 "˖" */
    0x70,

    /* U+2D7 "˗" */
    0xc0,

    /* U+2D8 "˘" */
    0xe0,

    /* U+2D9 "˙" */
    0x80,

    /* U+2DA "˚" */
    0xf0,

    /* U+2DB "˛" */
    0x9c,

    /* U+2DC "˜" */
    0xe0,

    /* U+2DD "˝" */
    0x60,

    /* U+2DE "˞" */
    0xc4,

    /* U+2E0 "ˠ" */
    0xc9, 0x20,

    /* U+2E1 "ˡ" */
    0xf0,

    /* U+2E2 "ˢ" */
    0xfc,

    /* U+2E3 "ˣ" */
    0xcb, 0x0,

    /* U+2E4 "ˤ" */
    0xf1, 0x24,

    /* U+2E5 "˥" */
    0xe4, 0x92, 0x49,

    /* U+2E6 "˦" */
    0x27, 0x92, 0x48,

    /* U+2E7 "˧" */
    0x24, 0xf2, 0x48,

    /* U+2E8 "˨" */
    0x24, 0x93, 0xc8,

    /* U+2E9 "˩" */
    0x24, 0x92, 0x78,

    /* U+300 "̀" */
    0x40,

    /* U+301 "́" */
    0x80,

    /* U+302 "̂" */
    0x58,

    /* U+303 "̃" */
    0xe0,

    /* U+304 "̄" */
    0xe0,

    /* U+305 "̅" */
    0xf8,

    /* U+306 "̆" */
    0xc0,

    /* U+307 "̇" */
    0x80,

    /* U+308 "̈" */
    0xa0,

    /* U+309 "̉" */
    0xe0,

    /* U+30A "̊" */
    0xf0,

    /* U+30B "̋" */
    0xa0,

    /* U+30C "̌" */
    0xb8,

    /* U+30D "̍" */
    0xc0,

    /* U+30E "̎" */
    0xf0,

    /* U+30F "̏" */
    0x50,

    /* U+310 "̐" */
    0x58,

    /* U+311 "̑" */
    0xc4,

    /* U+312 "̒" */
    0xc0,

    /* U+313 "̓" */
    0xc0,

    /* U+314 "̔" */
    0xc0,

    /* U+315 "̕" */
    0xc0,

    /* U+316 "̖" */
    0x40,

    /* U+317 "̗" */
    0x80,

    /* U+318 "̘" */
    0x40,

    /* U+319 "̙" */
    0x40,

    /* U+31A "̚" */
    0xe4,

    /* U+31B "̛" */
    0x58,

    /* U+31C "̜" */
    0xc0,

    /* U+31D "̝" */
    0x30,

    /* U+31E "̞" */
    0xc0,

    /* U+31F "̟" */
    0x30,

    /* U+320 "̠" */
    0xc0,

    /* U+321 "̡" */
    0x3c,

    /* U+322 "̢" */
    0x9c,

    /* U+323 "̣" */
    0x80,

    /* U+1EA0 "Ạ" */
    0x10, 0x60, 0xa2, 0x47, 0xc8, 0xa1, 0x0, 0x10,

    /* U+1EA1 "ạ" */
    0x7c, 0x5f, 0x1f, 0x80, 0x80,

    /* U+1EA2 "Ả" */
    0x18, 0x20, 0x40, 0xc2, 0x84, 0x9f, 0x23, 0x42,

    /* U+1EA3 "ả" */
    0x31, 0x1f, 0x17, 0xc7, 0xe0,

    /* U+1EA4 "Ấ" */
    0x4, 0x70, 0x41, 0x82, 0x89, 0x1f, 0x22, 0x84,

    /* U+1EA5 "ấ" */
    0x39, 0x47, 0xa2, 0x7a, 0x2f, 0x80,

    /* U+1EA6 "Ầ" */
    0x40, 0x70, 0x41, 0x82, 0x89, 0x1f, 0x22, 0x84,

    /* U+1EA7 "ầ" */
    0x58, 0xa3, 0xd1, 0x3d, 0x17, 0xc0,

    /* U+1EA8 "Ẩ" */
    0xc, 0xe2, 0x8c, 0x31, 0x24, 0x9e, 0x86, 0x10,

    /* U+1EA9 "ẩ" */
    0x8, 0xe5, 0x1e, 0x89, 0xe8, 0xbe,

    /* U+1EAA "Ẫ" */
    0x38, 0x20, 0xa0, 0x83, 0x5, 0x12, 0x3e, 0x45,
    0x8,

    /* U+1EAB "ẫ" */
    0x72, 0x8c, 0x87, 0xc5, 0xf1, 0xf8,

    /* U+1EAC "Ậ" */
    0x10, 0x50, 0x41, 0x82, 0x89, 0x1f, 0x22, 0x84,
    0x0, 0x40,

    /* U+1EAD "ậ" */
    0x32, 0x1f, 0x17, 0xc7, 0xe0, 0x20,

    /* U+1EAE "Ắ" */
    0x10, 0x50, 0xc0, 0x83, 0x5, 0x12, 0x3e, 0x45,
    0x8,

    /* U+1EAF "ắ" */
    0x12, 0x8c, 0xf8, 0xbe, 0x3f,

    /* U+1EB0 "Ằ" */
    0x10, 0x50, 0xc0, 0x83, 0x5, 0x12, 0x3e, 0x45,
    0x8,

    /* U+1EB1 "ằ" */
    0x22, 0x8c, 0xf8, 0xbe, 0x3f,

    /* U+1EB2 "Ẳ" */
    0x18, 0x20, 0x60, 0x81, 0x85, 0x9, 0x3e, 0x46,
    0x84,

    /* U+1EB3 "ẳ" */
    0x31, 0x14, 0x67, 0xc5, 0xf1, 0xf8,

    /* U+1EB4 "Ẵ" */
    0x38, 0x10, 0xc0, 0x83, 0x5, 0x12, 0x3e, 0x45,
    0x8,

    /* U+1EB5 "ẵ" */
    0x6a, 0x94, 0x67, 0xc5, 0xf1, 0xf8,

    /* U+1EB6 "Ặ" */
    0x8, 0x60, 0x41, 0x82, 0x89, 0x1f, 0x22, 0x84,
    0x0, 0x40,

    /* U+1EB7 "ặ" */
    0x51, 0x9f, 0x17, 0xc7, 0xe0, 0x20,

    /* U+1EB8 "Ẹ" */
    0xfc, 0x21, 0xf8, 0x43, 0xe0, 0x20,

    /* U+1EB9 "ẹ" */
    0x74, 0x7f, 0x17, 0x0, 0x80,

    /* U+1EBA "Ẻ" */
    0x21, 0x3f, 0x8, 0x7e, 0x10, 0xf8,

    /* U+1EBB "ẻ" */
    0x20, 0x88, 0xe8, 0xfe, 0x2e,

    /* U+1EBC "Ẽ" */
    0x72, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+1EBD "ẽ" */
    0x70, 0x1d, 0x1f, 0xc5, 0xc0,

    /* U+1EBE "Ế" */
    0x9, 0xcf, 0xa0, 0x83, 0xe8, 0x20, 0xf8,

    /* U+1EBF "ế" */
    0x9, 0x81, 0x1c, 0x8b, 0xe8, 0x9c,

    /* U+1EC0 "Ề" */
    0x83, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+1EC1 "ề" */
    0x40, 0xc0, 0x8e, 0x45, 0xf4, 0x4e,

    /* U+1EC2 "Ể" */
    0x18, 0xa5, 0x3e, 0x82, 0xf, 0xa0, 0x83, 0xe0,

    /* U+1EC3 "ể" */
    0x18, 0xa5, 0x1c, 0x8b, 0xe8, 0x9c,

    /* U+1EC4 "Ễ" */
    0x71, 0x15, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EC5 "ễ" */
    0x73, 0x88, 0xa7, 0x47, 0xf1, 0x70,

    /* U+1EC6 "Ệ" */
    0x22, 0xbf, 0x8, 0x7e, 0x10, 0xf8, 0x8,

    /* U+1EC7 "ệ" */
    0x22, 0x9d, 0x1f, 0xc5, 0xc0, 0x20,

    /* U+1EC8 "Ỉ" */
    0xc9, 0x24, 0x92, 0x40,

    /* U+1EC9 "ỉ" */
    0xc9, 0x24, 0x90,

    /* U+1ECA "Ị" */
    0xfe, 0x80,

    /* U+1ECB "ị" */
    0xbe, 0x80,

    /* U+1ECC "Ọ" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0, 0x10,

    /* U+1ECD "ọ" */
    0x74, 0x63, 0x17, 0x0, 0x80,

    /* U+1ECE "Ỏ" */
    0x18, 0x20, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+1ECF "ỏ" */
    0x20, 0x88, 0xe8, 0xc6, 0x2e,

    /* U+1ED0 "Ố" */
    0x4, 0x70, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+1ED1 "ố" */
    0x9, 0x81, 0x1c, 0x8a, 0x28, 0x9c,

    /* U+1ED2 "Ồ" */
    0x40, 0x70, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+1ED3 "ồ" */
    0x40, 0xc0, 0x8e, 0x45, 0x14, 0x4e,

    /* U+1ED4 "Ổ" */
    0xc, 0x28, 0xa1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1ED5 "ổ" */
    0x18, 0xa5, 0x1c, 0x8a, 0x28, 0x9c,

    /* U+1ED6 "Ỗ" */
    0x38, 0x20, 0xa1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1ED7 "ỗ" */
    0x73, 0x88, 0xa7, 0x46, 0x31, 0x70,

    /* U+1ED8 "Ộ" */
    0x10, 0x50, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,
    0x0, 0x40,

    /* U+1ED9 "ộ" */
    0x22, 0x9d, 0x18, 0xc5, 0xc0, 0x20,

    /* U+1EDA "Ớ" */
    0x10, 0x3b, 0x46, 0x82, 0x82, 0x82, 0x44, 0x38,

    /* U+1EDB "ớ" */
    0x20, 0x5f, 0x18, 0xc5, 0xc0,

    /* U+1EDC "Ờ" */
    0x10, 0x3b, 0x46, 0x82, 0x82, 0x82, 0x44, 0x38,

    /* U+1EDD "ờ" */
    0x20, 0x5f, 0x18, 0xc5, 0xc0,

    /* U+1EDE "Ở" */
    0x18, 0x10, 0x3b, 0x46, 0x82, 0x82, 0x82, 0x44,
    0x38,

    /* U+1EDF "ở" */
    0x21, 0xa, 0xf8, 0xc6, 0x2e,

    /* U+1EE0 "Ỡ" */
    0x38, 0x38, 0x3b, 0x46, 0x82, 0x82, 0x82, 0x44,
    0x38,

    /* U+1EE1 "ỡ" */
    0x70, 0x5f, 0x18, 0xc5, 0xc0,

    /* U+1EE2 "Ợ" */
    0x3b, 0x46, 0x82, 0x82, 0x82, 0x44, 0x38, 0x0,
    0x10,

    /* U+1EE3 "ợ" */
    0xb, 0xe3, 0x18, 0xb8, 0x4,

    /* U+1EE4 "Ụ" */
    0x86, 0x18, 0x61, 0x86, 0x17, 0x80, 0x20,

    /* U+1EE5 "ụ" */
    0x99, 0x99, 0xf0, 0x40,

    /* U+1EE6 "Ủ" */
    0x30, 0x88, 0x61, 0x86, 0x18, 0x61, 0x78,

    /* U+1EE7 "ủ" */
    0x64, 0x99, 0x99, 0xf0,

    /* U+1EE8 "Ứ" */
    0x11, 0xe, 0x1c, 0x28, 0x50, 0xa1, 0x3c,

    /* U+1EE9 "ứ" */
    0x20, 0x39, 0xa4, 0x92, 0x4f, 0x0,

    /* U+1EEA "Ừ" */
    0x21, 0xe, 0x1c, 0x28, 0x50, 0xa1, 0x3c,

    /* U+1EEB "ừ" */
    0x40, 0x39, 0xa4, 0x92, 0x4f, 0x0,

    /* U+1EEC "Ử" */
    0x30, 0x62, 0x1c, 0x38, 0x50, 0xa1, 0x42, 0x78,

    /* U+1EED "ử" */
    0x60, 0x39, 0xa4, 0x92, 0x4f, 0x0,

    /* U+1EEE "Ữ" */
    0x28, 0xb2, 0x1c, 0x38, 0x50, 0xa1, 0x42, 0x78,

    /* U+1EEF "ữ" */
    0x60, 0x39, 0xa4, 0x92, 0x4f, 0x0,

    /* U+1EF0 "Ự" */
    0x87, 0xe, 0x14, 0x28, 0x50, 0x9e, 0x0, 0x20,

    /* U+1EF1 "ự" */
    0xe, 0x69, 0x24, 0x93, 0xc0, 0x10,

    /* U+1EF2 "Ỳ" */
    0x10, 0x89, 0x11, 0x41, 0x2, 0x4, 0x8,

    /* U+1EF3 "ỳ" */
    0x20, 0x22, 0xa5, 0x28, 0x84, 0x40,

    /* U+1EF4 "Ỵ" */
    0x44, 0x88, 0xa0, 0x81, 0x2, 0x4, 0x0, 0x10,

    /* U+1EF5 "ỵ" */
    0x8a, 0x94, 0xa2, 0x11, 0x40,

    /* U+1EF6 "Ỷ" */
    0x10, 0x21, 0x12, 0x22, 0x82, 0x4, 0x8, 0x10,

    /* U+1EF7 "ỷ" */
    0x64, 0x99, 0x66, 0x64, 0xc0,

    /* U+1EF8 "Ỹ" */
    0x38, 0x51, 0x12, 0x22, 0x82, 0x4, 0x8, 0x10,

    /* U+1EF9 "ỹ" */
    0x70, 0x22, 0xa5, 0x28, 0x84, 0x40
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 44, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 57, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 14, .adv_w = 142, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 31, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 28, .adv_w = 53, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 31, .adv_w = 53, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 62, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 36, .adv_w = 93, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 39, .adv_w = 44, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 41, .adv_w = 44, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 89, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 44, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 44, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 94, .adv_w = 93, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 98, .adv_w = 93, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 100, .adv_w = 93, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 104, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 162, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 120, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 80, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 151, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 44, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 277, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 44, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 75, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 285, .adv_w = 80, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 286, .adv_w = 53, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 287, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 317, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 36, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 36, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 325, .adv_w = 80, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 36, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 133, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 89, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 347, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 352, .adv_w = 53, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 80, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 89, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 116, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 381, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 389, .adv_w = 42, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 391, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 93, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 397, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 399, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 44, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 44, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 44, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 44, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 80, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 578, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 44, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 36, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 124, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 89, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 163, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 648, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 660, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 667, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 80, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 59, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 686, .adv_w = 44, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 690, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 705, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 53, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 718, .adv_w = 53, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 719, .adv_w = 31, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 720, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 721, .adv_w = 53, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 722, .adv_w = 53, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 723, .adv_w = 31, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 724, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 725, .adv_w = 53, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 726, .adv_w = 53, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 727, .adv_w = 48, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 729, .adv_w = 36, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 730, .adv_w = 36, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 731, .adv_w = 54, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 732, .adv_w = 54, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 733, .adv_w = 45, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 734, .adv_w = 58, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 735, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 736, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 737, .adv_w = 53, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 738, .adv_w = 53, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 739, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 740, .adv_w = 53, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 741, .adv_w = 53, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 742, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 744, .adv_w = 24, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 745, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 746, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 748, .adv_w = 52, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 750, .adv_w = 58, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 753, .adv_w = 58, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 58, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 58, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 58, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 766, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = 6},
    {.bitmap_index = 767, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 768, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 769, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 770, .adv_w = 0, .box_w = 5, .box_h = 1, .ofs_x = -5, .ofs_y = 6},
    {.bitmap_index = 771, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 5},
    {.bitmap_index = 772, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = 6},
    {.bitmap_index = 773, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 774, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 775, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = 5},
    {.bitmap_index = 776, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 777, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 778, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 6},
    {.bitmap_index = 779, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 780, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -5, .ofs_y = 6},
    {.bitmap_index = 781, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 5},
    {.bitmap_index = 782, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 5},
    {.bitmap_index = 783, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 6},
    {.bitmap_index = 784, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 6},
    {.bitmap_index = 785, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 6},
    {.bitmap_index = 786, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 787, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 788, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 789, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 790, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 791, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 6},
    {.bitmap_index = 792, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 793, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 794, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 795, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 796, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 797, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 798, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 799, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 800, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 801, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 809, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 814, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 884, .adv_w = 107, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 894, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 900, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 107, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 968, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 974, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 980, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 985, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 991, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1007, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1046, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1059, .adv_w = 107, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1066, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1072, .adv_w = 44, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1076, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1079, .adv_w = 44, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1081, .adv_w = 36, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1083, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1091, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1096, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1104, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 124, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1152, .adv_w = 124, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1167, .adv_w = 124, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1177, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1183, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1191, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1204, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 124, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1218, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 124, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 124, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1246, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1251, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1258, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1262, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1269, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1273, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1280, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1286, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1299, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1307, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1321, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1327, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1335, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1341, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1348, .adv_w = 80, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1354, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1362, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1367, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1375, .adv_w = 80, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1380, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1388, .adv_w = 80, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2}
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
lv_font_t Arial_10 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ARIAL_10*/

