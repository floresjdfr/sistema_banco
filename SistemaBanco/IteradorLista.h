/* 
 * File:   IteradorLista.h
 * Author: JoseDavid
 *
 * Created on 10 de septiembre de 2019, 04:28 PM
 */

#ifndef ITERADORLISTA_H
#define	ITERADORLISTA_H

#include "Iterador.h"
#include "Nodo.h"

template <class T>
class IteradorLista : public Iterador<T>{
public:
    IteradorLista(Nodo<T>*);
    bool hayMas();
    void siguiente();
    void primero();
    T* getActual();
private:
    Nodo<T>* primer;
    Nodo<T>* actual;
};

#endif	/* ITERADORLISTA_H */

template <class T>
IteradorLista<T>::IteradorLista(Nodo <T>* primero) {
    primer = primero;
    actual = primero;
}

template <class T>
bool IteradorLista<T>::hayMas(){
    return actual->siguiente != NULL;
}

template <class T>
void IteradorLista<T>::siguiente(){
    actual = actual->siguiente;
}

template <class T>
void IteradorLista<T>::primero(){
    actual = primer;
}

template <class T>
T* IteradorLista<T>::getActual(){
    return actual->info;
}