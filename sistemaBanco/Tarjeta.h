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
#include "Lista.h"
#include "Persona.h"
#include "Procesar.h"
#include "ListaCompra.h"

class Procesar;

/*Clase abstracta de una tarjeta*/


class Tarjeta {
public:
    
    //Gets
    virtual float getSaldo() = 0;
    virtual float getLimiteSaldo() = 0;
    virtual Persona* getCliente() = 0;
    virtual bool getMoroso() = 0;
    virtual ListaCompra* getCompras() = 0;
    virtual int getNumeroTarjeta() = 0;
    
    //Sets
    
    virtual void setSaldo(float) = 0;
    virtual void setLimiteSaldo(float) = 0;
    virtual void setCliente(Persona*) = 0;
    virtual void setMoroso(bool) = 0;
    virtual void setNumeroTarjeta(int) = 0;
    //Otros
    
    
    virtual string toString() = 0;
    
};

#endif	/* TARJETA_H */

