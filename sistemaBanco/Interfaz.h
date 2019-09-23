
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
    
    bool main(Banco*);
    string encabezado();


};

#endif	/* INTERFAZ_H */

