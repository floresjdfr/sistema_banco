#ifndef TRANSACCION_H
#define	TRANSACCION_H

#include "TarjetaCredito.h"
#include "Voucher.h"

class Tarjeta;

class Transaccion{
public:
    virtual void procesarTransaccion(float, string, Fecha*, Tarjeta&) = 0;
    virtual std::string imprimirVoucher() = 0;
};

#endif	/* TRANSACCION_H */

