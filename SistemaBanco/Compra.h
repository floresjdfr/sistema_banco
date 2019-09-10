/* 
 * File:   Compra.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 6:21 PM
 */


//Esta clase funcionara para registar una compra o un pago

#ifndef COMPRA_H
#define	COMPRA_H

/*En esta clase se generara una trasacccion compra o pago de servicio*/

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
    string tienda; //variable que guarda el lugar donde se hace la compra o el servicio que se paga
    Fecha* fecha;

};

#endif	/* COMPRA_H */

