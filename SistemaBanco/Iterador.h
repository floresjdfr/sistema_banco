/* 
 * File:   Iterador.h
 * Author: Jose David
 *
 * Created on September 8, 2019, 2:39 PM
 */

#ifndef ITERADOR_H
#define	ITERADOR_H

//Clase abstacta

template <class T>
class Iterador { 
public:
    virtual bool hayMas();
    virtual void siguiente(); //Siguiente nodo
    virtual void primero(); //Primer nodo
    virtual T* getActual();
};

#endif	/* ITERADOR_H */

