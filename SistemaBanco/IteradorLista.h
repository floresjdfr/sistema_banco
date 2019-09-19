#ifndef ITERADORLISTA_H
#define	ITERADORLISTA_H

#include "Iterador.h"
#include "Nodo.h"

template <class T>
class IteradorLista : public Iterador{
public:
    IteradorLista(Nodo<T>*);
    ~IteradorLista();
    virtual bool hayMas() const;
    void siguiente();
    T* getActual();
private:
    Nodo<T>* cursor;
};

template <class T>
IteradorLista<T>::IteradorLista(Nodo <T>* primero) {
    cursor = primero;
}

template <class T>
bool IteradorLista<T>::hayMas() const{
    return (cursor->siguiente != NULL);
}

template <class T>
void IteradorLista<T>::siguiente(){
    cursor = cursor->siguiente;
}

template <class T>
T* IteradorLista<T>::getActual(){
    T* aux = NULL;
    if(hayMas()){
        aux = cursor->info;
        siguiente();
    }
    return aux;
}

#endif	/* ITERADORLISTA_H */

