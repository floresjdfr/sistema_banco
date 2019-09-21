/* 
 * File:   TarjetaCredito.h
 * Author: Jose David
 *
 * Created on September 9, 2019, 5:38 PM
 */

#ifndef TARJETACREDITO_H
#define	TARJETACREDITO_H

#include "Tarjeta.h"



class TarjetaCredito : public Tarjeta{
    
public:
    TarjetaCredito();
    TarjetaCredito(float, Fecha*, Fecha*, Fecha*, int, Cliente*);//saldo, fecha corte, fecha limite, fecha caducidad, numeroTarjeta, cliente
    virtual ~TarjetaCredito();
    
    //Sets
    
    void setSaldo(float);
    void setLimiteSaldo(float); //Limite tarjeta
    void setNumeroTarjeta(int);
    void setFechaExpiracion(Fecha*);
    void setCodigoSeguridad(int);
    void setEstadoCuenta(Lista<Voucher>*);
    void setPuntos(int);
    void setCliente(Cliente*);
    

    
    //Gets
    
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
    void comprar(float, string, Fecha*, Procesar&); //Metodo para comprar
    
    
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

