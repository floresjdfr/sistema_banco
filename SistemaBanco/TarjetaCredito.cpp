#include "TarjetaCredito.h"
#include "Transaccion.h"

TarjetaCredito::TarjetaCredito() {
    saldoMaximo = 0.0;
    saldo = 0.0;
    fechaCorte = NULL;
    fechaLimite = NULL;
    estadoCuenta = new Lista<string>();
}

TarjetaCredito::TarjetaCredito(float Saldo , Fecha* corte, Fecha* limite, int Puntos){
    saldoMaximo = Saldo;
    saldo = Saldo;
    fechaCorte = corte;
    fechaLimite = limite;
    puntos = Puntos;
    estadoCuenta = new Lista<Voucher>();
}

TarjetaCredito::~TarjetaCredito() {
    
}


//Sets

void TarjetaCredito::setPuntos(int pts){
    puntos = pts;
}

void TarjetaCredito::setSaldo(float Saldo){
    saldo = Saldo;
}

void TarjetaCredito::setSaldoMaximo(float saldoMax){
    saldoMaximo = saldoMax;
}

void TarjetaCredito::setFechaCorte(Fecha* fCorte){
    fechaCorte = fCorte;
}

void TarjetaCredito::setFechaLimite(Fecha* fLimite){
    fechaLimite = fLimite;
}

//Gets

int TarjetaCredito::getPuntos(){
    return puntos;
}

float TarjetaCredito::getSaldo(){
    return saldo;
}
float TarjetaCredito::getSaldoMaximo(){
    return saldoMaximo;
}

Fecha* TarjetaCredito::getFechaCorte(){
    return fechaCorte;
}

Fecha* TarjetaCredito::getFechaLimite(){
    return fechaLimite;
}

string TarjetaCredito::getEstadoCuenta(){
    return estadoCuenta->toString();
}


/*Metodos*/

void TarjetaCredito::ganarPuntos(float monto){ 
    if(monto <= 10000){
        puntos += monto / 1000;
    }
}

string TarjetaCredito::toString(){
    stringstream r;
    r<<"Saldo (Maximo): "<<this->getSaldoMaximo()<<endl;
    r<<"Saldo (Disponible): "<<this->getSaldo()<<endl;
    r<<"Puntos Acumulados: "<<this->getPuntos()<<endl;
    r<<"Fecha Corte: "<<this->getFechaCorte()<<endl;
    r<<"Fecha Limite: "<<this->getFechaLimite()<<endl;
    return r.str();
}

string TarjetaCredito::realizarTransaccion(float monto, string lugar, Fecha* fecha, Transaccion& transaccion){
    transaccion.procesarTransaccion(monto, lugar, fecha, *this);
    estadoCuenta->agregar(transaccion.imprimirVoucher());
    return transaccion.imprimirVoucher();
}