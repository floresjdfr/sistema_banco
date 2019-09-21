#ifndef COMPRA_H
#define	COMPRA_H

#include "Transaccion.h"

class Compra : public Transaccion {
public:
    ProcesarCompra();
    virtual ~ProcesarCompra();
    bool verificaSaldo(float, Tarjeta&); //recibe monto compra y la tarjeta. Verifica que tenga saldo
    void procesarTransaccion(float, string, Fecha*, Tarjeta&); //Procesa el pago
private:

};

#endif	/* COMPRA_H */

