/* 
 * File:   Interfaz.cpp
 * Author: JoseDavid
 * 
 * Created on 22 de septiembre de 2019, 12:44 PM
 */

#include "Interfaz.h"

Interfaz::Interfaz() {
    
    
}

Interfaz::Interfaz(const Interfaz& orig) {
}

Interfaz::~Interfaz() {
}


void Interfaz::main(){
    
    ListaTarjeta* l = new ListaTarjeta;
    Fecha* corte;
    Fecha* limite;
    Fecha* caducidad;
    Persona* cliente = new Persona;
    Persona* cliente2 = new Persona;
    cliente2->setIdentificacion("1");
    TarjetaCredito* tarjeta = new TarjetaCredito(5000, corte, limite, caducidad, 4525, cliente2);
    TarjetaCredito* tarjeta2 = new TarjetaCredito(5000, corte, limite, caducidad, 4521, cliente);
    l->agregar(tarjeta);
    l->agregar(tarjeta2);
    cout << l->toString();
    l->eliminaTarjetaNumero(4525);
    cout << l->toString();
}
