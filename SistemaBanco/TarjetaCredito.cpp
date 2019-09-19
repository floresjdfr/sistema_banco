/* 
 * File:   TarjetaCredito.cpp
 * Author: Jose David
 * 
 * Created on September 9, 2019, 5:38 PM
 */

#include "TarjetaCredito.h"

TarjetaCredito::TarjetaCredito() {
    float saldo = 0.0;
    Fecha* fechaCorte = NULL;
    Fecha* fechaLimite = NULL;
}

TarjetaCredito::~TarjetaCredito() {
}

//Sets

void TarjetaCredito::setSaldo(float Saldo){
    saldo = Saldo;
}

//Gets

float TarjetaCredito::getSaldo(){
    return saldo;
}


/*Metodos*/




void TarjetaCredito::ganarPuntos(float monto){ 
    if(monto <= 10000){
        puntos += monto / 1000;
    }
}