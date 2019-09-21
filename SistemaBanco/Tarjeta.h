#ifndef TARJETA_H
#define	TARJETA_H

#include <iostream>
#include <sstream>
using namespace std;

#include "Fecha.h"
//#include "Voucher.h"
#include "Lista.h"
#include "Transaccion.h"

class Transaccion;

class Tarjeta {
public:
    virtual string toString() = 0;
//    virtual float getSaldo() = 0;
//    virtual float getSaldoMaximo() = 0;
//    virtual void setSaldo(float) = 0;
    virtual void realizarTransaccion(float, string, Fecha*, Transaccion&) = 0;
    virtual Lista<string>* getEstadoCuenta() = 0;
    
};

#endif	/* TARJETA_H */

