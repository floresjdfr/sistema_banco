/* 
 * File:   Compra.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 3:01 AM
 */

#ifndef COMPRA_H
#define	COMPRA_H
#include "Fecha.h"
#include <iostream>

using namespace std;

class Compra {
public:
    Compra();
    Compra(bool, float, float, float, int, int, Fecha*, string);
    
    //Sets
    
    void setEstado(bool);
    void setMonto(float);
    void setMontoPendiente(float);
    void setMontoPagoMensual(float);
    void setNumeroTarjeta(int);
    void setCodigoSeguridad(int);
    void setFechaExpiracion(Fecha*);
    void setDescripcionCompra(string);
    
    
    //Gets
    
    bool getEstado() const;
    float getMonto() const;
    float getMontoPendiente() const;
    float getMontoPagoMensual() const;
    int getnumeroTarjeta() const;
    int getCodigoSeguridad() const;
    Fecha* getFechaExpiracion() const;
    string getDescripcion() const;
    
    
    string toString() const;
    
    
    
    
private:
    bool estado; //Este atributo cambiara de verdadero a falso una vez la compra este pagada en su totalidad
    float monto;
    float montoPendiente;
    float montoPagoMensual;
    int numeroTarjeta;
    int codigoSeguridad;
    Fecha* expiracion;
    string descripcionCompra;

};

#endif	/* COMPRA_H */

