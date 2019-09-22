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

bool ProcesarPago::verificarPago(float montoP, float montoA){
    return montoP == montoA;
}

void ProcesarPago::procesarTransaccion(float montoP, string des, Fecha* fechaP, Tarjeta& cuenta){
    Pago* p = new Pago(des, fechaP, cuenta);
    if (this->verificarPago(montoP, p->getMontoAcumulado())){
        cuenta.setSaldo(cuenta.getSaldo() + montoP);
        p->setMonto(montoP);
        p->setMontoAcumulado(0.0);
    }
}


