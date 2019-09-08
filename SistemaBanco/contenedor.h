/* 
 * File:   contenedor.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 7:07 PM
 */

#ifndef CONTENEDOR_H
#define	CONTENEDOR_H
#include "Nodo.h"

template<class T>
class contenedor {
public:
    contenedor();
    virtual ~contenedor();
    


    //Gets 
    Nodo<T>* getActual() const;
    Nodo<T>* getPrimero() const;
    
    //Otros metodos
    void agregarFinal(Nodo<T>*);
    string mostrarLista() const;
    bool hayMas();
    
private:
    Nodo<T>* actual;
    Nodo<T>* primero;
};

#endif	/* CONTENEDOR_H */

