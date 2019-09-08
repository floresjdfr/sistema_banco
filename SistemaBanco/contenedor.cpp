/* 
 * File:   Contenedor.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 7:07 PM
 */

#include "Contenedor.h"

template<class T>
Contenedor<T>::Contenedor() {
    actual = NULL;
    primero = NULL;
}

template<class T>
Contenedor<T>::~Contenedor() {
}



//Gets
template<class T>
Nodo<T>* Contenedor<T>::getActual() const{
    return actual;
}

template<class T>
Nodo<T>* Contenedor<T>::getPrimero() const{
    return primero;
}

//Otros metodos
template<class T>
void Contenedor<T>::agregarFinal(T* nuevo){
    actual = primero;
    if(primero == NULL){ //Si el primer nodo esta vacio
        primero = new Nodo<T>;
        primero->info = nuevo;
        primero->siguiente = NULL;
    }
    else{
        while(actual->siguiente != NULL){ //Mientras el siguiente no este vacio
            actual = actual->siguiente;
        }
        //Una vez que el siguiente este vacio 
        actual->siguiente->info = nuevo;
        
    }
}

template<class T>
string Contenedor<T>::toString(){  
    actual = primero;
    stringstream s;
    
    while(actual != NULL){ //Mientras actual tenga algo
        s << actual->info->toString();
        actual = actual->siguiente;
    }
    return s.str();
}

template<class T>
bool Contenedor<T>::hayMas(){
    if(actual->siguiente != NULL){
        return true;
    }
    else{
        return false;
    }
    
}
