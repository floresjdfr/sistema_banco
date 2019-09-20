/* 
 * File:   Fecha.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 6:26 PM
 */

#include "Fecha.h"

Fecha::Fecha() {
    dia = 0;
    mes = 0;
    ano = 0;
}

Fecha::Fecha(int Dia, int Mes, int Ano) {
    dia = Dia;
    mes = Mes;
    ano = Ano;
}


//Sets

void Fecha::setDia(int Dia){
    dia = Dia;
}
void Fecha::setMes(int Mes){
    mes = Mes;
}
void Fecha::setAno(int Ano){
    ano = Ano;
}

//Gets

int Fecha::getDia()const{
    return dia;
}
int Fecha::getMes()const{
    return mes;
}
int Fecha::getAno()const{
    return ano;
}

//Otros metodos

string Fecha::toString() const{
    stringstream s;
    s << dia << " " << mes << " " << ano;
    return s.str();
}
