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

class Cliente {
public:
    //Sets
    virtual void setNombre(string) = 0;
    virtual void setIdentificacion(string) = 0;
    virtual void setCorreoElectronico(string) = 0;
    virtual void setEdad(int) = 0;
    virtual void setSalario(float) = 0;
    
    //Gets
    virtual string getNombre() const = 0;
    virtual string getIdentificacion() const= 0;
    virtual string getCorreoElectronico() const = 0;
    virtual int getEdad() const = 0;
    virtual float getSalario() const = 0;
    
    virtual string toString() const = 0;
};

#endif	/* CLIENTE_H */

