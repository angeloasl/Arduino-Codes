//Leitura de distância com o sensor HCSR04
#include <Ultrasonic.h>
 Ultrasonic ultrassom(8,7); // define o nome do sensor(ultrassom)
 Ultrasonic ultrassomCarro(9, 10);
 Ultrasonic ultrassomPeoples(11, 12);
//e onde esta ligado o trig(8) e o echo(7) respectivamente
 float distancia_Porta = 0;
 float distancia_Portao = 0;
 bool dog = false;
 int ledCaoGaragem = 5;
 int ledCaoCasa = 3;
 int ledverde = 4;
 int ledvermelho = 6;
 int estadoPortao = 0;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
 void setup() {
 pinMode(ultrassomPorta, INPUT);
 pinMode(ultrassomPortao, INPUT); 
 Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
 pinMode(ledverde, OUTPUT);
 pinMode(ledvermelho, OUTPUT);
 }
 
// Função que se repete infinitamente quando a placa é ligada
 void loop()
 {
   distancia_PortaCasa = ultrassomPortaCasa.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em
   distancia_PortaGaragem = ultrassomPortaGaragem.Ranging(CM);
   distancia_PortaoRua = ultrassomPortaoRua.Ranging(CM);
   distancia_PortaoGaragem = ultrassomPortaoGaragem.Ranging(CM);      
   
   if ((distancia_PortaCasa >=11)&&(distancia_PortaCasa <=15))
   {
    dog = false;
    digitalWrite(ledCaoCasa, HIGH);
    digitalWrite(ledCaoGaragem, LOW);
   }
   if ((distancia_PortaGaragem >=11)&&(distancia_PortaGaragem <=15))
   {
    dog = true;
    digitalWrite(ledCaoCasa, LOW);
    digitalWrite(ledCaoGaragem, HIGH);
   }

   if(estadoPortao == 0) // Portão totalmente fechado
   {
    while(controle == LOW && distancia < 24)
    {
     digitalWrite(ledVerde, HIGH);
     digitalWrite(ledVermelho, LOW);
     digitalWrite(ledAmarelo, LOW);
    }
    if(controle == HIGH)
     estadoPortao = 2;
   }
   if(estadoPortao == 1) // Portão aberto
   {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledAmarelo, LOW);
    if((controle == HIGH) || (dog == true))
     estadoPortao = 3; 
   }
   if(estadoPortao == 2) // Portão abrindo
   {
    tempo = millis();
    while(millis() - tempo < 3000)
    {
     digitalWrite(ledVerde, LOW);
     digitalWrite(ledVermelho, LOW);
     digitalWrite(ledAmarelo, HIGH);
     if(controle == HIGH)
      estadoPortao = 1;
     if(dog == true)
      estadoPortao = 3;
     if(estadoPortao != 2)
      break; 
    }
    if (estadoPortao == 2)
     estadoPortao = 1;   
   }
   if(estadoPortao == 3) // Portão fechando
   {
    while(distancia_PortaoGaragem > 25)
    {
     digitalWrite(ledVerde, LOW);
     digitalWrite(ledVermelho, LOW);
     digitalWrite(ledAmarelo, HIGH);
     delay(250);    
     digitalWrite(ledAmarelo, LOW);
     if(controle == HIGH)
      estadoPortao = 1;
     if(estadoPortao != 3)
      break; 
    }
    if(distancia_PortaoGaragem < 24)
      
   }
  }
