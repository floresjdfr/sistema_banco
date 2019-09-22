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

#include "ProcesarCompraCuotas.h"
#include "Interfaz.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
       
    Interfaz* i = new Interfaz;
    

    cout << "**********PRUEBAS CLIENTE************" << endl << endl;
    
    //Sobrecarga de entrada
    Fecha* fechaCorte = new Fecha();
    cin>>*fechaCorte;
    
    Fecha* fechaLimite = new Fecha(2,2,2);
    Fecha* fechaExpiracion = new Fecha(3,3,3);
    
    //Sobrecarga de entrada
    Persona* cliente = new Persona();
    cin>>*cliente;
    
    //Sobrecarga de entrada
    TarjetaCredito* tarjeta = new TarjetaCredito();
    cin>>*tarjeta;
    
    cout << *tarjeta <<endl;
    
    ProcesarCompra* p = new ProcesarCompra();
    ProcesarCompraCuotas* cuotas = new ProcesarCompraCuotas();
    
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
    
    
    Fecha* fec3 = new Fecha(1, 2, 2);
    Procesar* p2 = new ProcesarPagoMinimo();
    tarjeta->pagar(700, "Una parte", fec3, *p2);
    cout << "--------------------------------" << endl;
    
    cout << *tarjeta <<endl;

    cout << i->encabezado() << endl;

    
    
    i->main();
    delete i;
   
    cin.ignore();
    return 0;
}

