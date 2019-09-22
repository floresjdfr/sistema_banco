/* 
 * File:   Procesar.h
 * Author: JoseDavid
 *
 * Created on 19 de septiembre de 2019, 10:32 AM
 */

#ifndef PROCESAR_H
#define	PROCESAR_H

#include "Tarjeta.h"

/*Esta es una clase abstracta la cual ayudara a las subclases a procesar las compras
 y los pagos usando el patron de diseño estrategia*/

class Tarjeta; 


class Procesar{
    

public:
    virtual void procesarTransaccion(float, float, string, Fecha*, Tarjeta&) = 0;//Metodo que procesa la transaccion, ya sea compra o deposito

};

#endif	/* PROCESAR_H */

