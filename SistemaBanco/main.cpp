/* 
 * File:   main.cpp
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:28 PM
 */

#include <cstdlib>
#include <iostream>
#include "Lista.h"
#include "Lista.cpp"
#include "Persona.h"
#include "TarjetaCredito.h"
#include "Procesar.h"
#include "ProcesarCompra.h"
#include "Fecha.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Persona* P = new Persona("Jose","40239012", "flores.jdfr@gmail.com", 21, 0);
    Lista<Persona>* L = new Lista<Persona>;
    
    TarjetaCredito* tarjeta = new TarjetaCredito();
    tarjeta->setSaldo(10000);
    
    Fecha* f = new Fecha("19","9","2019");
    
    
    ProcesarCompra* p;
    p->procesarTransccion(5420, "Gollo",f, tarjeta);
    
    
    
    
    L->agregar(P);
//    cout << L->toStringIterador();

    delete P, L, tarjeta, p;
    
    
    
   
    
    return 0;
}

