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
#include "Voucher.h"
#include "Lista.h"
#include "Cliente.h"

class Procesar;


class Tarjeta {
public:
    
    //Gets
    virtual float getSaldo() = 0;
    virtual float getLimiteSaldo() = 0;
    virtual int getNumeroTajeta() = 0;
    virtual int getCodigoSeguridad() = 0;
    virtual Fecha* getFechaExpiracion() = 0;
    virtual Lista<Voucher>* getEstadoCuenta() = 0;
    virtual Cliente* getCliente() = 0;
    
    //Sets
    
    virtual void setSaldo(float) = 0;
    virtual void setLimiteSaldo(float) = 0;
    virtual void setNumeroTarjeta(int) = 0;
    virtual void setFechaExpiracion (Fecha*) = 0;
    virtual void setCodigoSeguridad(int) = 0;
    virtual void setEstadoCuenta(Lista<Voucher>*) = 0;
    virtual void setCliente(Cliente*) = 0;
    
    //Otros
    
    virtual void comprar(float, string, Fecha*, Procesar&) = 0;
    virtual string toString() = 0;
    
};

#endif	/* TARJETA_H */

