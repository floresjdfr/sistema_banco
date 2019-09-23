/* 
 * File:   Interfaz.cpp
 * Author: JoseDavid
 * 
 * Created on 22 de septiembre de 2019, 12:44 PM
 */

#include "Interfaz.h"



void Interfaz::main(){
    
    
}

string Interfaz::encabezado(){
    stringstream s;
    s << "                   ********************************************" << endl;
    s << "                   *             SISTEMA BANCARIO              *" << endl;
    s << "                   *                                           *" <<endl;
    s << "                   *         Jose David Flores Rodriguez       *" << endl;
    s << "                   *         Giancarlo Chaves Matarrita        *" << endl;
    s << "                   *********************************************" << endl;
    return s.str();
}

