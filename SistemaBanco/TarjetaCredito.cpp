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
    Transacciones* transacciones = NULL;
}

TarjetaCredito::~TarjetaCredito() {
}



/*Metodos*/

void TarjetaCredito::nuevaCompra(string lugar, float monto, Fecha* fecha)/*Recibe por parametro el lugar de compra
                                 o pago del servicio y monto de la 
                                 transaccion*/
{
    Compra* t = new Compra(monto,lugar, fecha);
    transacciones->agregar(t);
}


void TarjetaCredito::ganarPuntos(float monto){ /*A partir de 10 mil colones se 
                                                gana un punto por cada
                                                mil colones*/
    if(monto <= 10000){
        puntos += monto / 1000;
    }
}