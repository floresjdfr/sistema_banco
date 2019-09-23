#include "Pago.h"

Pago::Pago() {
    monto = 0.0;
    fecha = NULL;
    montoAcumulado = 0.0;
    morosidad = false;
    descripcion = " ";
    interes = false;
}

Pago::Pago(float mon, string des, Fecha* fec){
    monto = mon;
    descripcion = des;
    fecha = fec; 
}

Pago::Pago(float mon, float mAcum, bool inter, bool moro, Fecha* fechaR, string des) {
    monto = mon;
    fecha = fechaR;
    montoAcumulado = mAcum;
    morosidad = moro;
    descripcion = des;
    interes = inter;
}

Pago::~Pago() {
    
}

void Pago::setMonto(float mon){
    monto = mon;
}

void Pago::setMontoAcumulado(float montoA){
    montoAcumulado = montoA;
}
    
void Pago::setMorosidad(bool moro){
    morosidad = moro;
}

void Pago::setInteres(bool inter){
    interes = inter;
}

void Pago::setFecha(Fecha* fec){
    fecha = fec;
}

void Pago::setDescripcion(string des){
    descripcion = des;
}

float Pago::getMonto(){
    return monto;
}

float Pago::getMontoAcumulado(){
    return montoAcumulado;
}

Fecha* Pago::getFecha(){
    return fecha;
}

string Pago::getDescripcion(){
    return descripcion;
}
    
string Pago::toString() const{
    stringstream s;
    s<<"-------------- PAGO -------------"<<endl<<endl;
    s<<"Fecha: "<<fecha->toString()<<endl;
    s<<"Monto: "<<monto<<endl;
    if(montoAcumulado > 0.0)
        s<<"Monto Pendiente: "<<montoAcumulado<<endl<<endl;
    s<<"---------------------------------"<<endl<<endl;
    return s.str();
}

istream& operator >>(istream& entrada, Pago& p){
    float m;
    string des;
    Fecha fec;
    cout<<"Fecha del pago: "<<endl;
    entrada>>fec;
    cout<<"Monto del pago: ";
    entrada>>m;
    cout<<"Descripcion del pago: ";
    entrada>>des;
    
    p.setMonto(m);
    p.setDescripcion(des);
    p.setFecha(&fec);
}
ostream& operator <<(ostream& salida, Pago& p){
    return salida<<p.toString()<<endl;
}