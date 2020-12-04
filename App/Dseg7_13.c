#include "lvgl.h"

/*******************************************************************************
 * Size: 13 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef DSEG7_13
#define DSEG7_13 1
#endif

#if DSEG7_13

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2D "-" */
    0xf0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x8, 0x44, 0x20, 0x21, 0x10, 0x80,

    /* U+30 "0" */
    0x74, 0x63, 0x10, 0x46, 0x31, 0x70,

    /* U+31 "1" */
    0xf7, 0x80,

    /* U+32 "2" */
    0x70, 0x42, 0x17, 0x42, 0x10, 0x70,

    /* U+33 "3" */
    0xf0, 0x42, 0x1f, 0x4, 0x21, 0xf0,

    /* U+34 "4" */
    0x8c, 0x63, 0x17, 0x4, 0x21, 0x8,

    /* U+35 "5" */
    0x74, 0x21, 0x7, 0x4, 0x21, 0x70,

    /* U+36 "6" */
    0x74, 0x21, 0x7, 0x46, 0x31, 0x70,

    /* U+37 "7" */
    0xf0, 0x42, 0x10, 0x4, 0x21, 0x8,

    /* U+38 "8" */
    0x74, 0x63, 0x17, 0x46, 0x31, 0x70,

    /* U+39 "9" */
    0x74, 0x63, 0x17, 0x4, 0x21, 0x70,

    /* U+3A ":" */
    0x10
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 84, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1, .adv_w = 38, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 113, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 38, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 95, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 95, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 38, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 45, .range_length = 14, .glyph_id_start = 1,
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
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Dseg7_13 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -4,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DSEG7_13*/

