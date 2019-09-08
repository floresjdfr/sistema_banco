/* 
 * File:   Iterador.cpp
 * Author: Jose David
 * 
 * Created on September 8, 2019, 2:39 PM
 */

#include "Iterador.h"

template <class T>
Iterador<T>::Iterador(Nodo<T>* nodo) {
    primero = nodo;
    actual = nodo;
}

template <class T>
bool Iterador<T>::masElementos(){
    if(actual != NULL){
        return true;
    }
    else{
        return false;
    }
}

template <class T>
void Iterador<T>::siguienteElemento(){
    actual = actual->siguiente;
}

template <class T>
void Iterador<T>::primerElemento(){
    actual = primero;
}

template<class T>
T* Iterador<T>::elementoActual(){
    Nodo<T>* auxiliar;
    if(masElementos()){
        auxiliar = actual;
        return auxiliar->info;
    }
    return NULL;
}