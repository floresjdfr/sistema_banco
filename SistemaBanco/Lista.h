/* 
 * File:   Lista.h
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 11:36 AM
 */

#ifndef LISTA_H
#define	LISTA_H

#include "Nodo.h"
#include "Contenedor.h"

template <class T>
class Lista: private Contenedor{
    public:
        Lista();
        ~Lista();
        
        //Set
        //void setPrimero(Nodo*);
        //void setActual(Nodo*);
        //void setSiguiente(Nodo*);
        //void setInfo(T*);
        
        //Get
        Nodo* getPrimero();
        Nodo* getActual();
        Nodo* getSiguiente(Nodo*);
        //T* getInfo();
        
        //Otros Metodos
        void agregar(T*);
        ostream& operator <<(ostream&, T&);
        
    private:
        Nodo* primero;
        Nodo* actual;
};

#endif	/* LISTA_H */

