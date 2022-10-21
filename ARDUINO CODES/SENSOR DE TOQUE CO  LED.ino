#include <CapacitiveSensor.h1>; //nome da blibliotec

// o "4 é a porta é encio de sinal"
// o "2 é a porta de recpsão de sinal"
CapacitiveSensor capSensor = CapacitiveSensor(4, 2); //objeto,nome= inicio (valor)

// essa variavel sera usada o limite de capasiancia
int threshold = 1000;

// indentificar a porta que o lede tava conctado
const int ledPin = 12;

//setap executada apenas uma vez qundo ligo o arduino
void setup() {

//COMUNICAÇÃO SERIAL "VELOCIDADE"
  Serial.begin(9600);

  //PORTA DE SAIDA LIGA OU DESLIGA O SET
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // ELE EXECUTA A FUNÇÃO IFINITAMENTE
  //LONG ARMAZENA VALORES EM "DECIMAIS"
  long sensorValue = capSensor.capacitiveSensor(30);

  // Envia infomações para o computador
  Serial.println(sensorValue);

  // "if=verificação" verifica se o  valor recebido é maior que o valor limite
  if (sensorValue > threshold) {
    // se for maior ele vai lifar a luz
    digitalWrite(ledPin, HIGH);
  }
  // "else=não"se não for maior que o limite ela não liga
  else {
    // turn the LED off
    digitalWrite(ledPin, LOW);
  }
  
//delay para as leituras
  delay(10);
}
