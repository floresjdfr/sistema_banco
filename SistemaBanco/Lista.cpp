/* 
 * File:   Lista.cpp
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 11:36 AM
 */

#include "Lista.h"

Lista::Lista(){
    primero = NULL;
    actual = NULL;
}

Lista::~Lista(){
    delete primero;
    delete actual;
}

Nodo* Lista::getPrimero(){
    return primero;
}

Nodo* Lista::getActual(){
    return actual;
}

Nodo* Lista::getSiguiente(Nodo* nodoTemp){
    return nodoTemp->siguiente;
}

void Lista::agregar(T* nuevo){
    T<Nodo>* aux = nuevo;
    if(primero != NULL){
        actual->siguiente = aux;
        actual = aux;
    }
    primero = actual = aux;
}

ostream& Lista::operator <<(ostream& salida, T<Lista>& this){
    
}