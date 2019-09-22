/* 
 * File:   main.cpp
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:28 PM
 */

#include <cstdlib>
#include <iostream>

#include "Persona.h"
#include "TarjetaCredito.h"
#include "Lista.h"
#include "IteradorLista.h"
#include "ProcesarCompra.h"
#include "ProcesarCompraCuotas.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "**********PRUEBAS CLIENTE************" << endl << endl;

    Fecha* fechaCorte = new Fecha(1,1,1);
    Fecha* fechaLimite = new Fecha(2,2,2);
    Fecha* fechaExpiracion = new Fecha(3,3,3);
    Persona* cliente = new Persona("Jose","11111","jose@yahoo",21,400000);
    TarjetaCredito* tarjeta = new TarjetaCredito(200000, fechaCorte, fechaLimite, fechaExpiracion,468465, cliente);
    
    cout << tarjeta->toString();
    
    ProcesarCompra* p = new ProcesarCompra;
    ProcesarCompraCuotas* cuotas = new ProcesarCompraCuotas;
    
    cout << "********** PRUEBAS COMPRAS Y VOUCHERS ************" << endl << endl;
    
    Fecha* fec = new Fecha(4,4,4);
    tarjeta->comprar(1500,0,"Arroz",fec,*p);
    
    Fecha* fec2 = new Fecha(5,5,5);
    tarjeta->comprar(8000,0,"Helado",fec2,*p);
    
    tarjeta->comprar(40000,1000,"Parlantes",fec,*cuotas);
    
    cout << "Compras pagadas en total" << endl << endl;
    cout << tarjeta->getCompras()->toString();
    
    cout << endl << endl;
    cout << "Compras pendientes: " << endl;
    cout << tarjeta->getCompras()->toStringPendientes();
    
    
    
    delete tarjeta, fechaCorte, fechaLimite, fechaExpiracion, cliente;
   
    
    return 0;
}

