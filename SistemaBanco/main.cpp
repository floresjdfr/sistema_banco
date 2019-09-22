/* 
 * File:   main.cpp
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:28 PM
 */

#include <cstdlib>
#include <iostream>

#include "Persona.h"
#include "Tarjeta.h"
#include "TarjetaCredito.h"
#include "Lista.h"
#include "IteradorLista.h"
#include "ProcesarCompra.h"
#include "ProcesarPagoMinimo.h"
#include "ProcesarPago.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Fecha* fechaCorte = new Fecha(1,1,1);
    Fecha* fechaLimite = new Fecha(2,2,2);
    Fecha* fechaExpiracion = new Fecha(3,3,3);
    Persona* cliente = new Persona("Jose","11111","jose@yahoo",21,400000);
    TarjetaCredito* tarjeta = new TarjetaCredito(200000, fechaCorte, fechaLimite, fechaExpiracion,468465, cliente);
    
    cout << tarjeta->toString();
    
    ProcesarCompra* p = new ProcesarCompra;
    Fecha* fec = new Fecha(4,4,4);
    tarjeta->comprar(1500,"Arroz",fec,*p);
    cout << "--------------------------------" << endl;
    cout << tarjeta->toString();
    cout << tarjeta->getCompras()->toStringIterador();
    
    Fecha* fec2 = new Fecha(1, 2, 2);
    Procesar* p2 = new ProcesarPagoMinimo();
    tarjeta->pagar(700, "Una parte", fec2, *p2);
    cout << "--------------------------------" << endl;
    
    cout << tarjeta->toString();
    
    delete tarjeta, fechaCorte, fechaLimite, fechaExpiracion, cliente;
   
    cin.ignore();
    return 0;
}

