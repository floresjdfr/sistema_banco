/* 
 * File:   contenedorTransacciones.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 7:07 PM
 */

#ifndef CONTENEDORTRANSACCIONES_H
#define	CONTENEDORTRANSACCIONES_H
#include "Nodo.h"

#include "Transaccion.h"

class contenedorTransacciones {
public:
    contenedorTransacciones();
    virtual ~contenedorTransacciones();
    
    //Sets
    void setActual(Nodo*);
    void setPrimero(Nodo*);
    
    //Gets 
    Nodo* getActual() const;
    Nodo* getPrimero() const;
    
    //Otros metodos
    void agregarFinal(Nodo*);
    string mostrarLista() const;
    bool hayMas();
    
private:
    Nodo* actual;
    Nodo* primero;
};

#endif	/* CONTENEDORTRANSACCIONES_H */

