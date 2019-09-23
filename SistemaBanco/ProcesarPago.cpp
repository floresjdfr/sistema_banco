

#include "ProcesarPago.h"

ProcesarPago::ProcesarPago() {
    
}

ProcesarPago::~ProcesarPago() {
    
}

bool ProcesarPago::verificarPago(float montoP, Tarjeta& cuenta){
    return montoP == cuenta.getSaldo();
}

void ProcesarPago::procesarTransaccion(float montoP, string des, Fecha* fechaP, Tarjeta& cuenta){
    if(this->verificarPago(montoP, cuenta) && cuenta.getMoroso()){
        cuenta.setSaldo(cuenta.getSaldo() + montoP);
        cuenta.getPagos()->agregar(new Pago(montoP, des, fechaP));
    }
}


