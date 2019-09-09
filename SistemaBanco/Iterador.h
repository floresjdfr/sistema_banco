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

#endif	/* ITERADOR_H */

