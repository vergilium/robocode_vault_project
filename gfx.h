#pragma once
#ifndef GFX_H
#define GFX_H

#define GFX_COLOR_WHITE 1
#define GFX_COLOR_BLACK 0

#define GFX_EYE_WIDTH         30
#define GFX_EYE_HEIGHT        60
#define GFX_EYE_MIN_HEIGHT    10
#define GFX_EYE_PUPIL_WIDTH   10
#define GFX_EYE_PUPIL_HEIGHT  15

#define GFX_EYE_POS_CENTER  GFX_EYE_WIDTH / 2 - GFX_EYE_PUPIL_WIDTH / 2
#define GFX_EYE_POS_RIGHT   GFX_EYE_WIDTH / 2 + GFX_EYE_PUPIL_WIDTH / 2 - 2
#define GFX_EYE_POS_LEFT    GFX_EYE_WIDTH / 2 - GFX_EYE_PUPIL_WIDTH - 4


#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

class GFX{
  public:
    GFX();
    void drawEye(uint8_t dir, uint8_t h = GFX_EYE_HEIGHT);

  private:
    U8G2_ST7920_128X64_2_HW_SPI _u8g2 = U8G2_ST7920_128X64_2_HW_SPI(U8G2_R1, D8);
};

#endif // GFX_H