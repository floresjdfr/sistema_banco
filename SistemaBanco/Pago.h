#ifndef PAGO_H
#define	PAGO_H

#include "Transaccion.h"

class Pago : public Transaccion {
public:
    virtual void procesarTransaccion(float, Fecha*, Tarjeta&) = 0;
    virtual bool verificaPago(float, Tarjeta&) = 0;
    virtual std::string imprimirVoucher(float, Fecha*, Tarjeta&) = 0;
};

#endif	/* PAGO_H */

