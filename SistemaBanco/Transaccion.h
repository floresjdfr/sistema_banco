/* 
 * File:   Transaccion.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 1:41 PM
 */

#ifndef TRANSACCION_H
#define	TRANSACCION_H

#include "Fecha.h"

class Transaccion {
public:
    virtual string toString() const = 0;
};

#endif	/* TRANSACCION_H */

