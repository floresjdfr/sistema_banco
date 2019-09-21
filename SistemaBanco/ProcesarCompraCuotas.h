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
    bool verificaSaldo(float, Tarjeta&);
    void procesarTransaccion(float, float, string, Fecha*, Tarjeta&);
};

#endif	/* PROCESARCOMPRACUOTAS_H */

