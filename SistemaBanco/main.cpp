/* 
 * File:   main.cpp
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:28 PM
 */

#include <cstdlib>
#include <iostream>
#include "Contenedor.h"
#include "Contenedor.cpp" //Se agrega para evitar errores de compilacion de la clase template
#include "Persona.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Persona* personaP = new Persona("Jose", "402390555", "flores.jdfr@gmail.com",21,100000);
    Contenedor<Persona>* contenedorP = new Contenedor<Persona>;
    contenedorP->agregarFinal(personaP);
    cout << contenedorP->toString() << endl;
    
    delete personaP, contenedorP;
    
    
    return 0;
}

