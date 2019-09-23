/

#ifndef PROCESAR_H
#define	PROCESAR_H

#include "Tarjeta.h"

/*Esta es una clase abstracta la cual ayudara a las subclases a procesar las compras
 y los pagos usando el patron de diseño estrategia*/

class Tarjeta; 


class Procesar{
    

public:
    virtual void procesarTransaccion(float, string, Fecha*, Tarjeta&) = 0; //Metodo que procesa la transaccion, ya sea compra o deposito

};

#endif	/* PROCESAR_H */

