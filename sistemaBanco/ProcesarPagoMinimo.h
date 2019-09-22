/* 
 * File:   ProcesarPagoMinimo.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 1:35 PM
 */

#ifndef PROCESARPAGOMINIMO_H
#define	PROCESARPAGOMINIMO_H

#include "Procesar.h" 

class ProcesarPagoMinimo : public Procesar {
public:
    ProcesarPagoMinimo();
    virtual ~ProcesarPagoMinimo();
    
    bool verificarPago(float, float);
    void procesarTransaccion(float, string, Fecha*, Tarjeta&);
    string obtenerVoucher();
};

#endif	/* PROCESARPAGOMINIMO_H */

