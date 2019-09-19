/* 
 * File:   Compra.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 6:21 PM
 */


//Esta clase funcionara para registar una compra o un pago

#ifndef COMPRA_H
#define	COMPRA_H

#include "Transaccion.h"
#include "Fecha.h"
#include "TarjetaCredito.h"

class TarjetaCredito;

class Compra : public Transaccion {
public:
    Compra();
    void realizaTransaccion(float monto, string lugar, Fecha* fecha,
            TarjetaCredito* tarjeta);
};

#endif	/* COMPRA_H */

