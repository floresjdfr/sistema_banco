/* 
 * File:   Fecha.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 6:26 PM
 */

#include "Fecha.h"

Fecha::Fecha() {
    dia = " ";
    mes = " ";
    ano = " ";
}

Fecha::Fecha(string Dia, string Mes, string Ano) {
    dia = Dia;
    mes = Mes;
    ano = Ano;
}


//Sets

void Fecha::setDia(string Dia){
    dia = Dia;
}
void Fecha::setMes(string Mes){
    mes = Mes;
}
void Fecha::setAno(string Ano){
    ano = Ano;
}

//Gets

string Fecha::getDia()const{
    return dia;
}
string Fecha::getMes()const{
    return mes;
}
string Fecha::getAno()const{
    return ano;
}

//Otros metodos

string Fecha::toString() const{
    stringstream s;
    s << dia << " " << mes << " " << ano;
    return s.str();
}
