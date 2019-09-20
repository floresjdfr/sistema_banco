/* 
 * File:   Cliente.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:33 PM
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

#include <iostream>

using namespace std;

#include "Lista.h"
#include "TarjetaCredito.h"

class Cliente {
public:
    virtual string toString() const = 0;
};

#endif	/* CLIENTE_H */

