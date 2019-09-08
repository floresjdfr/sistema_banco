/* 
 * File:   Compra.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 6:21 PM
 */

#ifndef COMPRA_H
#define	COMPRA_H

#include "Transaccion.h"
#include "Fecha.h"

class Compra : public Transaccion {
public:
    Compra(float, string, Fecha*);
    Compra();
    
    //Sets
    void setValor(float);
    void setTienda(string);
    void setFecha(Fecha*);
    
    //Gets
    float getValor() const;
    string getTienda() const;
    Fecha* getFecha() const;
    
    //Otros metodos
    string toString() const; //Sirve para generar el vaucher de esta compra
    
private:
    float valor;
    string tienda; //Lugar donde se hace la compra
    Fecha* fecha;

};

#endif	/* COMPRA_H */

