/* 
 * File:   contenedorTransacciones.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 7:07 PM
 */

#include "contenedorTransacciones.h"

contenedorTransacciones::contenedorTransacciones() {
    actual = NULL;
    primero = NULL;
}

contenedorTransacciones::~contenedorTransacciones() {
}

//Sets
void contenedorTransacciones::setActual(Nodo* Actual){
    actual = Actual;
}
void contenedorTransacciones::setPrimero(Nodo* Primero){
    primero = Primero;
}

//Gets 
Nodo* contenedorTransacciones::getActual() const{
    return actual;
}
Nodo* contenedorTransacciones::getPrimero() const{
    return primero;
}

//Otros metodos
void contenedorTransacciones::agregarFinal(Nodo* nuevo){
    actual = primero;
    if(primero == NULL){
        primero = nuevo;
    }
}
string contenedorTransacciones::mostrarLista() const{
    actual = primero;
}

bool contenedorTransacciones::hayMas(){
    actual = primero;
    
}
