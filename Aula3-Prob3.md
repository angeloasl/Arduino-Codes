#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

 
void setup() {
 lcd.begin(16, 2); 
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}
  
  void loop() {
    int vagas1 = 0;
    int vagas2 = 0;
    
    if (digitalRead(A0) == 1)
    {
      vagas2++;
    }
    if (digitalRead(A1) == 1)
    {
     vagas2++;
    }
    if (digitalRead(A2) == 1)
    {
     vagas1++;
    }
    if (digitalRead(A3) == 1)
    {
      vagas1++;
    }
    
   if(digitalRead(A0) == HIGH)
   {
     digitalWrite(10,LOW);
     digitalWrite(13,HIGH);
    }
   else
    {
      digitalWrite(10,HIGH);
      digitalWrite(13,LOW);
    }
   if(digitalRead(A1) == HIGH)
    {
     digitalWrite(8,LOW);
     digitalWrite(9,HIGH);
    }
    else
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
    }
       if(digitalRead(A2) == HIGH)
   {
     digitalWrite(6,LOW);
     digitalWrite(7,HIGH);
    }
    else
    {
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
    }
       if(digitalRead(A3) == HIGH)
   {
     digitalWrite(1,LOW);
     digitalWrite(0,HIGH);
    }
    else
    {
      digitalWrite(1,HIGH);
      digitalWrite(0,LOW);
    }
   
    if (digitalRead(A0)==LOW && digitalRead(A1)==LOW && digitalRead(A2)==LOW && digitalRead(A3)== LOW)
    {
      lcd.clear();
      lcd.home();
      lcd.print("LOTADOS");
      delay(1000);
      
    }
    else
    { 
      lcd.clear(); 
      lcd.print(vagas1);
    lcd.print("<(Vagas)>");
      lcd.print(vagas2);
    delay(1000);
    }
    
  }
