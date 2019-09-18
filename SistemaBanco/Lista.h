/* 
 * File:   Lista.h
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 11:36 AM
 */

#ifndef LISTA_H
#define	LISTA_H

#include "Nodo.h"
#include "Contenedor.h"
#include "IteradorLista.h"

template <class T>
class Lista: public Contenedor{
    public:
        Lista();
        ~Lista();
        void agregar(T*);
        string toString ();
        string toStringIterador();
        IteradorLista<T>* getIterador();
        
    private:
        Nodo<T>* primero;
        Nodo<T>* actual;
};

#endif	/* LISTA_H */

