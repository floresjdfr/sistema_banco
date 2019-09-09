/* 
 * File:   Clientes.cpp
 * Author: JoseDavid
 * 
 * Created on 9 de septiembre de 2019, 08:33 AM
 */

#include "Clientes.h"

Clientes::Clientes() {
    primero = NULL;
    actual = NULL;
}

Clientes::~Clientes() {
}

void Clientes::agregar(Persona* p){
    if(primero == NULL){
        primero = new Nodo<Persona>;
        primero->info = p;
        primero->siguiente = NULL;
    }
    else{
        actual = primero;
        while(actual != NULL){
            actual = actual->siguiente;
        }
        Nodo<Persona>* aux = new Nodo<Persona>;
        aux ->info = p;
        aux->siguiente = NULL;
        actual = aux;
    }
}