#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

 
void setup() {
 lcd.begin(16, 2); 
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}
  
  void loop() 
  {
    if (digitalRead(A0) || digitalRead(A1) || digitalRead(A2) || digitalRead(A3) == 1)
    {
      digitalWrite(0,LOW);
      digitalWrite(1,HIGH);
    }
   
   else 
    {
      digitalWrite(0,HIGH);
      digitalWrite(1,LOW);
    }
    
    int pessoas = 0;
    
    if (digitalRead(A0) == 1)
    {
      pessoas++;
    }
    if (digitalRead(A1) == 1)
    {
     pessoas++;
    }
    if (digitalRead(A2) == 1)
    {
     pessoas++;
    }
    if (digitalRead(A3) == 1)
    {
      pessoas++;
    }
    
   if(pessoas >= 2)
   {
     digitalWrite(6,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(10,HIGH);
   }
    else
    {
     digitalWrite(6,LOW);
     digitalWrite(8,LOW);
     digitalWrite(10,LOW);
    }
    
    lcd.home();
    lcd.print("Pessoas");
    lcd.print(pessoas);
    
  }
