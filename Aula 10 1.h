#include <Wire.h>
//Arduino 1
void setup() 
{
 Wire.begin();
}

 byte x = 0;

 void loop() 
{
 Wire.beginTransmission(8);
 Wire.write("x is ");
 Wire.write(x);
 Wire.endTransmission();
 x++;
 delay(500);
}


#include <Wire.h>
//Arduino 2
void setup()
{
 Wire.begin(8);
 Wire.onReceive(receiveEvent);
 Serial.begin(9600);
}
 void loop() 
{
 delay(100);
}
 void receiveEvent(int howMany) 
{
 while (1 < Wire.available()) 
 {
 char c = Wire.read();
 Serial.print(c);
 }
 int x = Wire.read();
 Serial.println(x);
}
