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
        bool vacio();
        void agregar(T*);
        string toString ();
        IteradorLista<T>* getIterador();
        T* obtenerElementoPosicion(int);
        
    private:
        Nodo<T>* primero;
        Nodo<T>* actual; //Ultimo nodo en la lista
        int cantidad;
};

template <class T>
Lista<T>::Lista(){
    primero = NULL;
    actual = NULL;
    cantidad = 0;
}

template <class T>
Lista<T>::~Lista(){
    delete primero;
    delete actual;
}

template <class T>
bool Lista<T>::vacio(){
    return primero == NULL;
}

template <class T>
void Lista<T>::agregar(T* nuevo){
    Nodo<T>* aux = new Nodo<T>;
    if(this->vacio()){ //Si esta vacio
        aux->info = nuevo;
        aux->siguiente = NULL;
        primero = actual = aux;
    }
    else{
        aux->info = nuevo;
        aux->siguiente = NULL;
        actual->siguiente = aux;
        actual = aux;
    }
    cantidad++;
}

template<class T>
IteradorLista<T>* Lista<T>::getIterador(){
    return new IteradorLista<T>(primero);
}

template<class T>
string Lista<T>::toString(){
    stringstream s;
    IteradorLista<T>* i = this->getIterador();
        while(i->hayMas()){ //Mientras haya algo en el siguiente
            s << i->getActual();
            i->siguiente();
        }
    return s.str();
}

template<class T>
T* Lista<T>::obtenerElementoPosicion(int posicion){
    IteradorLista<T>* i = this->getIterador();
    int contador = 0;
    while(i->hayMas() && contador < cantidad){
        if(posicion == contador)
            return i->getActual();
        i->siguiente();
    }
}

#endif	/* LISTA_H */

