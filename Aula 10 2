#include <Wire.h>
//Arduino 1

 void setup() 
{
 Wire.begin();
 Serial.begin(9600);
}

 void loop() 
{
 Wire.requestFrom(8, 6);

 while (Wire.available()) 
 {
 char c = Wire.read();
 Serial.print(c);
 }

 delay(500);
}

#include <Wire.h>
//Arduino 2
 void setup() 
{
 Wire.begin(8);
 Wire.onRequest(requestEvent);
}

 void loop() 
{
 delay(100);
 }

 void requestEvent() 
 {
 Wire.write("hello ");
}
