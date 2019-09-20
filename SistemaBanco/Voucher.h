/* 
 * File:   Transaccion.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 6:19 PM
 */


/*Clase abstracta de la cual heredaran las transacciones que se realicen con las 
 tarjetas*/

#ifndef VOUCHER_H
#define	VOUCHER_H

#include "Fecha.h"

#include <iostream>
#include <sstream>

using namespace std;


class Voucher{
    
public:
    Voucher();
    Voucher(float, string, Fecha*); //monto, lugar, fecha
    
    //Sets
    void setMonto(float);
    void setLugar(string);
    
    //Gets
    
    float getMonto();
    string getLugar();
    
    
    //Otros
    
    string toString();
    
    
private:
    float monto;
    string lugar;
    Fecha* fecha;
};

#endif	/* VOUCHER_H */

