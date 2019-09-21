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
    numeroTarjeta = 0;
    codigoSeguridad = 0;
    expiracion = NULL;
    descripcionCompra = " ";
}

Compra::Compra(bool Estado, float Monto, float MontoPendiente, float MontoPagoMensual,
        int NumeroTarjeta, int CodigoSeguridad, Fecha* Expiracion, string Descripcion){
    estado = Estado;
    monto = Monto;
    montoPendiente = MontoPendiente;
    numeroTarjeta = NumeroTarjeta;
    codigoSeguridad = CodigoSeguridad;
    expiracion = Expiracion;
    descripcionCompra = Descripcion;
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
void Compra::setNumeroTarjeta(int NumeroTarjeta){
    numeroTarjeta = NumeroTarjeta;
}
void Compra::setCodigoSeguridad(int CodigoSeguridad){
    codigoSeguridad = CodigoSeguridad;
}
void Compra::setFechaExpiracion(Fecha* Fecha){
    expiracion = Fecha;
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
int Compra::getnumeroTarjeta() const{
    return numeroTarjeta;
}
int Compra::getCodigoSeguridad() const{
    return codigoSeguridad;
}

Fecha* Compra::getFechaExpiracion() const{
    return expiracion;
}
string Compra::getDescripcion() const{
    return descripcionCompra;
}
    
    
string Compra::toString() const{
    
}

