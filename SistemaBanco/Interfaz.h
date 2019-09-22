/* 
 * File:   Interfaz.h
 * Author: JoseDavid
 *
 * Created on 22 de septiembre de 2019, 12:44 PM
 */

#ifndef INTERFAZ_H
#define	INTERFAZ_H

#include "Banco.h"
#include "TarjetaCredito.h"
#include "ListaTarjeta.h"

class Interfaz {
public:
    Interfaz();
    Interfaz(const Interfaz& orig);
    virtual ~Interfaz();
    void main();
private:

};

#endif	/* INTERFAZ_H */

