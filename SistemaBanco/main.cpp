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
    
    cout << i->encabezado() << endl;
    
    
    i->main();
    delete i;
   
    cin.ignore();
    return 0;
}

