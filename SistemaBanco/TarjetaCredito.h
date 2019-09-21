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
    TarjetaCredito(float, Fecha*, Fecha*, Fecha*, int, Persona*);//saldo, fecha corte, fecha limite, fecha caducidad, numeroTarjeta, cliente
    virtual ~TarjetaCredito();
    
    //Sets
    
    void setSaldo(float);
    void setLimiteSaldo(float); //Limite tarjeta
    void setNumeroTarjeta(int);
    void setFechaExpiracion(Fecha*);
    void setCodigoSeguridad(int);
    void setPuntos(int);
    void setCliente(Persona*);
    void setMoroso(bool);
    

    
    //Gets
    
    bool getMoroso();
    float getSaldo();
    float getLimiteSaldo();
    Fecha* getFechaExpiracion();
    Fecha* getFechaCorte();
    Fecha* getFechaLimite();
    int getCodigoSeguridad();
    int getNumeroTarjeta();
    int getPuntos();
    Persona* getCliente();
    
    //Metodos
    
    void ganarPuntos(float);
    string toString();
    void comprar(float, string, Fecha*, Procesar&); //Metodo para comprar
    bool verificaSaldo(float);//Verifica que la persona tenga cuenta disponible
   
    
    
private:
    bool moroso;
    float limiteSaldo;
    float saldo;
    Fecha* fechaCorte;
    Fecha* fechaLimite;
    Fecha* fechaExpiracion;
    int puntos;/*puntos que se acumulan al usar la tarjeta de credito*/
    int numeroTarjeta;
    int codigoSeguridad;
    Persona* cliente;

};

#endif	/* TARJETACREDITO_H */

