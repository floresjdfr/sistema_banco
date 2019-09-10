/* 
 * File:   Transacciones.cpp
 * Author: Jose David
 * 
 * Created on September 9, 2019, 5:43 PM
 */

#include "Transacciones.h"

Transacciones::Transacciones() {
    primero = NULL;
    actual = NULL;
}


Transacciones::~Transacciones() {
    delete primero;
    delete actual;
}

void Transacciones::agregar(Transaccion* t){
    if(primero == NULL){
        primero = new Nodo<Transaccion>;
        primero->info = t;
        primero->siguiente = NULL;
    }
    else{
        actual = primero;
        while(actual != NULL){
            actual = actual->siguiente;
        }
        actual = new Nodo<Transaccion>;
        actual->info = t;
        actual->siguiente = NULL;
    }
}

