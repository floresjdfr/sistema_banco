/* 
 * File:   PocesarCompra.h
 * Author: JoseDavid
 *
 * Created on 19 de septiembre de 2019, 10:37 AM
 */

#ifndef PROCESARCOMPRA_H
#define	PROCESARCOMPRA_H

#include "Procesar.h"

class ProcesarCompra : public Procesar {
public:
    ProcesarCompra();
    bool verificaSaldo(float, Tarjeta&); //recibe monto compra y la tarjeta. Verifica que tenga saldo
    void procesarTransaccion(float, float, string, Fecha*, Tarjeta&); //Procesa  la compra. Recibe monto, pago mensual,  descripcion, fecha, tarjeta
private:

};

#endif	/* PROCESARCOMPRA_H */

