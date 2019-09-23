

#include "Banco.h"

Banco::Banco() {
    nombre = " ";
    tarjetas = new ListaTarjeta;
}

Banco::Banco(string nom, ListaTarjeta* list) {
    nombre = nom;
    tarjetas = list;
}

Banco::Banco(string nom) {
    nombre = nom;
    tarjetas = new ListaTarjeta;
}

void Banco::setListaTarjetas(ListaTarjeta* t){
    tarjetas = t;
}
void Banco::setNombre(string nom){
    nombre = nom;
}
    
ListaTarjeta* Banco::getListaTarjetas(){
    return tarjetas;
}
string Banco::getNombre(){
    return nombre;
}


Banco::~Banco() {
}

