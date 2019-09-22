/* 
 * File:   ProcesarPagoMinimo.cpp
 * Author: Jose David
 * 
 * Created on September 21, 2019, 1:35 PM
 */

#include "ProcesarPagoMinimo.h"
#include "Pago.h"

ProcesarPagoMinimo::ProcesarPagoMinimo() {
    
}

ProcesarPagoMinimo::~ProcesarPagoMinimo() {
    
}

bool ProcesarPagoMinimo::verificarPago(float montoP, float montoA){
    return montoP < montoA;
}

void ProcesarPagoMinimo::procesarTransaccion(float montoP, string des, Fecha* fechaP, Tarjeta& cuenta){
    Pago* p = new Pago(des, fechaP, cuenta);
    if (this->verificarPago(montoP, p->getMontoAcumulado()) /*&& fechaP > p->getFecha()*/){
        cuenta.setSaldo(cuenta.getSaldo() + montoP);
        p->setMonto(montoP);
        p->setMontoAcumulado(p->getMontoAcumulado() - montoP);
    }
}
