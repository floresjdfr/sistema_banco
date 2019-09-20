/* 
 * File:   Tarjeta.h
 * Author: Jose David
 *
 * Created on September 9, 2019, 5:36 PM
 */

#ifndef TARJETA_H
#define	TARJETA_H

#include <iostream>
#include <sstream>
using namespace std;

#include "Fecha.h"
#include "Procesar.h"

class Procesar;

class Tarjeta {
public:
    virtual string toString() = 0;
    virtual float getSaldo() = 0;
    virtual void setSaldo(float) = 0;
    
};

#endif	/* TARJETA_H */

