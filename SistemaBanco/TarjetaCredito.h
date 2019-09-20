/* 
 * File:   TarjetaCredito.h
 * Author: Jose David
 *
 * Created on September 9, 2019, 5:38 PM
 */

#ifndef TARJETACREDITO_H
#define	TARJETACREDITO_H

#include "Tarjeta.h"



class TarjetaCredito : public Tarjeta{
public:
    TarjetaCredito();
    TarjetaCredito(float, Fecha*, Fecha*, int);//saldo, fecha corte, fecha limite, puntos
    virtual ~TarjetaCredito();
    
    //Sets
    
    void setSaldo(float);
    
    
    //Gets
    
    float getSaldo();
    Lista<Voucher>* getEstadoCuenta(); //Retorna lista de Vouchers
    
    //Metodos
    
    void ganarPuntos(float);
    string toString();
    void comprar(float, string, Fecha*, Procesar&); //Metodo para comprar
    
    
private:
    float saldo;
    Fecha* fechaCorte;
    Fecha* fechaLimite;
    int puntos;/*puntos que se acumulan al usar la tarjeta de credito*/
    Lista<Voucher>* estadoCuenta;

};

#endif	/* TARJETACREDITO_H */

