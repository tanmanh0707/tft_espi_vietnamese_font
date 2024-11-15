#include "vietnamese_font.h"
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup()
{
  tft.begin();
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  String test0 = "Việt Nam";

  tft.loadFont(VNCOURB20);
  tft.showFont(2000);
  tft.setCursor(0,100);
  tft.println(test0);
}

void loop(){}
