
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
    compras = new ListaCompra;
    pagos = new Lista<Pago>;
}

TarjetaCredito::TarjetaCredito(float Saldo, Fecha* corte, Fecha* limite, Fecha* Expiracion, long long int NumeroCuenta, Persona* Cliente){//saldo, fecha corte, fecha limite, fecha caducidad, numeroTarjeta, cliente
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
    pagos = new Lista<Pago>;
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
void TarjetaCredito::setNumeroTarjeta(long long int Numero){
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
void TarjetaCredito::setPagos(Lista<Pago>* lista){
    pagos = lista;
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
long long int TarjetaCredito::getNumeroTarjeta(){
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
Lista<Pago>* TarjetaCredito::getPagos(){
    return pagos;
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

void TarjetaCredito::comprar(Compra c, Procesar& p){
    /*Este es el metodo encargado de ejecutar las compras*/
    p.procesarTransaccion(c.getMonto(), c.getDescripcion(), c.getFecha(), *this);
}

void TarjetaCredito::pagar(Pago pag, Procesar& p){
    /*Este es el metodo encargado de ejecutar los pagos*/
    p.procesarTransaccion(pag.getMonto(), pag.getDescripcion(), pag.getFecha(), *this);
}


float TarjetaCredito::obtenerSaldoFechaCorte(){
    if(!moroso){
        return compras->montoALaFecha(fechaCorte);
    }
}

float TarjetaCredito::obtenerSaldoTotal(){
    float mTotal = 0.0;
    float mCompras = compras->montoALaFecha(fechaLimite);
    if(moroso){
        float adicional = (mCompras * 0.02) + (mCompras * 0.09);
        mTotal += mCompras + adicional;
    }
    mTotal += mCompras;
    return mTotal;
}

float TarjetaCredito::pagoMinimo(){
    return (limiteSaldo - saldo) / 3;
}

istream& operator >>(istream& entrada, TarjetaCredito& t){
    float s;
    long long int numT;
    int cod;
    Fecha exp;
    Persona p;
    cout<<"Cliente: "<<endl;
    entrada>>p;
    t.setCliente(&p);
    
    
    int d, m, a;
    
    d = rand() % 30 + 1;
    m = rand() % 12 + 1;
    a = rand() % 26 + 2019;
    
    exp.setDia(d);
    exp.setMes(m);
    exp.setAno(a);
    
    t.setFechaExpiracion(&exp);
    
    cod = rand() % 999 + 100;
    t.setCodigoSeguridad(cod);
    
    numT = rand() % 9999999999999999 + 1000000000000000;
    t.setNumeroTarjeta(numT);
    
    t.setLimiteSaldo(p.getSalario() * 0.4);
    t.setSaldo(p.getSalario() * 0.4);
    
    cout << "Numero Tarjeta: " << t.getNumeroTarjeta() << endl;

    
    return entrada;
}

ostream& operator <<(ostream& salida, TarjetaCredito& t){
    return salida<<t.toString()<<endl;
}