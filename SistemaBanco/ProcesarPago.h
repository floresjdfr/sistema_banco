/* 
 * File:   procesaPago.h
 * Author: Jose David
 *
 * Created on September 19, 2019, 11:37 PM
 */

#ifndef PROCESARPAGO_H
#define	PROCESARPAGO_H

#include "Procesar.h"

class ProcesarPago : public Procesar {
public:
    ProcesarPago();
    virtual ~ProcesarPago();
    void procesarTransaccion(float, Fecha*, Tarjeta&);
    bool verificaPago(float, Tarjeta&);

};

#endif	/* PROCESARPAGO_H */

