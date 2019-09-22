/* 
 * File:   Banco.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 1:36 PM
 */

#ifndef BANCO_H
#define	BANCO_H

#include "TarjetaCredito.h"
#include "Lista.h"


class Banco {
public:
    Banco();
    Banco(string, Lista<Tarjeta>*);
    Banco(string);
    virtual ~Banco();
    
    void setListaTarjetas(Lista<Tarjeta>*);
    void setNombre(string);
    
    Lista<Tarjeta>* getListaTarjetas();
    string getNombre();
        
    
private:
    Lista<Tarjeta>* tarjetas;
    string nombre;
};

#endif	/* BANCO_H */

