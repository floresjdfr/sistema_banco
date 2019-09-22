#ifndef PAGOMINIMO_H
#define	PAGOMINIMO_H

#include "Pago.h"

class PagoMinimo: public Pago{
public:
    PagoMinimo();
    ~PagoMinimo();
    bool procesarTransaccion(float, string, Fecha*, TarjetaCredito&);
    bool verificaPago(float, TarjetaCredito&);
    string imprimirVoucher(float, Fecha*, TarjetaCredito&);
private:
    
};

#endif	/* PAGOMINIMO_H */

