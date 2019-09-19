/* 
 * File:   TarjetaCredito.h
 * Author: Jose David
 *
 * Created on September 9, 2019, 5:38 PM
 */

#ifndef TARJETACREDITO_H
#define	TARJETACREDITO_H

#include "Tarjeta.h"
#include "Fecha.h"
#include "Compra.h"

class TarjetaCredito : public Tarjeta{
public:
    TarjetaCredito();
    virtual ~TarjetaCredito();
    
    //Sets
    
    void setSaldo(float);
    
    
    //Gets
    
    float getSaldo();
    
    //Metodos
    
    void ganarPuntos(float);
    
    
private:
    float saldo;
    Fecha* fechaCorte;
    Fecha* fechaLimite;
    int puntos;/*puntos que se acumulan al usar la tarjeta de credito*/

};

#endif	/* TARJETACREDITO_H */

