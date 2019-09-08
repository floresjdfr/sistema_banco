/* 
 * File:   Vector.h
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 01:23 PM
 */

#ifndef VECTOR_H
#define	VECTOR_H

#include "Contenedor.h"

template <class T>
class Vector: private Contenedor{
    public:
        Vector();
        Vector(int);
        ~Vector();
        
        //Sets
        void setCantidad(int);
        
        //Gets
        int getCantidad();
        
        //Otros Metodos
        void agregar(T*);
        ostream& operator <<(ostream&, T&);
        T* operator [](int);
        
    private:
        T* *vector;
        int cantidad;
};

#endif	/* VECTOR_H */

