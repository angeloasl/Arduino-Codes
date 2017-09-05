#include <Adafruit_NeoPixel.h>

const int PIN = 9;
int i;
 Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, PIN, NEO_GRB + NEO_KHZ800);
int color;

 void setup() 
 {
 strip.begin();
 strip.show();
 }

void loop()
{
  varreduraLEDs();
}

void varreduraLEDs()
{
  for (int i=0; i<16 ; i++)
  {delay(50);
  strip.setPixelColor(i, 255, 0, 0);
  strip.show();
  }
  delay(800);
  {
  for (int n=0; n<16 ; n++)
  {delay(50);
  strip.setPixelColor(n, 0, 255, 0);
  strip.show();
  }
  delay(800);
  for (int x=0; x<16 ; x++)
  {delay(50);
  strip.setPixelColor(x, 0, 0, 0);
  strip.show();
  }
  }
}
