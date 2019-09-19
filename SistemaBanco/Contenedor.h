#ifndef CONTENEDOR_H
#define	CONTENEDOR_H

#include <iostream>
using namespace std;


class Contenedor {
public:
    //Otros metodos
    virtual void agregar(T*) = 0;
    virtual string toString() const = 0;
    virtual Iterador<T>* obtenerIterador() const = 0;
    virtual ostream& operator <<(ostream&, T&) = 0;
    virtual string toString() = 0;
};

#endif	/* CONTENEDOR_H */
