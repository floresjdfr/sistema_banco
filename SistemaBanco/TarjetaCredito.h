#ifndef TARJETACREDITO_H
#define	TARJETACREDITO_H

#include "Tarjeta.h"

class TarjetaCredito : public Tarjeta{
    
public:
    TarjetaCredito();
    TarjetaCredito(float, Fecha*, Fecha*, Fecha*, int, Cliente*);//saldo, fecha corte, fecha limite, fecha caducidad, numeroTarjeta, cliente
    virtual ~TarjetaCredito();
    
    //Sets
    void setPuntos(int);
    void setSaldo(float);
    void setLimiteSaldo(float); //Limite tarjeta
    void setNumeroTarjeta(int);
    void setFechaExpiracion(Fecha*);
    void setCodigoSeguridad(int);
    void setEstadoCuenta(Lista<Voucher>*);
    void setPuntos(int);
    void setCliente(Cliente*);
    

    
    //Gets
    int getPuntos();
    float getSaldo();
    float getLimiteSaldo();
    Fecha* getFechaExpiracion();
    Fecha* getFechaCorte();
    Fecha* getFechaLimite();
    int getCodigoSeguridad();
    int getNumeroTarjeta();
    int getPuntos();
    Lista<Voucher>* getEstadoCuenta(); //Retorna lista de Vouchers
    Cliente* getCliente();
    
    //Metodos
    void ganarPuntos(float);
    string toString();
    string realizarTransaccion(float, string, Fecha*, Transaccion&); //Metodo para comprar
    
private:
    float limiteSaldo;
    float saldo;
    Fecha* fechaCorte;
    Fecha* fechaLimite;
    Fecha* fechaExpiracion;
    int puntos;/*puntos que se acumulan al usar la tarjeta de credito*/
    int numeroTarjeta;
    int codigoSeguridad;
    Lista<Voucher>* estadoCuenta;
    Cliente* cliente;

};

#endif	/* TARJETACREDITO_H */

