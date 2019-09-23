#include "ProcesarPagoCuota.h"
#include "Pago.h"

ProcesarPagoCuota::ProcesarPagoCuota() {
    
}

ProcesarPagoCuota::~ProcesarPagoCuota() {
    
}

bool ProcesarPagoCuota::verificarPago(float montoP, Tarjeta& cuenta){
    IteradorLista<Compra>* iterador = cuenta.getCompras()->getIterador();
    
    for(iterador->primero(); iterador->hayMas(); iterador->siguiente()){
        return montoP == iterador->getActual()->getMontoPagoMensual();
    }
}

void ProcesarPagoCuota::procesarTransaccion(float montoP, string des, Fecha* fechaP, Tarjeta& cuenta){
    if(this->verificarPago(montoP, cuenta) && !cuenta.getMoroso()){
        cuenta.setSaldo(cuenta.getSaldo() + montoP);
        cuenta.getPagos()->agregar(new Pago(montoP, des, fechaP));
    }
}

