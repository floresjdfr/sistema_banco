#ifndef PAGOCONTADO_H
#define	PAGOCONTADO_H

#include "Pago.h"

class PagoContado: public Pago{
public:
    PagoContado();
    ~PagoContado();
    bool procesarTransaccion(float, string, Fecha*, TarjetaCredito&);
    bool verificaPago(float, TarjetaCredito&);
    string imprimirVoucher(float, Fecha*, TarjetaCredito&);
private:
    
};

#endif	/* PAGOCONTADO_H */

