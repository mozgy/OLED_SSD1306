
#include <Wire.h>
#include "OLED_SSD1306.h"

OLED_SSD1306 oled(0x3C);

void setup() {
  Wire.begin();
  delay(500);
  oled.Init();
}

void loop() {
  oled.SendStrXY("a pointer to wire", 1, 1);
  delay(10000);
}

