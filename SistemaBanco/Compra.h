/* 
 * File:   Compra.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 3:01 AM
 */

#ifndef COMPRA_H
#define	COMPRA_H

#include "Transaccion.h"
#include "Utiles.h"

#include <iostream>

using namespace std;

class Compra : public Transaccion{
public:
    Compra();
    Compra(bool, float, float, Fecha*, string);
    Compra(float, Fecha*, string);
    
    //Sets
    
    void setEstado(bool);
    void setMonto(float);
    void setMontoPendiente(float);
    void setMontoPagoMensual(float);
    void setDescripcionCompra(string);
    void setFecha(Fecha&);
    
    
    //Gets
    
    bool getEstado() const;
    float getMonto() const;
    float getMontoPendiente() const;
    float getMontoPagoMensual() const;
    string getDescripcion() const;
    Fecha* getFecha();
    
    
    string toString() const; //Este es el voucher si el pago se dio completo
    string toStringPendiente() const; //Este es el voucher Cuando Queda un pago Pendiente
    
    
    
    
private:
    bool estado; //Este atributo cambiara de verdadero a falso una vez la compra este pagada en su totalidad
    float monto;
    float montoPendiente;
    float montoPagoMensual;
    Fecha* fecha;
    string descripcionCompra;

};

istream& operator >>(istream&, Compra&);
ostream& operator <<(ostream&, Compra&);

#endif	/* COMPRA_H */

