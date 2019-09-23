
#include "Utiles.h"


string Utiles::aMinuscula(string palabra){
    for(int i = 0; palabra[i] != '\0'; i++){
        palabra[i] = tolower(palabra[i]);
    }
    return palabra;
}

bool Utiles::esDigito(string input){
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

