// 4.17.0 0xcefdaada
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_check_buttons_check_mark_active[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_ACTIVE_ID = 0, Size: 44x44 pixels
extern const unsigned char image_blue_check_buttons_check_mark_inactive[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_INACTIVE_ID = 1, Size: 44x44 pixels
extern const unsigned char image_blue_check_buttons_check_mark_normal[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_NORMAL_ID = 2, Size: 44x44 pixels
extern const unsigned char image_blue_check_buttons_check_mark_pressed[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_PRESSED_ID = 3, Size: 44x44 pixels
extern const unsigned char image_blue_slider_vertical_small_indicators_slider3_vertical_round_nob[]; // BITMAP_BLUE_SLIDER_VERTICAL_SMALL_INDICATORS_SLIDER3_VERTICAL_ROUND_NOB_ID = 4, Size: 34x54 pixels
extern const unsigned char image_blue_slider_vertical_small_slider3_vertical_round_back[]; // BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_BACK_ID = 5, Size: 20x172 pixels
extern const unsigned char image_blue_slider_vertical_small_slider3_vertical_round_fill[]; // BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_FILL_ID = 6, Size: 20x172 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_check_buttons_check_mark_active, 0, 44, 44, 3, 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_check_buttons_check_mark_inactive, 0, 44, 44, 3, 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_check_buttons_check_mark_normal, 0, 44, 44, 3, 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_check_buttons_check_mark_pressed, 0, 44, 44, 3, 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_vertical_small_indicators_slider3_vertical_round_nob, 0, 34, 54, 5, 7, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_vertical_small_slider3_vertical_round_back, 0, 20, 172, 0, 10, 20, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 152, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_vertical_small_slider3_vertical_round_fill, 0, 20, 172, 0, 10, 20, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 152, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase