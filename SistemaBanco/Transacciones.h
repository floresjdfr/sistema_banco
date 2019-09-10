/* 
 * File:   Transacciones.h
 * Author: Jose David
 *
 * Created on September 9, 2019, 5:43 PM
 */

#ifndef TRANSACCIONES_H
#define	TRANSACCIONES_H

/*Clase contenedora de las transacciones ---> lista enlazada
 
 */

#include "Transaccion.h"
#include "Contenedor.h"

class Transacciones :public Contenedor<Transaccion>{
public:
    Transacciones();
    virtual ~Transacciones();
    void agregar(Transaccion*);
    
private:
    Nodo<Transaccion>* primero;
    Nodo<Transaccion>* actual;
};

#endif	/* TRANSACCIONES_H */

