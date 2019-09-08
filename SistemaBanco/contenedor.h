/* 
 * File:   contenedorTransacciones.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 7:07 PM
 */

#ifndef CONTENEDORTRANSACCIONES_H
#define	CONTENEDORTRANSACCIONES_H
#include "Nodo.h"

template<class T>
class contenedorTransacciones {
public:
    contenedorTransacciones();
    virtual ~contenedorTransacciones();
    


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

#endif	/* CONTENEDORTRANSACCIONES_H */

