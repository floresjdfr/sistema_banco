#include "PagoMinimo.h"

PagoMinimo::PagoMinimo(){
    
}

PagoMinimo::~PagoMinimo(){
    
}

bool PagoMinimo::procesarTransaccion(float monto, string lugar, Fecha* fecha, TarjetaCredito& cuenta){
    if (fecha <= cuenta.getFechaCorte()){
        if(this->verificaPago(monto, cuenta))
            return true;
    }
    return false;
}


bool PagoMinimo::verificaPago(float monto, TarjetaCredito& cuenta){
    float deuda = cuenta.getSaldoMaximo() - cuenta.getSaldo();
    float saldoPago = cuenta.getSaldoMaximo() - monto;
    if (monto >= (deuda * 2/3)){
        cuenta.setSaldo(cuenta.getSaldo() + saldoPago);
        return true;
    }
    return false;
}

string PagoMinimo::imprimirVoucher(float monto, string lugar, Fecha* fecha, TarjetaCredito& cuenta){
    stringstream s;
    s<<"-------------- PAGO MINIMO DE SALDO ----------------"<<endl<<endl;
    s<<"Numero de tarjeta: "<<cuenta.getNumeroCuenta()<<endl;
    s<<"Sucursal: "<<lugar<<endl;
    s<<"Fecha: "<<fecha<<endl<<endl;
    s<<"Datos de Tarjetahabiente: ";
    s<<cuenta.getCliente()<<endl;
    s<<"Monto cancelado: "<<monto<<endl<<endl;
    s<<"----------------------------------------------------"<<endl<<endl;
    return s.str();
} 