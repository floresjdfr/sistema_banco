/* 
 * File:   TarjetaCredito.cpp
 * Author: Jose David
 * 
 * Created on September 9, 2019, 5:38 PM
 */

#include "TarjetaCredito.h"

TarjetaCredito::TarjetaCredito() {
    moroso = false;
    limiteSaldo = 0.0;
    saldo = 0.0;
    fechaCorte = NULL;
    fechaLimite = NULL;
    fechaExpiracion = NULL;
    puntos = 0;
    numeroTarjeta = 0;
    codigoSeguridad = 0;
    cliente = NULL;
    compras = NULL;
}

TarjetaCredito::TarjetaCredito(float Saldo, Fecha* corte, Fecha* limite, Fecha* Expiracion, int NumeroCuenta, Persona* Cliente){//saldo, fecha corte, fecha limite, fecha caducidad, numeroTarjeta, cliente
    moroso = false;
    limiteSaldo = Saldo;
    saldo = Saldo;
    fechaCorte = corte;
    fechaLimite = limite;
    fechaExpiracion = Expiracion;
    puntos = 0;
    numeroTarjeta = NumeroCuenta;
    codigoSeguridad = 0;
    cliente = Cliente;
    compras = new ListaCompra;
}

TarjetaCredito::~TarjetaCredito() {
}

//Sets


void TarjetaCredito::setSaldo(float Saldo){
    saldo = Saldo;
}
void TarjetaCredito::setLimiteSaldo(float limite) //Limite tarjeta
{
    limiteSaldo = limite;
}
void TarjetaCredito::setNumeroTarjeta(int Numero){
    numeroTarjeta = Numero;
}
void TarjetaCredito::setFechaExpiracion(Fecha* exp){
    fechaExpiracion = exp;
}
void TarjetaCredito::setCodigoSeguridad(int codigo){
    codigoSeguridad = codigo;
}
void TarjetaCredito::setPuntos(int Puntos){
    puntos = Puntos;
}
void TarjetaCredito::setCliente(Persona* cliente_){
    cliente = cliente_;
}
void TarjetaCredito::setMoroso(bool Moroso){
    moroso = Moroso;
}
void TarjetaCredito::setCompras(ListaCompra* Compras){
    compras = Compras;
}

//Gets

bool TarjetaCredito::getMoroso(){
    return moroso;
}
float TarjetaCredito::getSaldo(){
    return saldo;
}
float TarjetaCredito::getLimiteSaldo(){
    return limiteSaldo;
}
int TarjetaCredito::getNumeroTarjeta(){
    return numeroTarjeta;
}
Fecha* TarjetaCredito::getFechaExpiracion(){
    return fechaExpiracion;
}
Fecha* TarjetaCredito::getFechaCorte(){
    return fechaCorte;
}
Fecha* TarjetaCredito::getFechaLimite(){
    return fechaLimite;
}
int TarjetaCredito::getCodigoSeguridad(){
    return codigoSeguridad;
}
int TarjetaCredito::getPuntos(){
    return puntos;
}
Persona* TarjetaCredito::getCliente(){
    return cliente;
}
ListaCompra* TarjetaCredito::getCompras(){
    return compras;
}


/*Metodos*/


string TarjetaCredito::toString(){
    stringstream s;
    s << "Saldo: " << saldo << endl;
    s << "Cliente: " << endl;
    s << cliente->toString() << endl;
    return s.str();
}
void TarjetaCredito::ganarPuntos(float monto){ 
    if(monto <= 10000){
        puntos += monto / 1000;
    }
}



bool TarjetaCredito::verificaSaldo(float monto){
    return monto <= saldo;
}

void TarjetaCredito::comprar(float monto, float cuota, string descripcion, Fecha* fecha, Procesar& p){
    /*Este es el metodo encargado de ejecutar las compras*/
    p.procesarTransaccion(monto, descripcion, fecha, *this);
}

void TarjetaCredito::pagar(float monto, string descripcion, Fecha* fecha, Procesar& p){
    p.procesarTransaccion(monto, descripcion, fecha, *this);
}