/* 
 * File:   contenedorTrancciones.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 7:07 PM
 */

#include "contenedorTransacciones.h"

contenedorTrancciones::contenedorTrancciones() {
    actual = NULL;
    primero = NULL;
}

contenedorTrancciones::~contenedorTrancciones() {
}

//Sets
void contenedorTrancciones::setActual(Nodo* Actual){
    actual = Actual;
}
void contenedorTrancciones::setPrimero(Nodo* Primero){
    primero = Primero;
}

//Gets 
Nodo* contenedorTrancciones::getActual() const{
    return actual;
}
Nodo* contenedorTrancciones::getPrimero() const{
    return primero;
}

//Otros metodos
void contenedorTrancciones::agregarFinal(Nodo* nuevo){
    actual = primero;
    if(primero == NULL){
        primero = nuevo;
    }
}
string contenedorTrancciones::mostrarLista() const{
    actual = primero;
}

