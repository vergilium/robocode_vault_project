#include "vault.h"

U8G2_ST7920_128X64_2_HW_SPI u8g2(U8G2_R1, D8);

void setup(void)
{
  u8g2.begin();
}

void drawEyeOpen(int h = 64)
{
  u8g2.setDrawColor(1);
  u8g2.drawRBox(0, 0, h, 30, 5);
  u8g2.setDrawColor(0);
  u8g2.drawRBox(94, 15, 20, 10, 3);
  u8g2.setDrawColor(1);
  u8g2.drawRBox(64, 34, h, 30, 5);
  u8g2.setDrawColor(0);
  u8g2.drawRBox(94, 49, 20, 10, 3);
}

void drawEyeClose()
{
  u8g2.setDrawColor(1);
  u8g2.drawRBox(70, 0, 14, 30, 3);
  u8g2.setDrawColor(1);
  u8g2.drawRBox(70, 34, 14, 30, 3);
}

void loop(void)
{

  u8g2.firstPage();
  for (int i = 0; i <= 50; i += 5)
  {
    u8g2.firstPage();
    do
    {
      drawEyeOpen(14 + i);
    } while (u8g2.nextPage());
  }
  delay(random(4, 20) * 500);

  for (int i = 0; i <= 50; i += 5)
  {
    u8g2.firstPage();
    do
    {
      drawEyeOpen(64 - i);
    } while (u8g2.nextPage());
  }
}
