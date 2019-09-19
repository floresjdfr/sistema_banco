/* 
 * File:   Contenedor.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 7:07 PM
 */

#ifndef CONTENEDOR_H
#define	CONTENEDOR_H

using namespace std;

template <class T>
class Contenedor {
public:
    //Otros metodos
    virtual void agregar(T*) = 0;
    virtual string toString() const = 0;
    virtual Iterador<T>* obtenerIterador() const = 0;
    virtual ostream& operator <<(ostream&, T&) = 0; 
};

#endif	/* CONTENEDOR_H */
