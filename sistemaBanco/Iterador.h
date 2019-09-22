/* 
 * File:   Iterador.h
 * Author: Jose David
 *
 * Created on September 8, 2019, 2:39 PM
 */

#ifndef ITERADOR_H
#define	ITERADOR_H

//Clase abstacta

template <class T>
class Iterador { 
public:
    virtual bool hayMas() = 0; //Verifica si hay mas elementos en la siguiente posicion
    virtual void siguiente() = 0; //Mueve el "cursor" al siguiente nodo
    virtual void primero() = 0; //Mueve el "cursor" al primer nodo
    virtual T* getActual() = 0; //Returna el elemento actual
    virtual T* getSiguiente() = 0; //Retorna el elemento siguiente
};

#endif	/* ITERADOR_H */

