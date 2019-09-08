/* 
 * File:   contenedorTransacciones.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 7:07 PM
 */

#include "contenedorTransacciones.h"

template<class T>
contenedorTransacciones<T>::contenedorTransacciones() {
    actual = NULL;
    primero = NULL;
}

template<class T>
contenedorTransacciones<T>::~contenedorTransacciones() {
}



//Gets
template<class T>
Nodo<T>* contenedorTransacciones<T>::getActual() const{
    return actual;
}
template<class T>
Nodo<T>* contenedorTransacciones<T>::getPrimero() const{
    return primero;
}

//Otros metodos
template<class T>
void contenedorTransacciones<T>::agregarFinal(Nodo<T>* nuevo){
    actual = primero;
    if(primero == NULL){
        primero->info = nuevo;
    }
}

template<class T>
string contenedorTransacciones<T>::mostrarLista() const{   
    
}

template<class T>
bool contenedorTransacciones<T>::hayMas(){
    return true;
    
}
