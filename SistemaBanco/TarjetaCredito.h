#ifndef TARJETACREDITO_H
#define	TARJETACREDITO_H

#include "Tarjeta.h"

class TarjetaCredito : public Tarjeta{
public:
    TarjetaCredito();
    TarjetaCredito(float, Fecha*, Fecha*, int);//saldo, fecha corte, fecha limite, puntos
    virtual ~TarjetaCredito();
    
    //Sets
    void setPuntos(int);
    void setSaldo(float);
    void setSaldoMaximo(float);
    void setFechaCorte(Fecha*);
    void setFechaLimite(Fecha*);
    
    //Gets
    int getPuntos();
    float getSaldo();
    float getSaldoMaximo();
    Fecha* getFechaCorte();
    Fecha* getFechaLimite();
    string getEstadoCuenta(); //Retorna lista de Vouchers
    
    //Metodos
    void ganarPuntos(float);
    string toString();
    string realizarTransaccion(float, string, Fecha*, Transaccion&); //Metodo para comprar
    
private:
    float saldoMaximo;
    float saldo;
    Fecha* fechaCorte;
    Fecha* fechaLimite;
    int puntos; /*puntos que se acumulan al usar la tarjeta de credito*/
    Lista<string>* estadoCuenta;
};

#endif	/* TARJETACREDITO_H */

