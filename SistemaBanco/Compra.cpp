/* 
 * File:   Compra.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 6:21 PM
 */

#include "Compra.h"
#include "TarjetaCredito.h"

Compra::Compra() {
    
}

void Compra::realizaTransaccion(float monto, string lugar, Fecha* fecha,
        TarjetaCredito* tarjeta){
    
    if(tarjeta->getSaldo() != 0.0 && tarjeta->getSaldo() >= monto){
        tarjeta->setSaldo(tarjeta->getSaldo() - monto);
    }
    else{
        cout << "Fondos insuficientes" << endl;
    }
}
