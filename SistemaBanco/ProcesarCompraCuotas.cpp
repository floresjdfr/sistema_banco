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
    /*Este metodo verifica que la tarjeta sea capaz de descontar la compra*/
    return tarjeta.getSaldo() >= monto;
}

void ProcesarCompraCuotas::procesarTransaccion(float monto, float cuotaMensual, string descripcion, Fecha* fecha, Tarjeta& tarjeta){
    /*Este metodo procesa la compra a contado*/
    if (this->verificaSaldo(monto, tarjeta) && tarjeta.getMoroso() == false){
        tarjeta.setSaldo(tarjeta.getSaldo() - monto);
        tarjeta.getCompras()->agregar(new Compra(true, monto, cuotaMensual, fecha, descripcion));
    }
}

