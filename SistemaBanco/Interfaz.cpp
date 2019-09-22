/* 
 * File:   Interfaz.cpp
 * Author: JoseDavid
 * 
 * Created on 22 de septiembre de 2019, 12:44 PM
 */

#include "Interfaz.h"



void Interfaz::main(){
    
    
}

string Interfaz::aMinuscula(string palabra){
    for(int i = 0; palabra[i] != '\0'; i++){
        palabra[i] = tolower(palabra[i]);
    }
    return palabra;
}

bool Interfaz::esDigito(string input){
    int verificacion = 0;
    int total_caracteres = 0;
    
    for (int i = 0; input[i] != '\0'; i++){
        total_caracteres++;
    }
    
    for(int i = 0; i < total_caracteres; i++){
        if(isdigit(input[i])){
            verificacion++;
        } 
    }
    
    if(total_caracteres == verificacion){
        return true;
    }
    else{
        return false;
    }
}

string Interfaz::encabezado(){
    stringstream s;
    s << "                   ********************************************" << endl;
    s << "                   *             SISTEMA BANCARIO              *" << endl;
    s << "                   *                                           *" <<endl;
    s << "                   *         Jose David Flores Rodriguez       *" << endl;
    s << "                   *         Jean Carlo                        *" << endl;
    s << "                   *********************************************" << endl;
    return s.str();
}

