#include "Iterador.h"

template <class T>
Iterador::Iterador(T* *elem, int tam){
    elementos = elem;
    tamano = tam;
    cursor = 0;
}

template <class T>
bool Iterador::hayMasElementos(){
    return (elementos[cursor] != std::NULL && cursor < tamano);
}

template <class T>
void Iterador::siguiente(){
    cursor++;
}

template <class T>
void Iterador::primero(){
    curosor = 0;
}

template <class T>
T* Iterador::elementoActual(){
    T* aux;
    if(hayMasElementos())
        aux = elementos[cursor];
    return aux;
}
