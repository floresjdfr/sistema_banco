/* 
 * File:   ProcesarCompraCuotas.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 1:34 PM
 */

#ifndef PROCESARCOMPRACUOTAS_H
#define	PROCESARCOMPRACUOTAS_H

#include "Procesar.h"

class ProcesarCompraCuotas : public Procesar{
public:
    ProcesarCompraCuotas();
    bool verificaSaldo(float, Tarjeta&); //Verifica que la tarjeta tenga saldo. Recibe monto de compra y tarjeta
    void procesarTransaccion(float, float, string, Fecha*, Tarjeta&); //Procesa la compra. Recibe el monto, monto mensual, descripcion, fecha, tarjeta
    
};

#endif	/* PROCESARCOMPRACUOTAS_H */

