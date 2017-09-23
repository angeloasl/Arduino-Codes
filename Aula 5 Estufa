#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int hora = 0;
float senHora;
int valorAnalogico = 0;
float tensao = 0;
float pi = 3.14;
float luz;
float nuvem;

void setup() {
  lcd.begin(16, 2);
  pinMode(A8, INPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
float rescale(float x, float in_min, float in_max, float out_min, float out_max) {
return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
void loop() {
  senHora = hora;
  senHora = rescale(senHora, 0, 24, 3*pi/2, 7*pi/2 );
  senHora = (1 + sin(senHora))/2.0;
  senHora = round(senHora * 10000);
  senHora = map(senHora, 0, 10000, 0, 100);
  valorAnalogico = analogRead(A8);
  tensao = (5.0/1023)* valorAnalogico;
  tensao = map(tensao, 0, 5, 0, 255);
  luz = round(255*(senHora/100));
  nuvem = round((tensao*(senHora/100)));
  analogWrite(10, luz);
  analogWrite(9, nuvem);
  analogWrite(6, luz - nuvem);
  delay(2000);
 if (hora < 23)
 {
   hora = hora + 1; 
 }
 else
 {
   hora = 0;
 }
}
