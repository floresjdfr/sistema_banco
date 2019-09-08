/* 
 * File:   Contenedor.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 7:07 PM
 */

#ifndef CONTENEDOR_H
#define	CONTENEDOR_H
#include "Nodo.h"
#include "Iterador.h"

template<class T>
class Contenedor {
public:
    Contenedor();
    virtual ~Contenedor();
    


    //Gets 
    Nodo<T>* getActual() const;
    Nodo<T>* getPrimero() const;
    
    //Otros metodos
    void agregarFinal(T*);
    string toString(); //Este metodo solo funcionara si la clase que se trata de mostrar tiene un metodo toSting();
    bool hayMas(); //Retorna verdadero si hay  mas elementos
    Iterador<T>* getIterador();
    
private:
    Nodo<T>* actual;
    Nodo<T>* primero;
};

#endif	/* CONTENEDOR_H */

