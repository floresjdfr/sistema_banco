#include "Voucher.h"


Voucher::Voucher(){
    monto = 0.0;
    lugar = " ";
    fecha = NULL;
}

Voucher::Voucher(float Monto, string Lugar, Fecha* _fecha){
    monto = Monto;
    lugar = Lugar;
    fecha = _fecha;
}

//Sets

void Voucher::setLugar(string Lugar){
    lugar = lugar;
}

void Voucher::setMonto(float Monto){
    monto = Monto;
}

//Gets

string Voucher::getLugar(){
    return lugar;
}

float Voucher::getMonto(){
    return monto;
}

//Otros

string Voucher::toString(){
    stringstream s;
    s << "Lugar: " << lugar << endl;
    s << "Fecha: " << fecha << endl;
    s << "Monto: " << monto << endl;
    return s.str();
}