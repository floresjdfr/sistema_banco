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

bool ProcesarCompra::verificaSaldo(float monto, Tarjeta& tarjeta){
    return tarjeta.getSaldo() >= monto;
}

void ProcesarCompra::procesarTransaccion(float monto, string lugar, Fecha* fecha, Tarjeta& tarjeta){
    if(this->verificaSaldo(monto, tarjeta)){ //Verifica que tenga salgo primero
        tarjeta.setSaldo(tarjeta.getSaldo() - monto); 
        tarjeta.getEstadoCuenta()->agregar(new Voucher(monto, lugar, fecha));
    }
    
}
