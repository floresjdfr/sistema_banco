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

Compra::Compra(bool Estado, float Monto,float MontoPagoMensual,
    Fecha* fechaa, string Descripcion){
    estado = Estado;
    monto = Monto;
    montoPendiente = Monto;
    montoPagoMensual = MontoPagoMensual;
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
void Compra::setFecha(Fecha& fec){
    fecha = &fec;
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
Fecha* Compra::getFecha(){
    return fecha;
}
    
string Compra::toString() const{
    stringstream s;
    s << "VOUCHER COMPRA" << endl;
    s << "Fecha: " << fecha->toString() << endl;
    s << "Descipcion compra: " << descripcionCompra << endl;
    s << "Monto: " << monto << endl;
    s << "--------------------------------------" << endl;
    return s.str();
}

string Compra::toStringPendiente() const{
    stringstream s;
    s << "VOUCHER COMPRA A PAGOS" << endl;
    s << "Descipcion compra: " << descripcionCompra << endl;
    s << "Monto: " << monto << endl;
    s << "Monto pendiente: " << montoPendiente << endl;
    s << "Monto pago mensual: " << montoPagoMensual << endl;
    s << "--------------------------------------" << endl;
    return s.str();
}

istream& operator >>(istream& entrada, Compra& nCompra){
    int op;
    float mc, mp;
    string des;
    Fecha fec;
    cout<<"Seleccione el metodo de compra realizado: "<<endl;
    cout<<"------------------------------------------" << endl;
    cout<<"1 - Compra al contado. "<<endl;
    cout<<"2 - Compra por cuotas. "<<endl;
    cout<<"------------------------------------------" << endl;
    cout<<"Opcion: ";
    entrada>>op;
    switch(op){
        case 1:{
            cout<<"Descripcion de la compra: ";
            entrada>>des;
            cout<<"Monto de la compra: ";
            entrada>>mc;
            entrada>>fec;
            nCompra.setFecha(fec);
            nCompra.setDescripcionCompra(des);
            nCompra.setMonto(mc);
            nCompra.setEstado(false);
            nCompra.setMontoPendiente(0.0);
            nCompra.setMontoPagoMensual(0.0);
        }
        case 2:{
            cout<<"Descripcion de la compra: ";
            entrada>>des;
            cout<<"Monto de la compra: ";
            entrada>>mc;
            cout<<"Establezca monto del cuota mensual: ";
            entrada>>mp;
            entrada>>fec;
            nCompra.setFecha(fec);
            nCompra.setDescripcionCompra(des);
            nCompra.setMonto(mc);
            nCompra.setMontoPendiente(mc);
            nCompra.setMontoPagoMensual(mp);
            nCompra.setEstado(true);
        }
        default: ;
    }
    return entrada;
}

ostream& operator <<(ostream& salida, Compra& nCompra){
    if(nCompra.getEstado())
        return salida<<nCompra.toStringPendiente()<<endl;
    return salida<<nCompra.toString()<<endl;
}