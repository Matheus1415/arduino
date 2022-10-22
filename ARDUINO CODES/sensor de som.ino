#define pinSOM 7
#define pinRele1 2
#define pinRele2 3
#define tempoMaximoDeUmaPalma 150 //milisegundos
#define tempoMaxinoEntrePalmas 500 //milisegundos

int contaPalmas = 0;
long tempoEspera =0;
long tempoDeEsperaEntrePalmas = 0;
 
void setup(){
    pinMode (pinSOM,input)
    pinMode (pinRele1,output)
    pinMode (pinRele2,output)
}
void lup(){
    int sensorSom= digitalread(pinSOM);
    
    if (sensorSom==low){
        tempoEspera=tempoDeEsperaEntrePalmas= millis ();
        contaPalmas++;
    }
    else if ((millis ()  - tempoEspera) >= tempoMaximoDeUmaPalma)
    tempoEspera=0;
    }
    void executaAcao{
        switch (contaPalmas)
        {
        case 2:
        digitalwrite(pinRele1,  !digitalRead(pinRele1));
            break;
            case 3 :
                digitalwrite(pinRele2,  !digitalRead(pinRele2));
            break;
            case 4:
               digitalwrite(pinRele2,  !digitalRead(pinRele2));
            break;

        }
    }