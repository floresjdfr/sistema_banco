/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Utiles.cpp
 * Author: JoseDavid
 * 
 * Created on 22 de septiembre de 2019, 04:53 PM
 */

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

