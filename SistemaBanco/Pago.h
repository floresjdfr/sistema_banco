#ifndef PAGO_H
#define	PAGO_H

#include "Transaccion.h"
#include "TarjetaCredito.h"
#include "Fecha.h"

class Pago : public Transaccion{
public:
    Pago();
    Pago(string, Fecha*, Tarjeta&);
    ~Pago();
    //Sets
    void setMonto(float);
    void setMontoAcumulado(float);
    void setMorosidad();
    void setInteres();
    
    //Gets
    float getMorosidad();
    float getMonto();
    float getMontoAcumulado();
    Fecha* getFecha();
    
    string toString() const; //Este es el voucher si el pago se dio completo
private:
    float monto;
    float montoAcumulado;
    float interes;
    bool morosidad;
    Fecha* fecha;
    string descripcion;
};

ostream& operator <<(ostream&, Pago&);

#endif	/* PAGO_H */

