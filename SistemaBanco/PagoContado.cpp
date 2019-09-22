#include "PagoContado.h"

PagoContado::PagoContado(){
    
}

PagoContado::~PagoContado(){
    
}

bool PagoContado::procesarTransaccion(float monto, string lugar, Fecha* fecha, TarjetaCredito& cuenta){
    if (fecha <= cuenta.getFechaLimite()){
        if(this->verificaPago(monto, cuenta))
            return true
    }
    return false;
}


bool PagoContado::verificaPago(float monto, TarjetaCredito& cuenta){
    float deuda = cuenta.getSaldoMaximo() - cuenta.getSaldo();
    float saldoPago = cuenta.getSaldoMaximo() - monto;
    if (monto >= deuda){
        cuenta.setSaldo(cuenta.getSaldoMaximo());
        return true;
    }
    return false;
}

string PagoContado::imprimirVoucher(float monto, string lugar, Fecha* fecha, TarjetaCredito& cuenta){
    stringstream s;
    s<<"-------------- PAGO CONTADO DE SALDO ----------------"<<endl<<endl;
    s<<"Numero de tarjeta: "<<cuenta.getNumeroCuenta()<<endl;
    s<<"Sucursal: "<<lugar<<endl;
    s<<"Fecha: "<<fecha<<endl<<endl;
    s<<"Datos de Tarjetahabiente: ";
    s<<cuenta.getCliente()<<endl;
    s<<"Monto cancelado: "<<monto<<endl<<endl;
    s<<"----------------------------------------------------"<<endl<<endl;
    return s.str();
} 
