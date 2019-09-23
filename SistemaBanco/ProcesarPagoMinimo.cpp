

#include "ProcesarPagoMinimo.h"
#include "Pago.h"

ProcesarPagoMinimo::ProcesarPagoMinimo() {
    
}

ProcesarPagoMinimo::~ProcesarPagoMinimo() {
    
}

bool ProcesarPagoMinimo::verificarPago(float montoP, Tarjeta& cuenta){
    return montoP >= (cuenta.getSaldo() * 2/3);
}

void ProcesarPagoMinimo::procesarTransaccion(float montoP, string des, Fecha* fechaP, Tarjeta& cuenta){
    if(this->verificarPago(montoP, cuenta) && !cuenta.getMoroso()){
        cuenta.setSaldo(cuenta.getSaldo() + montoP);
        cuenta.getPagos()->agregar(new Pago(montoP, des, fechaP));
    }
}
