#include "TarjetaCredito.h"
#include "Transaccion.h"

TarjetaCredito::TarjetaCredito() {
    limiteSaldo = 0.0;
    saldo = 0.0;
    fechaCorte = NULL;
    fechaLimite = NULL;
    fechaExpiracion = NULL;
    puntos = 0;
    numeroTarjeta = 0;
    codigoSeguridad = 0;
    estadoCuenta = new Lista<Voucher>;
    cliente = NULL;
}

TarjetaCredito::TarjetaCredito(float Saldo, Fecha* corte, Fecha* limite, Fecha* Expiracion, int NumeroCuenta, Cliente* cliente){//saldo, fecha corte, fecha limite, fecha caducidad, numeroTarjeta, cliente
    limiteSaldo = Saldo;
    saldo = Saldo;
    fechaCorte = corte;
    fechaLimite = limite;
    fechaExpiracion = Expiracion;
    puntos = 0;
    numeroTarjeta = NumeroCuenta;
    codigoSeguridad = 0;
    estadoCuenta = new Lista<Voucher>;
    cliente = cliente;
}

TarjetaCredito::~TarjetaCredito() {
    delete estadoCuenta;
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
void TarjetaCredito::setEstadoCuenta(Lista<Voucher>* vouchers){
    estadoCuenta = vouchers;
}
void TarjetaCredito::setPuntos(int Puntos){
    puntos = Puntos;
}
void TarjetaCredito::setCliente(Cliente* cliente_){
    cliente = cliente_;
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
float TarjetaCredito::getLimiteSaldo(){
    return limiteSaldo;
}

Fecha* TarjetaCredito::getFechaCorte(){
    return fechaCorte;
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
Cliente* TarjetaCredito::getCliente(){
    return cliente;
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

void TarjetaCredito::comprar(float monto, string lugar, Fecha* fecha, Procesar& p){ 
    p.procesarTransaccion(monto, lugar, fecha, *this);
}