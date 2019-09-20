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
    virtual ~ProcesarCompra();
    bool verificaSaldo(float, Tarjeta&); //recibe monto compra
    void procesarTransaccion(float, string, Fecha*, Tarjeta&);
private:

};

#endif	/* PROCESARCOMPRA_H */

