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



/*Metodos*/




void TarjetaCredito::ganarPuntos(float monto){ /*A partir de 10 mil colones se 
                                                gana un punto por cada
                                                mil colones*/
    if(monto <= 10000){
        puntos += monto / 1000;
    }
}