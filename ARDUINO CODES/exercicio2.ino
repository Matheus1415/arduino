#include <Servo.h>

/*
     Q0471-Sketch.ino
     AUTOR:   BrincandoComIdeias
     LINK:    https://www.youtube.com/brincandocomideias ; https://cursodearduino.net/
     COMPRE:  https://www.arducore.com.br/
     SKETCH:  Registro de tempo de queda de objeto
     DATA:    24/06/2019
	 	 
	 ATUALIZACAO: em ../../.... por .... o que .......
*/
Servo garra;

void setup() {
  Serial.begin(9600);
  garra.attach(9);

  garra.write(160);
  delay(5000);
  garra.write(102);
  unsigned long tempoIni = millis();

  while (analogRead(A0) > 600);
  unsigned long tempo1 = millis();

  while (analogRead(A1) > 600);
  unsigned long tempo2 = millis();

  Serial.print("Tempo1: ");
  Serial.print(tempo1 - tempoIni);
  Serial.println("(ms) ");

  Serial.print("Tempo2: ");
  Serial.print(tempo2 - tempo1);
  Serial.println("(ms) ");

}

void loop() {
  //Serial.print(analogRead(A0));
  //Serial.print("  ");
  //Serial.print(analogRead(A1));
  //Serial.print("  ");

  //garra.write(map(analogRead(A5),0,1023,0,180));
  //Serial.println(map(analogRead(A5),0,1023,0,180));
}
