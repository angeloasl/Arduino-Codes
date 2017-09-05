#include <Adafruit_NeoPixel.h>

const int PIN = 10;
int i;
int n;
int x;
 Adafruit_NeoPixel strip = Adafruit_NeoPixel(47, PIN, NEO_GRB + NEO_KHZ800);
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
  for (int x=0; x<=24 ; x++)
  {delay(10);
  strip.setPixelColor(x, 0, 0, 255);
  strip.show();
   if (x=24)
   {strip.setPixelColor(x, 0, 0, 0);
  strip.show();
   }
  } 
  for (int n=24; n<=40 ; n++)
  {delay(600);
  strip.setPixelColor(n, 0, 255, 0);
  strip.show();
   if (n=40)
   {strip.setPixelColor(x, 0, 0, 0);
  strip.show();
   }
  }
  for (int i=40; i<=48 ; i++)
  {delay(3600);
  strip.setPixelColor(i, 255, 0, 0);
  strip.show();
   if (i=48)
   {strip.setPixelColor(x, 0, 0, 0);
  strip.show();
   }
  }
{
 
 
  }
}
