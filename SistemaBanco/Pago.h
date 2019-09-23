#ifndef PAGO_H
#define	PAGO_H

#include "Transaccion.h"
#include "Tarjeta.h"
#include "Fecha.h"

class Tarjeta;

class Pago : public Transaccion{
public:
    Pago();
    Pago(float, string, Fecha*);
    Pago(float, float, bool, bool, Fecha*, string);
    ~Pago();
    
    //Sets
    void setMonto(float);
    void setMontoAcumulado(float);
    void setMorosidad(bool);
    void setInteres(bool);
    void setFecha(Fecha*);
    void setDescripcion(string);
    
    //Gets
    float getMorosidad();
    float getMonto();
    float getMontoAcumulado();
    Fecha* getFecha();
    string getDescripcion();
    
    string toString() const; //Este es el voucher si el pago se dio completo
private:
    float monto;
    float montoAcumulado;
    bool interes;
    bool morosidad;
    Fecha* fecha;
    string descripcion;
};

istream& operator >>(istream&, Pago&);
ostream& operator <<(ostream&, Pago&);

#endif	/* PAGO_H */

