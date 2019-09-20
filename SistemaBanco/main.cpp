/* 
 * File:   main.cpp
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:28 PM
 */

#include <cstdlib>
#include <iostream>
#include "Lista.h"
#include "Cliente.h"
#include "Persona.h"
#include "ProcesarCompra.h"
#include "Fecha.h"
#include "TarjetaCredito.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Lista<Tarjeta>* tarjetas = new Lista<Tarjeta>;
    Persona* P = new Persona("Jose", "111111", "jose@gmail.com", 21, 400000);
    P->setTarjetas(tarjetas);
    
    Fecha* corte = new Fecha("1","10","2019");
    Fecha* limite = new Fecha("5","10","2019");
    
    TarjetaCredito* credito = new TarjetaCredito(50000,corte,limite,0);
    P->getTarjetas()->agregar(credito);
    cout << P->getTarjetas()->toString();
    ProcesarCompra* procesa = new ProcesarCompra();
    P->getTarjetas()->obtenerElementoPosicion(1)->comprar(25500, "Automercado", new Fecha("19","9","2019"),
            *procesa);
    cout << P->getTarjetas()->toString();
    
   
    
    return 0;
}

