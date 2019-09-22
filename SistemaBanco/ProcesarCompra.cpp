/* 
 * File:   PocesarCompra.cpp
 * Author: JoseDavid
 * 
 * Created on 19 de septiembre de 2019, 10:37 AM
 */

#include "ProcesarCompra.h"

ProcesarCompra::ProcesarCompra() {
    
}


bool ProcesarCompra::verificaSaldo(float monto, Tarjeta& tarjeta){
    /*Este metodo verifica que la tarjeta sea capaz de descontar la compra*/
    return tarjeta.getSaldo() >= monto;
}

void ProcesarCompra::procesarTransaccion(float monto, float cuota, string descripcion, Fecha* fecha, Tarjeta& tarjeta){
    /*Este metodo procesa la compra a contado*/
    if(this->verificaSaldo(monto, tarjeta) && tarjeta.getMoroso() == false){ //Verifica que tenga salgo y que no este moroso
        tarjeta.setSaldo(tarjeta.getSaldo() - monto);
        tarjeta.getCompras()->agregar(new Compra(monto, fecha, descripcion));
        
    }
    
}
