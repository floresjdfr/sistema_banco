/* 
 * File:   Vector.cpp
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 01:23 PM
 */

#include "Vector.h"

template <class T>
Vector::Vector(){
    vector = new T*[this->getCantidad()];
    this->setCantidad(0);
}

template <class T>
Vector::Vector(int tam){
    vector = new T*[this->getCantidad()];
    this->setCantidad(tam);
}

template <class T>
Vector::~Vector(){
    for(int i=0; i<this->getCantidad(); i++)
        delete vector[i];
    delete [] vector;
}

template <class T>
void Vector::setCantidad(int can){
    this->cantidad = can;
}

template <class T>
int Vector::getCantidad(){
    return this->cantidad;
}

template <class T>
void Vector::agregar(T* elem){
    vector[cantidad++] = elem;
}

template <class T>
ostream& Vector::operator <<(ostream& salida, T<Vector>& this){
    
}
