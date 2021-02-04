//Constantes//
const int sensorDerecho = 2;
const int sensorIzquierdo = 3;


void setup(){
    attachInterrupt(digitalPinToInterrupt(sensorDerecho), contadorInterrupcionIzquierdo, RISING);
    attachInterrupt(digitalPinToInterrupt(sensorIzquierdo), contadorInterrupcionIzquierdo, RISING);
}

void loop(){

}

void contadorInterrupcionDerecho(){

}

void contadorInterrupcionIzquierdo(){
    
}