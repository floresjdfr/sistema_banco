

#ifndef PROCESARPAGOCUOTA_H
#define	PROCESARPAGOCUOTA_H

#include "Procesar.h"

class ProcesarPagoCuota: public Procesar{
public:
    ProcesarPagoCuota();
    virtual ~ProcesarPagoCuota();
    
    bool verificarPago(float, Tarjeta&);
    void procesarTransaccion(float, string, Fecha*, Tarjeta&);
};

#endif	/* PROCESARPAGOCUOTA_H */

