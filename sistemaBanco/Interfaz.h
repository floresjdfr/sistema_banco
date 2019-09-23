/* 
 * File:   Interfaz.h
 * Author: JoseDavid
 *
 * Created on 22 de septiembre de 2019, 12:44 PM
 */

#ifndef INTERFAZ_H
#define	INTERFAZ_H

#include "Banco.h"
#include "TarjetaCredito.h"
#include "ListaTarjeta.h"
#include "ProcesarCompra.h"
#include "ProcesarCompraCuotas.h"
#include "ProcesarPago.h"
#include "ProcesarPagoMinimo.h"

class Interfaz {
public:
    
    void main(Banco*);
    string encabezado();


};

#endif	/* INTERFAZ_H */

