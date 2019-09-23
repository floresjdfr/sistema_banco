
#ifndef TARJETA_H
#define	TARJETA_H

#include <iostream>
#include <sstream>
using namespace std;

#include "Fecha.h"
#include "Persona.h"
#include "Procesar.h"
#include "ListaCompra.h"
#include "Pago.h"

class Pago;
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
    virtual long long int getNumeroTarjeta() = 0;
    virtual Lista<Pago>* getPagos() = 0;
    virtual int getPuntos() = 0;
    virtual Fecha* getFechaCorte() = 0;
    
    //Sets
    
    virtual void setSaldo(float) = 0;
    virtual void setLimiteSaldo(float) = 0;
    virtual void setCliente(Persona*) = 0;
    virtual void setMoroso(bool) = 0;
    virtual void setNumeroTarjeta(long long int) = 0;
    virtual void setPagos(Lista<Pago>*) = 0;
    //Otros
    
    
    virtual string toString() = 0;
    virtual void comprar(Compra, Procesar&) = 0;
    virtual void pagar(float, string, Fecha*, Procesar&) = 0;
    virtual void pagarMinimo(string, Fecha*, Procesar&) = 0;
    virtual void ganarPuntos(float) = 0;
    virtual float obtenerSaldoFechaCorte() = 0;
    virtual float obtenerSaldoTotal() = 0;
    
};

#endif	/* TARJETA_H */

