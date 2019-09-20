/* 
 * File:   Procesar.h
 * Author: JoseDavid
 *
 * Created on 19 de septiembre de 2019, 10:32 AM
 */

#ifndef PROCESAR_H
#define	PROCESAR_H

#include "TarjetaCredito.h"
#include "Voucher.h"

class TarjetaCredito;

class Procesar{

public:
    virtual void procesarTransaccion(float, string, Fecha*, TarjetaCredito&) = 0;

};

#endif	/* PROCESAR_H */

