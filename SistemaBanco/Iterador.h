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
    virtual bool hayMas() = 0;
    virtual void siguiente() = 0;
    virtual void primero() = 0;
    virtual T* getActual() = 0;
};

#endif	/* ITERADOR_H */

