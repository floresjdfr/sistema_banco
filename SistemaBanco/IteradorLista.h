#ifndef ITERADORLISTA_H
#define	ITERADORLISTA_H

#include "Iterador.h"
#include "Nodo.h"

template <class T>
class IteradorLista : public Iterador<T>{
public:
    IteradorLista(Nodo<T>*);
    bool hayMas(); //Verifica si hay mas elementos en la siguiente posicion
    void siguiente();//Mueve el "cursor" al siguiente nodo
    T* getActual(); //Returna el elemento actual
private: 
    Nodo<T>* actual; //Cursor
};

#endif	/* ITERADORLISTA_H */

template <class T>
IteradorLista<T>::IteradorLista(Nodo <T>* primero) {
    actual = primero;
}

template <class T>
bool IteradorLista<T>::hayMas(){ 
    return actual->siguiente != NULL;
}

template <class T>
void IteradorLista<T>::siguiente(){
    actual = actual->siguiente;
}

template <class T>
T* IteradorLista<T>::getActual(){
    return actual->info;
}