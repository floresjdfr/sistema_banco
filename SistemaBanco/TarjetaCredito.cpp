/* 
 * File:   TarjetaCredito.cpp
 * Author: Jose David
 * 
 * Created on September 9, 2019, 5:38 PM
 */

#include "TarjetaCredito.h"
#include "ProcesarCompra.h"

TarjetaCredito::TarjetaCredito() {
    saldo = 0.0;
    fechaCorte = NULL;
    fechaLimite = NULL;
    estadoCuenta = new Lista<Voucher>;
}

TarjetaCredito::TarjetaCredito(float Saldo , Fecha* corte, Fecha* limite, int Puntos){
    saldo = Saldo;
    fechaCorte = corte;
    fechaLimite = limite;
    puntos = Puntos;
    estadoCuenta = new Lista<Voucher>;
}

TarjetaCredito::~TarjetaCredito() {
}

//Sets

void TarjetaCredito::setSaldo(float Saldo){
    saldo = Saldo;
}

//Gets

float TarjetaCredito::getSaldo(){
    return saldo;
}

Lista<Voucher>* TarjetaCredito::getEstadoCuenta(){
    return estadoCuenta;
}


/*Metodos*/


string TarjetaCredito::toString(){
    stringstream s;
    s << "Saldo: " << saldo << endl;
    return s.str();
}

void TarjetaCredito::ganarPuntos(float monto){ 
    if(monto <= 10000){
        puntos += monto / 1000;
    }
}


void TarjetaCredito::comprar(float monto, string lugar, Fecha* fecha, ProcesarCompra& p){
    
    p.procesarTransaccion(monto, lugar, fecha, *this);
}