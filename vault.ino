#include "vault.h"

GFX gfx = GFX();

void setup(void)
{
}

void loop(void)
{

  for (int i = 0; i <= 50; i += 5)
  {
      gfx.drawEye(GFX_EYE_POS_CENTER, 10 + i);
  }
  delay(random(4, 20) * 500);

  for (int i = 0; i <= 50; i += 5)
  {
    gfx.drawEye(GFX_EYE_POS_CENTER, 60 - i);
  }

  for (int i = 0; i <= 50; i += 5)
  {
    gfx.drawEye(GFX_EYE_POS_RIGHT, 10 + i);
  }
  delay(random(4, 20) * 500);

  for (int i = 0; i <= 50; i += 5)
  {
    gfx.drawEye(GFX_EYE_POS_RIGHT, 60 - i);
  }

  for (int i = 0; i <= 50; i += 5)
  {
    gfx.drawEye(GFX_EYE_POS_LEFT, 10 + i);
  }
  delay(random(4, 20) * 500);

  for (int i = 0; i <= 50; i += 5)
  {
    gfx.drawEye(GFX_EYE_POS_LEFT, 60 - i);
  }
}
