/* 
 * File:   ProcesarCompraCuotas.cpp
 * Author: Jose David
 * 
 * Created on September 21, 2019, 1:34 PM
 */

#include "ProcesarCompraCuotas.h"

ProcesarCompraCuotas::ProcesarCompraCuotas() {
}

bool ProcesarCompraCuotas::verificaSaldo(float monto, Tarjeta& tarjeta){
    return tarjeta.getSaldo() >= monto;
}

void ProcesarCompraCuotas::procesarTransaccion(float monto, float cuotaMensual, string descripcion, Fecha* fecha, Tarjeta& tarjeta){
    if (this->verificaSaldo(monto, tarjeta) && tarjeta.getMoroso() == false){
        tarjeta.setSaldo(tarjeta.getSaldo() - monto);
        tarjeta.getCompras()->agregar(new Compra(true, monto, cuotaMensual, fecha, descripcion));
    }
}

