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
  AzulLEDs();
  VerLEDs();
  RoxoLEDs();
}

void AzulLEDs()
{ 
  for (int x=0; x<=23 ; x++)
  {
  strip.setPixelColor(x, 0, 0, 255);
  strip.show();
  }
  for (int x=0; x<=23 ; x++)
  {
  strip.setPixelColor(x, 0, 0, 0);
  strip.show();
  }
}
void VerLEDs()
{
   for (int n=24; n<=39; n++)
   {
     strip.setPixelColor(n, 255, 0, 0);
     strip.show();
   for (int x=0; x<=23 ; x++)
  {
  strip.setPixelColor(x, 0, 0, 255);
  strip.show();
  }
   for (int x=0; x<=23 ; x++)
  {
  strip.setPixelColor(x, 0, 0, 0);
  strip.show();
  }
   }
  for (int n=24; n<=39; n++)
   {
     strip.setPixelColor(n, 255, 0, 0);
     strip.show();
  }
   
}
void RoxoLEDs()
{
   for (int i=39; i<=46; i++)
   {
     strip.setPixelColor(i, 255, 0, 255);
     strip.show();
     
      for (int n=24; n<=39; n++)
   {
     strip.setPixelColor(n, 255, 0, 0);
     strip.show();
   for (int x=0; x<=23 ; x++)
  {
  strip.setPixelColor(x, 0, 0, 255);
  strip.show();
  }
   for (int x=0; x<=23 ; x++)
  {
  strip.setPixelColor(x, 0, 0, 0);
  strip.show();
  }
         for (int n=24; n<=39; n++)
   {
     strip.setPixelColor(n, 255, 0, 0);
     strip.show();
  }
   }
  for (int i=39; i<=46; i++)
   {
     strip.setPixelColor(i, 0, 0, 0);
     strip.show();
   }
}
}
