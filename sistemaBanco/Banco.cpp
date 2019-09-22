/* 
 * File:   Banco.cpp
 * Author: Jose David
 * 
 * Created on September 21, 2019, 1:36 PM
 */

#include "Banco.h"

Banco::Banco() {
    nombre = " ";
    tarjetas = new Lista<Tarjeta>;
}

Banco::Banco(string nom, Lista<Tarjeta>* list) {
    nombre = nom;
    tarjetas = list;
}

Banco::Banco(string nom) {
    nombre = nom;
    tarjetas = new Lista<Tarjeta>;
}

void Banco::setListaTarjetas(Lista<Tarjeta>* t){
    tarjetas = t;
}
void Banco::setNombre(string nom){
    nombre = nom;
}
    
Lista<Tarjeta>* Banco::getListaTarjetas(){
    return tarjetas;
}
string Banco::getNombre(){
    return nombre;
}


Banco::~Banco() {
}

