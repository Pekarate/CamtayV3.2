#include "lvgl.h"

/*******************************************************************************
 * Size: 50 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef NUMBER_50
#define NUMBER_50 1
#endif

#if NUMBER_50

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2D "-" */
    0x7f, 0xfb, 0xff, 0xf7, 0xff, 0x80,

    /* U+2E "." */
    0x5f, 0xf4,

    /* U+2F "/" */
    0x0, 0x0, 0x38, 0x0, 0x1, 0xc0, 0x0, 0x1e,
    0x0, 0x1, 0xe0, 0x0, 0xe, 0x0, 0x0, 0xf0,
    0x0, 0x7, 0x0, 0x0, 0x78, 0x0, 0x7, 0x80,
    0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x1c, 0x0,
    0x1, 0xe0, 0x0, 0xe, 0x0, 0x0, 0x70, 0x0,
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x30, 0x0, 0x3, 0xc0, 0x0, 0x1c, 0x0, 0x1,
    0xe0, 0x0, 0x1e, 0x0, 0x0, 0xf0, 0x0, 0xf,
    0x0, 0x0, 0x70, 0x0, 0x7, 0x80, 0x0, 0x78,
    0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x1, 0xc0,
    0x0, 0x1e, 0x0, 0x0, 0xe0, 0x0, 0x6, 0x0,
    0x0, 0x0,

    /* U+30 "0" */
    0x1f, 0xff, 0x7, 0xff, 0xf1, 0x7f, 0xfd, 0x70,
    0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1, 0xf8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xf8, 0x0, 0x3f, 0x0, 0x7, 0x40, 0x0,
    0x40, 0x0, 0x1, 0x0, 0x1, 0x70, 0x0, 0x7e,
    0x0, 0xf, 0xc0, 0x1, 0xf8, 0x0, 0x3f, 0x0,
    0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f, 0x80, 0x3,
    0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1, 0xf8,
    0x0, 0x3f, 0x0, 0x7, 0x5f, 0xff, 0x47, 0xff,
    0xf0, 0x7f, 0xfc, 0x0,

    /* U+31 "1" */
    0x5f, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x41, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0x0,

    /* U+32 "2" */
    0x1f, 0xff, 0x7, 0xff, 0xf0, 0x7f, 0xfd, 0x0,
    0x0, 0x70, 0x0, 0xe, 0x0, 0x1, 0xc0, 0x0,
    0x38, 0x0, 0x7, 0x0, 0x0, 0xe0, 0x0, 0x1c,
    0x0, 0x3, 0x80, 0x0, 0x70, 0x0, 0xe, 0x0,
    0x1, 0xc0, 0x0, 0x38, 0x0, 0x7, 0x1f, 0xff,
    0x47, 0xff, 0xf1, 0x7f, 0xfc, 0x70, 0x0, 0xe,
    0x0, 0x1, 0xc0, 0x0, 0x38, 0x0, 0x7, 0x0,
    0x0, 0xe0, 0x0, 0x1c, 0x0, 0x3, 0x80, 0x0,
    0x70, 0x0, 0xe, 0x0, 0x1, 0xc0, 0x0, 0x38,
    0x0, 0x7, 0x0, 0x0, 0x5f, 0xff, 0x7, 0xff,
    0xf0, 0x7f, 0xfc, 0x0,

    /* U+33 "3" */
    0x3f, 0xfc, 0x7f, 0xff, 0xf, 0xff, 0x40, 0x0,
    0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0,
    0x7, 0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0,
    0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe,
    0x0, 0x7, 0x3f, 0xfd, 0x7f, 0xff, 0xf, 0xff,
    0x40, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xe, 0x0, 0x7, 0x3f, 0xfd, 0x7f, 0xff,
    0xf, 0xff, 0x0,

    /* U+34 "4" */
    0x40, 0x0, 0x5c, 0x0, 0x1f, 0x80, 0x3, 0xf0,
    0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1, 0xf8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xf8, 0x0, 0x3f, 0x0, 0x7, 0x5f, 0xff,
    0x47, 0xff, 0xf0, 0x7f, 0xfd, 0x0, 0x0, 0x70,
    0x0, 0xe, 0x0, 0x1, 0xc0, 0x0, 0x38, 0x0,
    0x7, 0x0, 0x0, 0xe0, 0x0, 0x1c, 0x0, 0x3,
    0x80, 0x0, 0x70, 0x0, 0xe, 0x0, 0x1, 0xc0,
    0x0, 0x38, 0x0, 0x7, 0x0, 0x0, 0xe0, 0x0,
    0x1c, 0x0, 0x1, 0x0,

    /* U+35 "5" */
    0x1f, 0xff, 0x7, 0xff, 0xf1, 0x7f, 0xfc, 0x70,
    0x0, 0xe, 0x0, 0x1, 0xc0, 0x0, 0x38, 0x0,
    0x7, 0x0, 0x0, 0xe0, 0x0, 0x1c, 0x0, 0x3,
    0x80, 0x0, 0x70, 0x0, 0xe, 0x0, 0x1, 0xc0,
    0x0, 0x38, 0x0, 0x7, 0x0, 0x0, 0x5f, 0xff,
    0x7, 0xff, 0xf0, 0x7f, 0xfd, 0x0, 0x0, 0x70,
    0x0, 0xe, 0x0, 0x1, 0xc0, 0x0, 0x38, 0x0,
    0x7, 0x0, 0x0, 0xe0, 0x0, 0x1c, 0x0, 0x3,
    0x80, 0x0, 0x70, 0x0, 0xe, 0x0, 0x1, 0xc0,
    0x0, 0x38, 0x0, 0x7, 0x1f, 0xff, 0x47, 0xff,
    0xf0, 0x7f, 0xfc, 0x0,

    /* U+36 "6" */
    0x1f, 0xff, 0x7, 0xff, 0xf1, 0x7f, 0xfc, 0x70,
    0x0, 0xe, 0x0, 0x1, 0xc0, 0x0, 0x38, 0x0,
    0x7, 0x0, 0x0, 0xe0, 0x0, 0x1c, 0x0, 0x3,
    0x80, 0x0, 0x70, 0x0, 0xe, 0x0, 0x1, 0xc0,
    0x0, 0x38, 0x0, 0x7, 0x0, 0x0, 0x5f, 0xff,
    0x7, 0xff, 0xf1, 0x7f, 0xfd, 0x70, 0x0, 0x7e,
    0x0, 0xf, 0xc0, 0x1, 0xf8, 0x0, 0x3f, 0x0,
    0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f, 0x80, 0x3,
    0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1, 0xf8,
    0x0, 0x3f, 0x0, 0x7, 0x5f, 0xff, 0x47, 0xff,
    0xf0, 0x7f, 0xfc, 0x0,

    /* U+37 "7" */
    0x3f, 0xfc, 0x7f, 0xff, 0xf, 0xff, 0x40, 0x0,
    0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0,
    0x7, 0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0,
    0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe,
    0x0, 0x2, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x40, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1,
    0xc0, 0x0, 0x40,

    /* U+38 "8" */
    0x1f, 0xff, 0x7, 0xff, 0xf1, 0x7f, 0xfd, 0x70,
    0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1, 0xf8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xf8, 0x0, 0x3f, 0x0, 0x7, 0x5f, 0xff,
    0x47, 0xff, 0xf1, 0x7f, 0xfd, 0x70, 0x0, 0x7e,
    0x0, 0xf, 0xc0, 0x1, 0xf8, 0x0, 0x3f, 0x0,
    0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f, 0x80, 0x3,
    0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1, 0xf8,
    0x0, 0x3f, 0x0, 0x7, 0x5f, 0xff, 0x47, 0xff,
    0xf0, 0x7f, 0xfc, 0x0,

    /* U+39 "9" */
    0x1f, 0xff, 0x7, 0xff, 0xf1, 0x7f, 0xfd, 0x70,
    0x0, 0x7e, 0x0, 0xf, 0xc0, 0x1, 0xf8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xf8, 0x0, 0x3f, 0x0, 0x7, 0x5f, 0xff,
    0x47, 0xff, 0xf0, 0x7f, 0xfd, 0x0, 0x0, 0x70,
    0x0, 0xe, 0x0, 0x1, 0xc0, 0x0, 0x38, 0x0,
    0x7, 0x0, 0x0, 0xe0, 0x0, 0x1c, 0x0, 0x3,
    0x80, 0x0, 0x70, 0x0, 0xe, 0x0, 0x1, 0xc0,
    0x0, 0x38, 0x0, 0x7, 0x1f, 0xff, 0x47, 0xff,
    0xf0, 0x7f, 0xfc, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 325, .box_w = 14, .box_h = 3, .ofs_x = 3, .ofs_y = 16},
    {.bitmap_index = 6, .adv_w = 147, .box_w = 3, .box_h = 5, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 434, .box_w = 21, .box_h = 34, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 402, .box_w = 19, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 147, .box_w = 3, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 402, .box_w = 19, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 364, .box_w = 17, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 402, .box_w = 19, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 402, .box_w = 19, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 402, .box_w = 19, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 364, .box_w = 17, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 402, .box_w = 19, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 402, .box_w = 19, .box_h = 35, .ofs_x = 3, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 45, .range_length = 13, .glyph_id_start = 1,
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
lv_font_t Number_50 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 35,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -16,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if NUMBER_50*/
