/* 
 * File:   Lista.h
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 11:36 AM
 */

#ifndef LISTA_H
#define	LISTA_H

#include "Nodo.h"
#include "Contenedor.h"
#include "IteradorLista.h"

template <class T>
class Lista: public Contenedor{
    public:
        Lista();
        ~Lista();
        void agregar(T*);
        string toString ();
        string toStringIterador();
        IteradorLista<T>* getIterador();
        T* obtenerElementoPosicion(int);//Retorna el elemento que esta en la posicion del parametro
        
    private:
        Nodo<T>* primero;
        Nodo<T>* actual;
};

template <class T>
Lista<T>::Lista(){
    primero = NULL;
    actual = NULL;
}

template <class T>
Lista<T>::~Lista(){
    delete primero;
    delete actual;
}

template <class T>
void Lista<T>::agregar(T* nuevo){
    
    if(primero == NULL){
        Nodo<T>* aux = new Nodo<T>;
        aux->info = nuevo;
        aux->siguiente = NULL;
        primero = aux;
    }
    else{
        actual = primero;
        while(actual != NULL){
            actual = actual->siguiente;
        }
        Nodo<T>* aux;
        aux->info = nuevo;
        aux->siguiente = NULL;
        actual = aux;
    }
}

template<class T>
string Lista<T>::toString(){
    stringstream s;
    actual = primero;
    while(actual != NULL){
        s << actual->info->toString();
        actual = actual->siguiente;
    }
    return s.str();
}


template<class T>
IteradorLista<T>* Lista<T>::getIterador(){
    IteradorLista<T>* iterador = new IteradorLista<T>(primero);
    return iterador;
}

template<class T>
string Lista<T>::toStringIterador(){
    stringstream s;
    IteradorLista<T>* iterador = this->getIterador();
    if(iterador->getActual() != NULL){
        s << iterador->getActual()->toString();
        while(iterador->hayMas()){
            iterador->siguiente();
            s << iterador->getActual()->toString();
        }
    }
    return s.str();
}

template<class T>
T* Lista<T>::obtenerElementoPosicion(int posicion){
    int contador = 0;
    IteradorLista<T>* iterador = this->getIterador();
    
}

#endif	/* LISTA_H */

