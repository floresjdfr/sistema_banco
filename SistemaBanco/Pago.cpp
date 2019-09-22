#include "Pago.h"
#include "TarjetaCredito.h"

Pago::Pago(string des, Fecha* fechaR, Tarjeta& cuenta) {
    monto = 0.0;
    fecha = fechaR;
    montoAcumulado = cuenta.getLimiteSaldo() - cuenta.getSaldo();
    morosidad = cuenta.getMoroso();
    descripcion = des;
}

Pago::~Pago() {
    
}

void Pago::setMonto(float mon){
    monto = mon;
}

void Pago::setMontoAcumulado(float montoA){
    montoAcumulado = montoA;
}
    
void Pago::setMorosidad(){
    if (morosidad == true)
        montoAcumulado += montoAcumulado*0.002;
}

void Pago::setInteres(){
    if (morosidad == true)
        montoAcumulado += montoAcumulado * 0.09;
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
