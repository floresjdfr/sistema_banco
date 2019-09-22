/* 
 * File:   procesaPago.h
 * Author: Jose David
 *
 * Created on September 19, 2019, 11:37 PM
 */

#ifndef PROCESARPAGO_H
#define	PROCESARPAGO_H

#include "Procesar.h"
#include "Pago.h"



class ProcesarPago : public Procesar {
public:
    ProcesarPago();
    virtual ~ProcesarPago();
    
    bool verificarPago(float, float);
    void procesarTransaccion(float, string, Fecha*, Tarjeta&);
    string obtenerVoucher();
};

#endif	/* PROCESARPAGO_H */

