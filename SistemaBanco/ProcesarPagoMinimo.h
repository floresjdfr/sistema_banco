
#ifndef PROCESARPAGOMINIMO_H
#define	PROCESARPAGOMINIMO_H

#include "Procesar.h" 

class ProcesarPagoMinimo : public Procesar {
public:
    ProcesarPagoMinimo();
    virtual ~ProcesarPagoMinimo();
    
    bool verificarPago(float, Tarjeta&);
    void procesarTransaccion(float, string, Fecha*, Tarjeta&);
    string obtenerVoucher();
};

#endif	/* PROCESARPAGOMINIMO_H */

