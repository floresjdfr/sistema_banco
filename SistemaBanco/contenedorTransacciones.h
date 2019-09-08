/* 
 * File:   contenedorTrancciones.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 7:07 PM
 */

#ifndef CONTENEDORTRANCCIONES_H
#define	CONTENEDORTRANCCIONES_H
#include "Nodo.h"

#include "Transaccion.h"

class contenedorTrancciones {
public:
    contenedorTrancciones();
    virtual ~contenedorTrancciones();
    
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

#endif	/* CONTENEDORTRANCCIONES_H */

