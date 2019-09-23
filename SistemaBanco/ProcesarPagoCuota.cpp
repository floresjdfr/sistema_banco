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
    IteradorLista<Compra>* iterador = cuenta.getCompras()->getIterador();
    
    while (iterador->hayMas()){
        if(this->verificarPago(montoP, cuenta) && iterador->getActual()->getEstado()){
            if (iterador->getActual()->getDescripcion() == des){
                cuenta.setSaldo(cuenta.getSaldo() + montoP);
                cuenta.getPagos()->agregar(new Pago(montoP, des, fechaP));
                iterador->getActual()->setMontoPendiente(iterador->getActual()->getMontoPendiente() - montoP);
                break;
            }
        }
        iterador->siguiente();
    }
}

