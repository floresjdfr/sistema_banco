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

bool Fecha::operator <(Fecha* fec){
    if (ano < fec->ano) {
        return true;
    }
    else {
        if (ano == fec->ano) {
            if (mes < fec->mes) {
                return true;
            }
            else {
                if (mes == fec->mes) {
                    if (dia < fec->dia) {
                        return true;
                    }
                    else {
                        return false;
                    }
                }
            }
        }
    }
    return false;
}

bool Fecha::operator >(Fecha* fec){
    if (ano < fec->ano) {
        return true;
    }
    else {
        if (ano < fec->ano) {
            if (mes < fec->mes) {
                return true;
            }
            else {
                if (mes < fec->mes) {
                    if (dia < fec->dia) {
                        return true;
                    }
                    else {
                        return false;
                    }
                }
            }
        }
    }
    return false;
}

Fecha* Fecha::operator =(Fecha* fec){
    ano = fec->ano;
    mes = fec->mes;
    dia = fec->dia;
    return this;
}

istream& operator >>(istream& entrada, Fecha& fec){
    int d, m, a;
    cout << "Formato Fecha ---->  00 (dia) / 00 (mes) / 0000 (año)" << endl;
    cout << "Digite el dia: ";
    entrada >> d;
    cout << "Digite el mes: ";
    entrada >> m;
    cout << "Digite el año: ";
    entrada >> a;
    fec.setAno(a);
    fec.setDia(d);
    fec.setMes(m);
    return entrada;
}

ostream& operator <<(ostream& salida, Fecha& fec){
    return salida<<fec.toString()<<endl;
}