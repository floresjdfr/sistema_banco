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
    
    
    //Metodos
    void nuevaCompra(string, float, Fecha*);/*Recibe por parametro el lugar de compra
                                     o pago del servicio, monto y fecha de transccion*/
    
    
    void ganarPuntos(float); /*La cantidad de puntos dependera del monto de la 
                              compra*/
    
    
private:
    float saldo;
    Fecha* fechaCorte;
    Fecha* fechaLimite;
    int puntos;/*puntos que se acumulan al usar la tarjeta de credito*/

};

#endif	/* TARJETACREDITO_H */

