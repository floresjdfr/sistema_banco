/* 
 * File:   Iterador.h
 * Author: Jose David
 *
 * Created on September 8, 2019, 2:39 PM
 */

#ifndef ITERADOR_H
#define	ITERADOR_H

#include "Nodo.h"

template <class T>
class Iterador { 
public:
    Iterador(Nodo<T>*);
    bool masElementos();
    void siguienteElemento(); //Siguiente nodo
    void primerElemento(); //Primer nodo
    T* elementoActual();
private:
    Nodo<T*> actual;
    Nodo<T*> primero;
    
    

};

#endif	/* ITERADOR_H */

