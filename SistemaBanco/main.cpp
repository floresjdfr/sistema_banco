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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Persona* P = new Persona("Jose","40239012", "flores.jdfr@gmail.com", 21, 0);
    Lista<Persona>* L = new Lista<Persona>;
    
    L->agregar(P);
    cout << L->toStringIterador();

    delete P, L;
    
    
    
    
    return 0;
}

