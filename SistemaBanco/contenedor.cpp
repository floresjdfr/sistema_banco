/* 
 * File:   contenedor.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 7:07 PM
 */

#include "contenedor.h"

template<class T>
contenedor<T>::contenedor() {
    actual = NULL;
    primero = NULL;
}

template<class T>
contenedor<T>::~contenedor() {
}



//Gets
template<class T>
Nodo<T>* contenedor<T>::getActual() const{
    return actual;
}
template<class T>
Nodo<T>* contenedor<T>::getPrimero() const{
    return primero;
}

//Otros metodos
template<class T>
void contenedor<T>::agregarFinal(Nodo<T>* nuevo){
    actual = primero;
    if(primero == NULL){
        primero->info = nuevo;
    }
}

template<class T>
string contenedor<T>::mostrarLista() const{   
    
}

template<class T>
bool contenedor<T>::hayMas(){
    return true;
    
}
