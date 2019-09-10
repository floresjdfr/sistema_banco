/* 
 * File:   IteradorLista.cpp
 * Author: JoseDavid
 * 
 * Created on 10 de septiembre de 2019, 04:28 PM
 */

#include "IteradorLista.h"

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
    actual = primero;
}

template <class T>
T* IteradorLista<T>::getActual(){
    return actual->info;
}

