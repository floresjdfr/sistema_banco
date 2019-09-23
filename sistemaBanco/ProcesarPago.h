
#ifndef PROCESARPAGO_H
#define	PROCESARPAGO_H

#include "Procesar.h"
#include "Pago.h"



class ProcesarPago : public Procesar {
public:
    ProcesarPago();
    virtual ~ProcesarPago();
    
    bool verificarPago(float, Tarjeta&);
    void procesarTransaccion(float, string, Fecha*, Tarjeta&);
    string obtenerVoucher();
};

#endif	/* PROCESARPAGO_H */

