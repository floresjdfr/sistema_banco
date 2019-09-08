/* 
 * File:   Lista.cpp
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 11:36 AM
 */

#include "Lista.h"

template <class T>
Lista::Lista(){
    primero = NULL;
    actual = NULL;
}

template <class T>
Lista::~Lista(){
    delete primero;
    delete actual;
}

template <class T>
Nodo* Lista::getPrimero(){
    return primero;
}

template <class T>
Nodo* Lista::getActual(){
    return actual;
}

template <class T>
Nodo* Lista::getSiguiente(Nodo* nodoTemp){
    return nodoTemp->siguiente;
}

template <class T>
void Lista::agregar(T* nuevo){
    T<Nodo>* aux = nuevo;
    if(primero != NULL){
        actual->siguiente = aux;
        actual = aux;
    }
    primero = actual = aux;
}

template <class T>
ostream& Lista::operator <<(ostream& salida, T<Lista>& this){
    
}
