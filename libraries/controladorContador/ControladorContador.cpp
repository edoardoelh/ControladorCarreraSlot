/*
  ControladorContador.cpp - Libreria que gestiona 
  las vueltas realizadas por el coche.
  Creado por Edgar Lopez Herrera, Febrero, 2021.
*/

#include "Arduino.h"
#include "ControladorContador.h"

ControladorContador::ControladorContador(){
  numVueltas = 0;
  //attachInterrupt(digitalPinToInterrupt(2), sumarVuelta, RISING);
}

void ControladorContador::sumarVuelta(){
    //this->numVueltas++;
    //this->calcularTiempoVuelta();
}

void ControladorContador::calcularTiempoVuelta(long millisActual){
    
}