//Leitura de distância com o sensor HCSR04
#include <Ultrasonic.h>
 Ultrasonic ultrassom(8,7); // define o nome do sensor(ultrassom)
//e onde esta ligado o trig(8) e o echo(7) respectivamente
 float distancia = 0;
 int ledverde = 4;
 int ledvermelho = 6;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
 void setup() {
 Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
 pinMode(ledverde, OUTPUT);
 pinMode(ledvermelho, OUTPUT);
 }
 
// Função que se repete infinitamente quando a placa é ligada
 void loop()
 {
   distancia = ultrassom.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em      
   Serial.print(distancia); //imprime o valor da variável distancia
   Serial.println("cm");
   delay(1000);
   if (distancia >10){
    digitalWrite(ledverde, HIGH);
    digitalWrite(ledvermelho, LOW);
   }
    else{
      digitalWrite(ledverde, LOW);
    digitalWrite(ledvermelho, HIGH);
   }
 }  
