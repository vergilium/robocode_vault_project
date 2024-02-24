#include "gfx.h"

GFX::GFX()
{
  _u8g2.begin();
}

void GFX::drawEye(uint8_t dir, uint8_t h)
{
  h = h < GFX_EYE_HEIGHT ? h : GFX_EYE_HEIGHT;
  uint8_t heightPos = GFX_EYE_HEIGHT - h;
  heightPos = heightPos < GFX_EYE_HEIGHT - GFX_EYE_MIN_HEIGHT ? heightPos : GFX_EYE_HEIGHT - GFX_EYE_MIN_HEIGHT;

  _u8g2.firstPage();
  do
  {
    _u8g2.setDrawColor(GFX_COLOR_WHITE);
    _u8g2.drawRBox(0, heightPos, GFX_EYE_WIDTH, h, 5);
    _u8g2.setDrawColor(0);
    _u8g2.drawRBox(dir, 15, GFX_EYE_PUPIL_WIDTH, GFX_EYE_PUPIL_HEIGHT, 3);
    _u8g2.setDrawColor(GFX_COLOR_WHITE);
    _u8g2.drawRBox(34, heightPos, GFX_EYE_WIDTH, h, 5);
    _u8g2.setDrawColor(0);
    _u8g2.drawRBox(34 + dir, 15, GFX_EYE_PUPIL_WIDTH, GFX_EYE_PUPIL_HEIGHT, 3);
    _u8g2.setDrawColor(GFX_COLOR_WHITE);
    _u8g2.drawFilledEllipse(32, 80, 20, 10);
  } while (_u8g2.nextPage());
}