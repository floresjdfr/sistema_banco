/* 
 * File:   Vector.cpp
 * Author: Giancarlo
 *
 * Created on 8 de septiembre de 2019, 01:23 PM
 */

#include "Vector.h"

Vector::Vector(){
    vector = new T*[this->getCantidad()];
    this->setCantidad(0);
}

Vector::Vector(int tam){
    vector = new T*[this->getCantidad()];
    this->setCantidad(tam);
}

Vector::~Vector(){
    for(int i=0; i<this->getCantidad(); i++)
        delete vector[i];
    delete [] vector;
}

void Vector::setCantidad(int can){
    this->cantidad = can;
}

int Vector::getCantidad(){
    return this->cantidad;
}

void Vector::agregar(T* elem){
    vector[cantidad++] = elem;
}

ostream& Vector::operator <<(ostream& salida, T<Vector>& this){
    
}