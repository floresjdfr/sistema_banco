
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
        Nodo<T>* getPrimero();
        Nodo<T>* getActual();
        void setPrimero(Nodo<T>*);
        void setActual(Nodo<T>*);
        void agregar(T*);
        string toString ();
        string toStringIterador(); //Usa el iterador para mostrar
        IteradorLista<T>* getIterador();
        T* obtenerElementoPosicion(int);//Retorna el elemento que esta en la posicion del parametro (empieza en 0)

        
        
    protected:
        Nodo<T>* primero;
        Nodo<T>* actual;
};




template <class T>
Nodo<T>* Lista<T>::getPrimero(){
    return primero;
}

template <class T>
Nodo<T>* Lista<T>::getActual(){
    return actual;
}

template <class T>
void Lista<T>::setPrimero(Nodo<T>* Primero){
    primero = Primero;
}

template <class T>
void Lista<T>::setActual(Nodo<T>* Actual){
    actual = Actual;
}


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
    
    
    
    if(primero == NULL){ //Si esta vacio
        Nodo<T>* aux = new Nodo<T>;
        aux->info = nuevo;
        aux->siguiente = NULL;
        primero = aux;
    }
    else{
        actual = primero;
        while(actual->siguiente != NULL){
            actual = actual->siguiente;
        }
        Nodo<T>* aux = new Nodo<T>;
        aux->info = nuevo;
        aux->siguiente = NULL;
        actual->siguiente = aux;
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
    if(iterador->getActual() != NULL){ //Si actual tiene algo
        s << iterador->getActual()->toString();
        while(iterador->hayMas()){ //Mientras haya algo en el siguiente
            iterador->siguiente();
            s << iterador->getActual()->toString();
        }
    }
    return s.str();
}

template<class T>
T* Lista<T>::obtenerElementoPosicion(int posicion){
    int contador = 0; //Utiliza este contador para llevar el control de los nodos
    IteradorLista<T>* iterador = this->getIterador();
    while(iterador->hayMas() == true && contador < posicion){ 

        iterador->siguiente();
        contador++;
    }
    return iterador->getActual();
}

#endif	/* LISTA_H */

