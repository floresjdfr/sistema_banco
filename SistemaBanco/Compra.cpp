/* 
 * File:   Compra.cpp
 * Author: Jose David
 * 
 * Created on September 21, 2019, 3:01 AM
 */

#include "Compra.h"

Compra::Compra() {
    estado = false;
    monto = 0.0;
    montoPendiente = 0.0;
    montoPagoMensual = 0.0;
    descripcionCompra = " ";
}

Compra::Compra(float Monto, Fecha* fechaa, string Descripcion){
    monto = Monto;
    fecha = fechaa;
    descripcionCompra = Descripcion;
}

Compra::Compra(bool Estado, float Monto, float MontoPendiente, float MontoPagoMensual,
    Fecha* fechaa, string Descripcion){
    estado = Estado;
    monto = Monto;
    montoPendiente = MontoPendiente;
    descripcionCompra = Descripcion;
    fecha = fechaa;
}
    
    //Sets
    
void Compra::setEstado(bool Estado){
    estado = Estado;
}
void Compra::setMonto(float Monto){
    monto = Monto;
}
void Compra::setMontoPendiente(float MontoPendiente){
    montoPendiente = MontoPendiente;
}
void Compra::setMontoPagoMensual(float MontoPagoMensual){
    montoPagoMensual = MontoPagoMensual;
}
void Compra::setDescripcionCompra(string descripcion){
    descripcionCompra = descripcion;
}
    
    
//Gets
    
bool Compra::getEstado() const{
    return estado;
}
float Compra::getMonto() const{
    return monto;
}
float Compra::getMontoPendiente() const{
    return montoPendiente;
}
float Compra::getMontoPagoMensual() const{
    return montoPagoMensual;
}

string Compra::getDescripcion() const{
    return descripcionCompra;
}
    
    
string Compra::toString() const{
    stringstream s;
    s << "----------------------------------------" << endl;
    s << "Pago contado" << endl;
    s << "Descipcion compra: " << descripcionCompra << endl;
    s << "Monto: " << monto << endl;
    s << "--------------------------------------" << endl;
    return s.str();
}

string Compra::toStringPendiente() const{
    stringstream s;
    s << "----------------------------------------" << endl;
    s << "Descipcion compra: " << descripcionCompra << endl;
    s << "Monto: " << monto << endl;
    s << "Monto pendiente: " << montoPendiente << endl;
    s << "Monto pago mensual: " << montoPagoMensual << endl;
    return s.str();
}

