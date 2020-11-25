#include "lvgl.h"

/*******************************************************************************
 * Size: 40 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef NUMBER_40
#define NUMBER_40 1
#endif

#if NUMBER_40

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2D "-" */
    0x3f, 0xff, 0x8f, 0xff, 0xfb, 0xff, 0xff, 0xbf,
    0xff, 0xe3, 0xff, 0xf8,

    /* U+2E "." */
    0x77, 0xff, 0xf7, 0x0,

    /* U+30 "0" */
    0x1f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x17, 0xff,
    0xff, 0x5d, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xf8, 0x0, 0x7,
    0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x3c, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x3f,
    0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0,
    0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff,
    0x80, 0x0, 0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0,
    0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc,
    0x0, 0x7, 0xfe, 0x0, 0x3, 0xfe, 0xff, 0xfe,
    0xfe, 0xff, 0xff, 0xba, 0xff, 0xff, 0xe8, 0xff,
    0xff, 0xf8, 0x3f, 0xff, 0xf8,

    /* U+31 "1" */
    0x0, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x79, 0xc0, 0x77, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfb, 0xce, 0x30, 0x0,

    /* U+32 "2" */
    0x1f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x7, 0xff,
    0xff, 0x41, 0xff, 0xff, 0x70, 0x7f, 0xff, 0x78,
    0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7, 0xc0,
    0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7,
    0xc1, 0xff, 0xfd, 0xe1, 0xff, 0xff, 0x71, 0xff,
    0xff, 0xc7, 0x7f, 0xff, 0xc3, 0xdf, 0xff, 0xc1,
    0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0,
    0x1, 0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c,
    0x0, 0x0, 0x3e, 0x0, 0x0, 0x1e, 0xff, 0xfe,
    0xe, 0xff, 0xff, 0x82, 0xff, 0xff, 0xe0, 0xff,
    0xff, 0xf8, 0x3f, 0xff, 0xf8,

    /* U+33 "3" */
    0x7f, 0xff, 0xf1, 0xff, 0xff, 0xf1, 0xff, 0xff,
    0xd1, 0xff, 0xff, 0x71, 0xff, 0xfd, 0xe0, 0x0,
    0x7, 0xc0, 0x0, 0xf, 0x80, 0x0, 0x1f, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x7c, 0x0, 0x0, 0xf8,
    0x0, 0x1, 0xf0, 0x0, 0x3, 0xe0, 0x0, 0x7,
    0xc0, 0x0, 0xf, 0x80, 0x0, 0x1f, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x7c, 0x7f, 0xff, 0x79, 0xff,
    0xff, 0x77, 0xff, 0xff, 0x7, 0xff, 0xfd, 0xc7,
    0xff, 0xf7, 0x80, 0x0, 0x1f, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x7c, 0x0, 0x0, 0xf8, 0x0, 0x1,
    0xf0, 0x0, 0x3, 0xe0, 0x0, 0x7, 0xc0, 0x0,
    0xf, 0x80, 0x0, 0x1f, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x7c, 0x0, 0x0, 0xf8, 0xff, 0xfe, 0xf3,
    0xff, 0xfe, 0xef, 0xff, 0xfe, 0xbf, 0xff, 0xfe,
    0x3f, 0xff, 0xf8,

    /* U+34 "4" */
    0x0, 0x0, 0x0, 0x60, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0xff, 0x80, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf7, 0xff, 0xf7, 0xf7, 0xff, 0xfd,
    0xc7, 0xff, 0xff, 0x1, 0xff, 0xff, 0x70, 0x7f,
    0xff, 0x78, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x3, 0xc0, 0x0, 0x0, 0xe0, 0x0, 0x0,
    0x30, 0x0, 0x0, 0x0,

    /* U+35 "5" */
    0x1f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x17, 0xff,
    0xff, 0x1d, 0xff, 0xff, 0xf, 0x7f, 0xff, 0x7,
    0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3d, 0xff, 0xfc, 0x1d, 0xff, 0xff, 0x1, 0xff,
    0xff, 0xc0, 0x7f, 0xff, 0xdc, 0x1f, 0xff, 0xde,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0xff, 0xfe,
    0xf0, 0xff, 0xff, 0xb8, 0xff, 0xff, 0xe8, 0xff,
    0xff, 0xf8, 0x3f, 0xff, 0xf8,

    /* U+36 "6" */
    0x1f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x17, 0xff,
    0xff, 0x1d, 0xff, 0xff, 0xf, 0x7f, 0xff, 0x7,
    0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3d, 0xff, 0xfc, 0x1d, 0xff, 0xff, 0x1, 0xff,
    0xff, 0xc7, 0x7f, 0xff, 0xdf, 0xdf, 0xff, 0xdf,
    0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0,
    0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff,
    0x80, 0x0, 0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0,
    0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc,
    0x0, 0x7, 0xfe, 0x0, 0x3, 0xfe, 0xff, 0xfe,
    0xfe, 0xff, 0xff, 0xba, 0xff, 0xff, 0xe8, 0xff,
    0xff, 0xf8, 0x3f, 0xff, 0xf8,

    /* U+37 "7" */
    0x1f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x17, 0xff,
    0xff, 0x5d, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xf8, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x30, 0x0,
    0x0, 0x38, 0x0, 0x0, 0x3c, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x0,
    0xf0, 0x0, 0x0, 0x38, 0x0, 0x0, 0x8,

    /* U+38 "8" */
    0x1f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x17, 0xff,
    0xff, 0x5d, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7,
    0xfd, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0x71, 0xff,
    0xff, 0xc7, 0x7f, 0xff, 0xdf, 0xdf, 0xff, 0xdf,
    0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0,
    0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff,
    0x80, 0x0, 0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0,
    0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc,
    0x0, 0x7, 0xfe, 0x0, 0x3, 0xfe, 0xff, 0xfe,
    0xfe, 0xff, 0xff, 0xba, 0xff, 0xff, 0xe8, 0xff,
    0xff, 0xf8, 0x3f, 0xff, 0xf8,

    /* U+39 "9" */
    0x1f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x17, 0xff,
    0xff, 0x5d, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7,
    0xfd, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0x71, 0xff,
    0xff, 0xc0, 0x7f, 0xff, 0xdc, 0x1f, 0xff, 0xde,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0xff, 0xfe,
    0xf0, 0xff, 0xff, 0xb8, 0xff, 0xff, 0xe8, 0xff,
    0xff, 0xf8, 0x3f, 0xff, 0xf8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 522, .box_w = 19, .box_h = 5, .ofs_x = 7, .ofs_y = 17},
    {.bitmap_index = 12, .adv_w = 0, .box_w = 5, .box_h = 5, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 522, .box_w = 25, .box_h = 40, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 522, .box_w = 5, .box_h = 37, .ofs_x = 24, .ofs_y = 1},
    {.bitmap_index = 165, .adv_w = 522, .box_w = 25, .box_h = 40, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 522, .box_w = 23, .box_h = 40, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 522, .box_w = 25, .box_h = 37, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 521, .adv_w = 522, .box_w = 25, .box_h = 40, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 522, .box_w = 25, .box_h = 40, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 522, .box_w = 25, .box_h = 38, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 890, .adv_w = 522, .box_w = 25, .box_h = 40, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 522, .box_w = 25, .box_h = 40, .ofs_x = 4, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 0, 2, 3, 4, 5, 6,
    7, 8, 9, 10, 11
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 45, .range_length = 13, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 13, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
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
lv_font_t Number_40 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 40,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -5,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if NUMBER_40*/
