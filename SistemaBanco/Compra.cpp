/* 
 * File:   Compra.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 6:21 PM
 */

#include "Compra.h"

Compra::Compra(float Valor, string Tienda, Fecha* Fech) {
    valor = Valor;
    tienda = Tienda;
    fecha = Fech;
}

Compra::Compra() {
    valor = 0.0;
    tienda = " ";
    fecha = NULL;
}


//Sets
void Compra::setValor(float Valor){
    valor = Valor;
}
void Compra::setTienda(string Tienda){
    tienda = Tienda;
}
void Compra::setFecha(Fecha* Fech){
    fecha = Fech;
}

//Gets
float Compra::getValor() const{
    return valor;
}
string Compra::getTienda() const{
    return tienda;
}
Fecha* Compra::getFecha() const{
    return fecha;
}

//Otros metodos
string Compra::toString() const{
    stringstream s;
    s << "Fecha: " << fecha->toString() << endl;
    s << "Tienda: " << tienda << endl;
    s << "Valor: " << valor << endl;
    return s.str();
}
