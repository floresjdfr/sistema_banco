

#ifndef PROCESARCOMPRACUOTAS_H
#define	PROCESARCOMPRACUOTAS_H

#include "Procesar.h"

class ProcesarCompraCuotas : public Procesar{
public:
    ProcesarCompraCuotas();
    void setCuotas(int);
    
    int getCuotas();
    
    bool verificaSaldo(float, Tarjeta&); //Verifica que la tarjeta tenga saldo. Recibe monto de compra y tarjeta
    void procesarTransaccion(float, string, Fecha*, Tarjeta&); //Procesa la compra. Recibe el monto, monto mensual, descripcion, fecha, tarjeta
private:
    int cuotas;
        
};

#endif	/* PROCESARCOMPRACUOTAS_H */

