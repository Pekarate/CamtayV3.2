#include "lvgl.h"

/*******************************************************************************
 * Size: 13 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ARIAL1_13
#define ARIAL1_13 1
#endif

#if ARIAL1_13

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2C "," */
    0xe0,

    /* U+2D "-" */
    0xf0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x22, 0x22, 0x44, 0x48, 0x80,

    /* U+30 "0" */
    0x79, 0x28, 0x61, 0x86, 0x18, 0x52, 0x78,

    /* U+31 "1" */
    0x2e, 0x92, 0x49, 0x20,

    /* U+32 "2" */
    0x79, 0x1c, 0x41, 0x8, 0x42, 0x10, 0xfc,

    /* U+33 "3" */
    0x72, 0x20, 0x8c, 0xc, 0x18, 0x63, 0x70,

    /* U+34 "4" */
    0x8, 0x63, 0x8a, 0x4a, 0x2f, 0xc2, 0x8,

    /* U+35 "5" */
    0x7d, 0x4, 0x3e, 0xcc, 0x18, 0x73, 0x78,

    /* U+36 "6" */
    0x39, 0x38, 0x2e, 0xce, 0x18, 0x53, 0x78,

    /* U+37 "7" */
    0xfc, 0x21, 0x84, 0x20, 0x84, 0x10, 0x40,

    /* U+38 "8" */
    0x7a, 0x18, 0x7e, 0x4e, 0x18, 0x73, 0x78,

    /* U+39 "9" */
    0x7b, 0x28, 0x61, 0xcd, 0xd0, 0x62, 0x70,

    /* U+3A ":" */
    0x82,

    /* U+3B ";" */
    0x83, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 58, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1, .adv_w = 69, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2, .adv_w = 58, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 58, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 116, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 58, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 58, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 44, .range_length = 16, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    6, 6
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -15
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 1,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Arial1_13 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ARIAL1_13*/

