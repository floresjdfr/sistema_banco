/* 
 * File:   procesaPago.cpp
 * Author: Jose David
 * 
 * Created on September 19, 2019, 11:37 PM
 */

#include "ProcesarPago.h"

ProcesarPago::ProcesarPago() {
}



ProcesarPago::~ProcesarPago() {
}

void ProcesarPago::procesarTransaccion(float monto, Fecha* fecha, Tarjeta& tarjeta){
    if(this->verificaPago(monto, tarjeta)){
        tarjeta.setSaldo(tarjeta.getSaldo() + monto);
        tarjeta.getEstadoCuenta()->agregar(new Voucher(monto, " ", fecha));
    }
}

bool ProcesarPago::verificaPago(float monto, Tarjeta& tarjeta){
    return (tarjeta.getSaldo() + monto) <= tarjeta.getSaldoMaximo();
}