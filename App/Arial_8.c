#include "lvgl.h"

/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ARIAL_8
#define ARIAL_8 1
#endif

#if ARIAL_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xf8,

    /* U+22 "\"" */
    0xf0,

    /* U+23 "#" */
    0x5f, 0x6f, 0xa0,

    /* U+24 "$" */
    0x6d, 0xc7, 0xde, 0x40,

    /* U+25 "%" */
    0xe3, 0xc2, 0x8d, 0x1c,

    /* U+26 "&" */
    0x63, 0x19, 0x2e, 0x80,

    /* U+27 "'" */
    0xc0,

    /* U+28 "(" */
    0x6a, 0x90,

    /* U+29 ")" */
    0x95, 0x60,

    /* U+2A "*" */
    0x48,

    /* U+2B "+" */
    0x21, 0x3e, 0x40,

    /* U+2C "," */
    0xc0,

    /* U+2D "-" */
    0xc0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x5a, 0xa0,

    /* U+30 "0" */
    0x69, 0x99, 0x60,

    /* U+31 "1" */
    0x75, 0x40,

    /* U+32 "2" */
    0x79, 0x24, 0xf0,

    /* U+33 "3" */
    0x71, 0x31, 0x60,

    /* U+34 "4" */
    0x11, 0x95, 0xf1, 0x0,

    /* U+35 "5" */
    0xfe, 0x19, 0x60,

    /* U+36 "6" */
    0x7e, 0x99, 0x60,

    /* U+37 "7" */
    0xf2, 0x44, 0x40,

    /* U+38 "8" */
    0xf7, 0xa9, 0x70,

    /* U+39 "9" */
    0xe9, 0x79, 0x60,

    /* U+3A ":" */
    0x90,

    /* U+3B ";" */
    0x98,

    /* U+3C "<" */
    0x7, 0x87,

    /* U+3D "=" */
    0xff,

    /* U+3E ">" */
    0xe, 0x1e,

    /* U+3F "?" */
    0xf1, 0x20, 0x40,

    /* U+40 "@" */
    0x3c, 0xf7, 0x2e, 0x9f, 0xcf, 0xc0,

    /* U+41 "A" */
    0x22, 0x94, 0xf8, 0x80,

    /* U+42 "B" */
    0xf9, 0xe9, 0xf0,

    /* U+43 "C" */
    0x74, 0x61, 0x17, 0x80,

    /* U+44 "D" */
    0xf4, 0x63, 0x1f, 0x0,

    /* U+45 "E" */
    0xf4, 0x3d, 0xf, 0x80,

    /* U+46 "F" */
    0xf8, 0xf8, 0x80,

    /* U+47 "G" */
    0x74, 0x27, 0x17, 0x80,

    /* U+48 "H" */
    0x8c, 0x7f, 0x18, 0x80,

    /* U+49 "I" */
    0xf8,

    /* U+4A "J" */
    0x11, 0x11, 0x70,

    /* U+4B "K" */
    0x95, 0x39, 0x28, 0x80,

    /* U+4C "L" */
    0x88, 0x88, 0xf0,

    /* U+4D "M" */
    0xcf, 0x3d, 0x6d, 0xb4,

    /* U+4E "N" */
    0x8e, 0x6b, 0x38, 0x80,

    /* U+4F "O" */
    0x7a, 0x18, 0x61, 0x78,

    /* U+50 "P" */
    0xf9, 0xe8, 0x80,

    /* U+51 "Q" */
    0x7a, 0x18, 0x61, 0x7c,

    /* U+52 "R" */
    0xfc, 0x7d, 0x28, 0x80,

    /* U+53 "S" */
    0xe9, 0x69, 0xf0,

    /* U+54 "T" */
    0xf9, 0x8, 0x42, 0x0,

    /* U+55 "U" */
    0x8c, 0x63, 0x17, 0x0,

    /* U+56 "V" */
    0x8c, 0x54, 0xa2, 0x0,

    /* U+57 "W" */
    0x93, 0x36, 0xab, 0x66, 0x40,

    /* U+58 "X" */
    0x4a, 0x88, 0xa8, 0x80,

    /* U+59 "Y" */
    0x8a, 0x88, 0x42, 0x0,

    /* U+5A "Z" */
    0xf8, 0x88, 0x8f, 0x80,

    /* U+5B "[" */
    0xea, 0xb0,

    /* U+5C "\\" */
    0xa9, 0x40,

    /* U+5D "]" */
    0xd5, 0x70,

    /* U+5E "^" */
    0x46, 0xa0,

    /* U+5F "_" */
    0xf0,

    /* U+60 "`" */
    0x0,

    /* U+61 "a" */
    0x71, 0xff,

    /* U+62 "b" */
    0x8e, 0x99, 0xe0,

    /* U+63 "c" */
    0x68, 0x86,

    /* U+64 "d" */
    0x17, 0x99, 0x70,

    /* U+65 "e" */
    0x7f, 0x96,

    /* U+66 "f" */
    0x7d, 0x24,

    /* U+67 "g" */
    0x79, 0x97, 0xf0,

    /* U+68 "h" */
    0x8f, 0x99, 0x90,

    /* U+69 "i" */
    0xf8,

    /* U+6A "j" */
    0x55, 0x70,

    /* U+6B "k" */
    0x8a, 0xca, 0xa0,

    /* U+6C "l" */
    0xf8,

    /* U+6D "m" */
    0xfd, 0x6b, 0x50,

    /* U+6E "n" */
    0xf9, 0x99,

    /* U+6F "o" */
    0x69, 0x96,

    /* U+70 "p" */
    0xe9, 0x9e, 0x80,

    /* U+71 "q" */
    0x79, 0x97, 0x10,

    /* U+72 "r" */
    0xd2, 0x40,

    /* U+73 "s" */
    0xec, 0x2e,

    /* U+74 "t" */
    0x5d, 0x26,

    /* U+75 "u" */
    0x99, 0x9f,

    /* U+76 "v" */
    0x9a, 0x66,

    /* U+77 "w" */
    0xa6, 0xed, 0x92,

    /* U+78 "x" */
    0xa6, 0x69,

    /* U+79 "y" */
    0x96, 0x64, 0xc0,

    /* U+7A "z" */
    0xe2, 0x4f,

    /* U+7B "{" */
    0x6a, 0x24, 0xc0,

    /* U+7C "|" */
    0xfc,

    /* U+7D "}" */
    0xc8, 0xa5, 0x80,

    /* U+7E "~" */
    0x49,

    /* U+B0 "°" */
    0xb8,

    /* U+C0 "À" */
    0x20, 0x8, 0xa5, 0x3e, 0x20,

    /* U+C1 "Á" */
    0x20, 0x8, 0xa5, 0x3e, 0x20,

    /* U+C2 "Â" */
    0x20, 0x8, 0xa5, 0x3e, 0x20,

    /* U+C3 "Ã" */
    0x30, 0x8, 0xa5, 0x3e, 0x20,

    /* U+C8 "È" */
    0x20, 0x3d, 0xf, 0x43, 0xe0,

    /* U+C9 "É" */
    0x20, 0x3d, 0xf, 0x43, 0xe0,

    /* U+CA "Ê" */
    0x20, 0x3d, 0xf, 0x43, 0xe0,

    /* U+CC "Ì" */
    0x45, 0x54,

    /* U+CD "Í" */
    0x8a, 0xa8,

    /* U+D0 "Ð" */
    0x79, 0x1e, 0x51, 0x78,

    /* U+D2 "Ò" */
    0x20, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+D3 "Ó" */
    0x10, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+D4 "Ô" */
    0x30, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+D5 "Õ" */
    0x30, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+D9 "Ù" */
    0x20, 0x23, 0x18, 0xc5, 0xc0,

    /* U+DA "Ú" */
    0x20, 0x23, 0x18, 0xc5, 0xc0,

    /* U+DD "Ý" */
    0x20, 0x22, 0xa2, 0x10, 0x80,

    /* U+E0 "à" */
    0x47, 0x1f, 0xf0,

    /* U+E1 "á" */
    0x27, 0x1f, 0xf0,

    /* U+E2 "â" */
    0x67, 0x1f, 0xf0,

    /* U+E3 "ã" */
    0x67, 0x1f, 0xf0,

    /* U+E8 "è" */
    0x47, 0xf9, 0x60,

    /* U+E9 "é" */
    0x27, 0xf9, 0x60,

    /* U+EA "ê" */
    0x67, 0xf9, 0x60,

    /* U+EC "ì" */
    0x55, 0x40,

    /* U+ED "í" */
    0xaa, 0x80,

    /* U+F2 "ò" */
    0x46, 0x99, 0x60,

    /* U+F3 "ó" */
    0x46, 0x99, 0x60,

    /* U+F4 "ô" */
    0x66, 0x99, 0x60,

    /* U+F5 "õ" */
    0x66, 0x99, 0x60,

    /* U+F9 "ù" */
    0x49, 0x99, 0xf0,

    /* U+FA "ú" */
    0x29, 0x99, 0xf0,

    /* U+FD "ý" */
    0x29, 0x66, 0x4c,

    /* U+102 "Ă" */
    0x51, 0x8, 0xa5, 0x3e, 0x20,

    /* U+103 "ă" */
    0x67, 0x1f, 0xf0,

    /* U+110 "Đ" */
    0x79, 0x1e, 0x51, 0x78,

    /* U+111 "đ" */
    0x3b, 0xa5, 0x27, 0x0,

    /* U+128 "Ĩ" */
    0xe1, 0x24, 0x90,

    /* U+129 "ĩ" */
    0xe9, 0x24,

    /* U+168 "Ũ" */
    0x70, 0x23, 0x18, 0xc5, 0xc0,

    /* U+169 "ũ" */
    0x69, 0x99, 0xf0,

    /* U+1A0 "Ơ" */
    0x5, 0xf8, 0x61, 0x85, 0xe0,

    /* U+1A1 "ơ" */
    0x17, 0x99, 0x60,

    /* U+1A2 "Ƣ" */
    0x7f, 0xe, 0x1c, 0x37, 0xa0,

    /* U+1A3 "ƣ" */
    0x7e, 0x59, 0x59, 0x4,

    /* U+1A4 "Ƥ" */
    0xfa, 0x5c, 0x84, 0x0,

    /* U+1A5 "ƥ" */
    0x12, 0xe9, 0x9e, 0x80,

    /* U+1A6 "Ʀ" */
    0xf2, 0x2f, 0x24, 0x88, 0x20,

    /* U+1A7 "Ƨ" */
    0x79, 0x69, 0xf0,

    /* U+1A8 "ƨ" */
    0xe2, 0xce,

    /* U+1A9 "Ʃ" */
    0xf4, 0x24, 0xf0,

    /* U+1AA "ƪ" */
    0xe6, 0x22, 0x23,

    /* U+1AB "ƫ" */
    0x59, 0x26, 0x80,

    /* U+1AC "Ƭ" */
    0xf9, 0x8, 0x42, 0x0,

    /* U+1AD "ƭ" */
    0x7d, 0x26,

    /* U+1AE "Ʈ" */
    0xf9, 0x8, 0x42, 0x18,

    /* U+1AF "Ư" */
    0x6, 0x28, 0xa2, 0x89, 0xc0,

    /* U+1B0 "ư" */
    0xc, 0xa5, 0x2f, 0x0,

    /* U+2C6 "ˆ" */
    0x40,

    /* U+2C7 "ˇ" */
    0x40,

    /* U+2C8 "ˈ" */
    0xc0,

    /* U+2C9 "ˉ" */
    0xe0,

    /* U+2CA "ˊ" */
    0x80,

    /* U+2CB "ˋ" */
    0x0,

    /* U+2CC "ˌ" */
    0xc0,

    /* U+2CD "ˍ" */
    0xe0,

    /* U+2CE "ˎ" */
    0x0,

    /* U+2CF "ˏ" */
    0x80,

    /* U+2D0 "ː" */
    0x90,

    /* U+2D1 "ˑ" */
    0x80,

    /* U+2D2 "˒" */
    0xc0,

    /* U+2D3 "˓" */
    0xc0,

    /* U+2D4 "˔" */
    0xc0,

    /* U+2D5 "˕" */
    0xc0,

    /* U+2D6 "˖" */
    0xc0,

    /* U+2D7 "˗" */
    0x80,

    /* U+2D8 "˘" */
    0x40,

    /* U+2D9 "˙" */
    0x80,

    /* U+2DA "˚" */
    0xc0,

    /* U+2DB "˛" */
    0xb0,

    /* U+2DC "˜" */
    0xc0,

    /* U+2DD "˝" */
    0x20,

    /* U+2DE "˞" */
    0x48,

    /* U+2E0 "ˠ" */
    0xb4,

    /* U+2E1 "ˡ" */
    0xe0,

    /* U+2E2 "ˢ" */
    0xf0,

    /* U+2E3 "ˣ" */
    0xf0,

    /* U+2E4 "ˤ" */
    0xf1, 0x20,

    /* U+2E5 "˥" */
    0xe4, 0x92, 0x40,

    /* U+2E6 "˦" */
    0x3c, 0x92,

    /* U+2E7 "˧" */
    0x27, 0x92,

    /* U+2E8 "˨" */
    0x24, 0xf2,

    /* U+2E9 "˩" */
    0x24, 0x93, 0xc0,

    /* U+300 "̀" */
    0x80,

    /* U+301 "́" */
    0x0,

    /* U+302 "̂" */
    0xc0,

    /* U+303 "̃" */
    0x60,

    /* U+304 "̄" */
    0xc0,

    /* U+305 "̅" */
    0xf0,

    /* U+306 "̆" */
    0x80,

    /* U+307 "̇" */
    0x80,

    /* U+308 "̈" */
    0x40,

    /* U+309 "̉" */
    0xa0,

    /* U+30A "̊" */
    0xc0,

    /* U+30B "̋" */
    0xc0,

    /* U+30C "̌" */
    0xc0,

    /* U+30D "̍" */
    0xc0,

    /* U+30E "̎" */
    0xf0,

    /* U+30F "̏" */
    0x60,

    /* U+310 "̐" */
    0xa0,

    /* U+311 "̑" */
    0xc0,

    /* U+312 "̒" */
    0xc0,

    /* U+313 "̓" */
    0xc0,

    /* U+314 "̔" */
    0xc0,

    /* U+315 "̕" */
    0xc0,

    /* U+316 "̖" */
    0x80,

    /* U+317 "̗" */
    0x0,

    /* U+318 "̘" */
    0x80,

    /* U+319 "̙" */
    0x80,

    /* U+31A "̚" */
    0xc0,

    /* U+31B "̛" */
    0xc0,

    /* U+31C "̜" */
    0x0,

    /* U+31D "̝" */
    0xc0,

    /* U+31E "̞" */
    0xc0,

    /* U+31F "̟" */
    0xc0,

    /* U+320 "̠" */
    0xc0,

    /* U+321 "̡" */
    0x60,

    /* U+322 "̢" */
    0x90,

    /* U+323 "̣" */
    0x80,

    /* U+1EA0 "Ạ" */
    0x22, 0x9d, 0x18, 0x90,

    /* U+1EA1 "ạ" */
    0x71, 0xff, 0x0,

    /* U+1EA2 "Ả" */
    0x21, 0x8, 0xa5, 0x3e, 0x20,

    /* U+1EA3 "ả" */
    0x62, 0x71, 0xff,

    /* U+1EA4 "Ấ" */
    0x9, 0x88, 0xa5, 0x3e, 0x20,

    /* U+1EA5 "ấ" */
    0x13, 0x1c, 0x2f, 0x78,

    /* U+1EA6 "Ầ" */
    0x1, 0x88, 0xa5, 0x3e, 0x20,

    /* U+1EA7 "ầ" */
    0x41, 0x8e, 0x17, 0xbc,

    /* U+1EA8 "Ẩ" */
    0x19, 0x0, 0x45, 0x29, 0xf1,

    /* U+1EA9 "ẩ" */
    0x10, 0x58, 0xe1, 0x7b, 0xc0,

    /* U+1EAA "Ẫ" */
    0x71, 0x14, 0x45, 0x29, 0xf1,

    /* U+1EAB "ẫ" */
    0x60, 0x67, 0x1f, 0xf0,

    /* U+1EAC "Ậ" */
    0x22, 0x80, 0x45, 0x3a, 0x31, 0x20,

    /* U+1EAD "ậ" */
    0x67, 0x1f, 0xf0,

    /* U+1EAE "Ắ" */
    0x1, 0x80, 0x45, 0x29, 0xf1,

    /* U+1EAF "ắ" */
    0x20, 0x67, 0x1f, 0xf0,

    /* U+1EB0 "Ằ" */
    0x21, 0x80, 0x45, 0x29, 0xf1,

    /* U+1EB1 "ằ" */
    0x0, 0x67, 0x1f, 0xf0,

    /* U+1EB2 "Ẳ" */
    0x21, 0x0, 0x45, 0x29, 0xf1,

    /* U+1EB3 "ẳ" */
    0x62, 0x67, 0x1f, 0xf0,

    /* U+1EB4 "Ẵ" */
    0x71, 0x0, 0x45, 0x29, 0xf1,

    /* U+1EB5 "ẵ" */
    0x60, 0x67, 0x1f, 0xf0,

    /* U+1EB6 "Ặ" */
    0x51, 0x0, 0x45, 0x3a, 0x31, 0x20,

    /* U+1EB7 "ặ" */
    0x20, 0x71, 0xff, 0x0,

    /* U+1EB8 "Ẹ" */
    0xf7, 0xa1, 0xf, 0x90,

    /* U+1EB9 "ẹ" */
    0x7f, 0x96, 0x0,

    /* U+1EBA "Ẻ" */
    0x21, 0x3d, 0xf, 0x43, 0xe0,

    /* U+1EBB "ẻ" */
    0x60, 0x7f, 0x96,

    /* U+1EBC "Ẽ" */
    0x70, 0x3d, 0xf, 0x43, 0xe0,

    /* U+1EBD "ẽ" */
    0x67, 0xf9, 0x60,

    /* U+1EBE "Ế" */
    0x3, 0x3d, 0xf, 0x43, 0xe0,

    /* U+1EBF "ế" */
    0x13, 0x1d, 0xe9, 0x30,

    /* U+1EC0 "Ề" */
    0x83, 0x3d, 0xf, 0x43, 0xe0,

    /* U+1EC1 "ề" */
    0x41, 0x8e, 0xf4, 0x98,

    /* U+1EC2 "Ể" */
    0x11, 0x1, 0xe8, 0x7a, 0x1f,

    /* U+1EC3 "ể" */
    0x11, 0x67, 0xf9, 0x60,

    /* U+1EC4 "Ễ" */
    0x61, 0x15, 0xe8, 0x7a, 0x1f,

    /* U+1EC5 "ễ" */
    0x60, 0x67, 0xf9, 0x60,

    /* U+1EC6 "Ệ" */
    0x22, 0x81, 0xef, 0x42, 0x1f, 0x20,

    /* U+1EC7 "ệ" */
    0x67, 0xf9, 0x60,

    /* U+1EC8 "Ỉ" */
    0xfe,

    /* U+1EC9 "ỉ" */
    0x55, 0x50,

    /* U+1ECA "Ị" */
    0xfc,

    /* U+1ECB "ị" */
    0xfc,

    /* U+1ECC "Ọ" */
    0x7a, 0x18, 0x61, 0x78, 0x0,

    /* U+1ECD "ọ" */
    0x69, 0x96, 0x0,

    /* U+1ECE "Ỏ" */
    0x30, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+1ECF "ỏ" */
    0x60, 0x69, 0x96,

    /* U+1ED0 "Ố" */
    0x8, 0xc0, 0x1e, 0x86, 0x18, 0x5e,

    /* U+1ED1 "ố" */
    0x13, 0x19, 0x29, 0x30,

    /* U+1ED2 "Ồ" */
    0x40, 0xc0, 0x1e, 0x86, 0x18, 0x5e,

    /* U+1ED3 "ồ" */
    0x41, 0x8c, 0x94, 0x98,

    /* U+1ED4 "Ổ" */
    0x8, 0xe0, 0x1e, 0x86, 0x18, 0x5e,

    /* U+1ED5 "ổ" */
    0x11, 0x66, 0x99, 0x60,

    /* U+1ED6 "Ỗ" */
    0x30, 0xc3, 0x1e, 0x86, 0x18, 0x5e,

    /* U+1ED7 "ỗ" */
    0x60, 0x66, 0x99, 0x60,

    /* U+1ED8 "Ộ" */
    0x0, 0xc0, 0x1e, 0x86, 0x18, 0x5e, 0x0,

    /* U+1ED9 "ộ" */
    0x66, 0x99, 0x60,

    /* U+1EDA "Ớ" */
    0x10, 0x17, 0xe1, 0x86, 0x17, 0x80,

    /* U+1EDB "ớ" */
    0x57, 0x99, 0x60,

    /* U+1EDC "Ờ" */
    0x20, 0x17, 0xe1, 0x86, 0x17, 0x80,

    /* U+1EDD "ờ" */
    0x57, 0x99, 0x60,

    /* U+1EDE "Ở" */
    0x30, 0x17, 0xe1, 0x86, 0x17, 0x80,

    /* U+1EDF "ở" */
    0x61, 0x79, 0x96,

    /* U+1EE0 "Ỡ" */
    0x30, 0x17, 0xe1, 0x86, 0x17, 0x80,

    /* U+1EE1 "ỡ" */
    0x77, 0x99, 0x60,

    /* U+1EE2 "Ợ" */
    0x4, 0x17, 0xe1, 0x86, 0x17, 0x80,

    /* U+1EE3 "ợ" */
    0x17, 0x99, 0x60,

    /* U+1EE4 "Ụ" */
    0x8c, 0x63, 0x17, 0x10,

    /* U+1EE5 "ụ" */
    0x99, 0x9f, 0x0,

    /* U+1EE6 "Ủ" */
    0x20, 0x23, 0x18, 0xc5, 0xc0,

    /* U+1EE7 "ủ" */
    0x60, 0x99, 0x9f,

    /* U+1EE8 "Ứ" */
    0x20, 0x18, 0xa2, 0x8a, 0x27, 0x0,

    /* U+1EE9 "ứ" */
    0x2c, 0xa5, 0x2f, 0x0,

    /* U+1EEA "Ừ" */
    0x20, 0x18, 0xa2, 0x8a, 0x27, 0x0,

    /* U+1EEB "ừ" */
    0x4c, 0xa5, 0x2f, 0x0,

    /* U+1EEC "Ử" */
    0x20, 0x18, 0xa2, 0x8a, 0x27, 0x0,

    /* U+1EED "ử" */
    0x60, 0x65, 0x29, 0x78,

    /* U+1EEE "Ữ" */
    0x70, 0x18, 0xa2, 0x8a, 0x27, 0x0,

    /* U+1EEF "ữ" */
    0x6c, 0xa5, 0x2f, 0x0,

    /* U+1EF0 "Ự" */
    0x4, 0x28, 0xa2, 0x8a, 0x27, 0x8,

    /* U+1EF1 "ự" */
    0xc, 0xa5, 0x2f, 0x0,

    /* U+1EF2 "Ỳ" */
    0x20, 0x22, 0xa2, 0x10, 0x80,

    /* U+1EF3 "ỳ" */
    0x49, 0x66, 0x4c,

    /* U+1EF4 "Ỵ" */
    0x8a, 0x88, 0x42, 0x10,

    /* U+1EF5 "ỵ" */
    0x96, 0x64, 0xd0,

    /* U+1EF6 "Ỷ" */
    0x21, 0x22, 0xa2, 0x10, 0x80,

    /* U+1EF7 "ỷ" */
    0x60, 0x9, 0x66, 0x4c,

    /* U+1EF8 "Ỹ" */
    0x70, 0x22, 0xa2, 0x10, 0x80,

    /* U+1EF9 "ỹ" */
    0x20, 0x96, 0x64, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 36, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 36, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 45, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 3, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 10, .adv_w = 114, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 24, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 19, .adv_w = 43, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 21, .adv_w = 43, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 50, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 24, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 27, .adv_w = 36, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 28, .adv_w = 43, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 29, .adv_w = 36, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 32, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 71, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 36, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 36, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 64, .adv_w = 75, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 66, .adv_w = 75, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 67, .adv_w = 75, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 69, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 130, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 78, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 85, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 78, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 36, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 107, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 100, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 85, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 100, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 85, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 78, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 121, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 78, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 176, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 178, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 180, .adv_w = 60, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 182, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 183, .adv_w = 43, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 184, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 36, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 201, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 28, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 28, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 207, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 28, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 107, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 221, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 224, .adv_w = 43, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 36, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 92, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 242, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 43, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 247, .adv_w = 33, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 248, .adv_w = 43, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 251, .adv_w = 75, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 252, .adv_w = 51, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 253, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 36, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 36, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 92, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 36, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 36, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 64, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 381, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 92, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 36, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 28, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 130, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 100, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 427, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 435, .adv_w = 92, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 440, .adv_w = 85, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 47, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 451, .adv_w = 36, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 454, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 36, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 464, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 43, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 474, .adv_w = 43, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 475, .adv_w = 25, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 476, .adv_w = 43, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 477, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 478, .adv_w = 43, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 479, .adv_w = 25, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 480, .adv_w = 43, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 481, .adv_w = 43, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 482, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 483, .adv_w = 38, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 38, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 485, .adv_w = 28, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 486, .adv_w = 28, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 487, .adv_w = 44, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 488, .adv_w = 44, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 489, .adv_w = 36, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 490, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 491, .adv_w = 43, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 492, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 493, .adv_w = 43, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 494, .adv_w = 43, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 495, .adv_w = 43, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 496, .adv_w = 43, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 497, .adv_w = 43, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 498, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 499, .adv_w = 20, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 500, .adv_w = 35, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 501, .adv_w = 35, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 502, .adv_w = 42, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 504, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 46, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 46, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 46, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 5},
    {.bitmap_index = 517, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 5},
    {.bitmap_index = 518, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 519, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 4},
    {.bitmap_index = 520, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 521, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -4, .ofs_y = 4},
    {.bitmap_index = 522, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 523, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 524, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 525, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = 5},
    {.bitmap_index = 526, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 527, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 5},
    {.bitmap_index = 528, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 529, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -2, .ofs_y = 4},
    {.bitmap_index = 530, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 531, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 5},
    {.bitmap_index = 532, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 533, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 5},
    {.bitmap_index = 534, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 535, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 536, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 537, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 538, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = -1},
    {.bitmap_index = 539, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = -1},
    {.bitmap_index = 540, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 541, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 542, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = 4},
    {.bitmap_index = 543, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 544, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 545, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 546, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = -1},
    {.bitmap_index = 547, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 548, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 549, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 550, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 551, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 552, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 556, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 559, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 71, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 85, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 610, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 613, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 85, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 655, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 659, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 663, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 666, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 85, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 724, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 727, .adv_w = 36, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 36, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 731, .adv_w = 28, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 732, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 737, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 740, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 796, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 799, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 841, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 844, .adv_w = 92, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 848, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 851, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 875, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 905, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 909, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 64, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 917, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 921, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 924, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 64, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 933, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 64, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1}
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
lv_font_t Arial_8 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
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



#endif /*#if ARIAL_8*/

