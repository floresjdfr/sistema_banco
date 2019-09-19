/* 
 * File:   PocesarCompra.cpp
 * Author: JoseDavid
 * 
 * Created on 19 de septiembre de 2019, 10:37 AM
 */

#include "ProcesarCompra.h"

ProcesarCompra::ProcesarCompra() {
    
}


ProcesarCompra::~ProcesarCompra() {
    
}

bool ProcesarCompra::verificaSaldo(float monto, TarjetaCredito& tarjeta){
    return tarjeta.getSaldo() >= monto;
}

void ProcesarCompra::procesarTransccion(float monto, string lugar, Fecha* fecha, TarjetaCredito& tarjeta){
    if(this->verificaSaldo(monto, tarjeta)){
        tarjeta.setSaldo(tarjeta.getSaldo()-monto);
    }
    
}
