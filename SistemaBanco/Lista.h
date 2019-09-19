#ifndef LISTA_H
#define	LISTA_H

#include <iostream>
#include <sstream>

#include "Nodo.h"
#include "Iterador.h"
#include "Contenedor.h"
#include "IteradorLista.h"

using namespace std;

template <class T>
class Lista: private Contenedor{
    public:
        Lista();
        ~Lista();
        
        bool vacia();
        int canElementos();
        void eliminar();
        void agregar(T*);
        string toString() const;
        Iterador<T>* obtenerIterador() const;
        ostream& operator <<(ostream&, T&);
        
    private:
        Nodo<T>* primero;
        Nodo<T>* actual;
        int cantidad;
};

/*----------------------------------------------------------*/

template <class T>
Lista<T>::Lista(){
    primero = NULL;
    actual = NULL;
    cantidad = 0;
}

template <class T>
Lista<T>::~Lista(){
    
}

template <class T>
void Lista<T>::vacia(){
    return (primero == NULL);
}

template <class T>
void Lista<T>::canElementos() const{
    return cantidad;
}

template <class T>
void Lista<T>::eliminar(){
    if(!vacia()){
        IteradorLista<T>* i = obtenerIterador();
        while(i->hayMas()){
            T* elem = i->getActual();
            delete elem;
        }
        delete i;
    }
}

template <class T>
void Lista<T>::agregar(T* nInfo){
    if(!vacia()){
        actual->siguiente.info = nInfo;
        actual->siguiente.siguiente = NULL;
        actual = actual->siguiente;
    }
    else{
        Nodo<T>* nuevo;
        nuevo.info = nInfo;
        nuevo.siguiente = NULL;
        primero = actual = nuevo;
    }
    cantidad++;
}

template<class T>
string Lista<T>::toString() const{
    stringstream s;
    IteradorLista<T>* i = obtenerIterador();
    while(i->hayMas()){
        T* elem = i->getActual();
        s<<elem<<endl;
    }
    return s.str();
}

template <class T>
ostream& operator <<(ostream& salida, Lista<T>& lis){
    return salida<<lis.toString();
}

#endif	/* LISTA_H */

