#include <Adafruit_NeoPixel.h>

const int PIN = 6;
int i;
 Adafruit_NeoPixel strip = Adafruit_NeoPixel(7, PIN, NEO_GRB + NEO_KHZ800);
int color;

 void setup() 
 {
 strip.begin();
 strip.show();
 }
 void loop() 
 {
   LEDr();
   delay(350);
   LEDg();
   delay(350);
   LEDw();
 }
void LEDr()
{
  for (int i=0; i<7 ; i++)
  {delay(50);
  strip.setPixelColor(i, 255, 0, 0);
  strip.show();
  }
}
void LEDg()
{
  for (int i=0; i<7 ; i++)
  {delay(50);
  strip.setPixelColor(i, 0, 255, 0);
  strip.show();
  }
}
void LEDw()
{
  for (int i=0; i<7 ; i++)
  {delay(50);
  strip.setPixelColor(i, 0, 0, 0);
  strip.show();
  }
}
  
  
