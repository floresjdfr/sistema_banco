

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
    void primero(); //Mueve el "cursor" al primer nodo
    T* getActual(); //Returna el elemento actual
    T* getSiguiente(); //Retorna el elemento siguiente
private:
    Nodo<T>* primer; 
    Nodo<T>* actual; //Cursor
};

template <class T>
IteradorLista<T>::IteradorLista(Nodo <T>* primero) {
    primer = primero;
    actual = primero;
}

template <class T>
bool IteradorLista<T>::hayMas(){ 
    return actual != NULL;
}

template <class T>
void IteradorLista<T>::siguiente(){
    actual = actual->siguiente;
}

template <class T>
void IteradorLista<T>::primero(){
    actual = primer;
}

template <class T>
T* IteradorLista<T>::getActual(){
    return actual->info;
}

template <class T>
T* IteradorLista<T>::getSiguiente(){
    return actual->siguiente->info;
}
#endif	/* ITERADORLISTA_H */

