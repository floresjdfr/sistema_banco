/* 
 * File:   Transaccion.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 6:19 PM
 */


/*Clase abstracta de la cual heredaran las transacciones que se realicen con las 
 tarjetas*/

#ifndef TRANSACCION_H
#define	TRANSACCION_H

#include "Fecha.h"

#include <iostream>
#include <sstream>

using namespace std;


class Transaccion{
public:
    virtual void realizaTransaccion(float, string, Fecha*) = 0;
};

#endif	/* TRANSACCION_H */

