/* 
 * File:   Iterador.h
 * Author: Jose David
 *
 * Created on September 8, 2019, 2:39 PM
 */

#ifndef ITERADOR_H
#define	ITERADOR_H

template <class T>
class Iterador { 
public:
    Iterador(T**, int);
    bool hayMasElementos();
    void siguiente(); //Siguiente nodo
    void primero(); //Primer nodo
    T* elementoActual();
private:
    T* *elementos;
    int tamano;
    int cursor;
};

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

#endif	/* ITERADOR_H */

