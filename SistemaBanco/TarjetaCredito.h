

#ifndef TARJETACREDITO_H
#define	TARJETACREDITO_H

#include "Tarjeta.h"
#include "ListaCompra.h"




class TarjetaCredito : public Tarjeta{
    
public:
    TarjetaCredito();
    TarjetaCredito(float, Fecha*, Fecha*, Fecha*, long long int, Persona*);//saldo, fecha corte, fecha limite, fecha caducidad, numeroTarjeta, cliente
    virtual ~TarjetaCredito();
    
    //Sets
    
    void setSaldo(float);
    void setLimiteSaldo(float); //Limite tarjeta
    void setNumeroTarjeta(long long int);
    void setFechaExpiracion(Fecha*);
    void setCodigoSeguridad(int);
    void setPuntos(int);
    void setCliente(Persona*);
    void setMoroso(bool);
    void setCompras(ListaCompra*);
    void setPagos(Lista<Pago>*);
    

    
    //Gets
    
    bool getMoroso();
    float getSaldo();
    float getLimiteSaldo();
    Fecha* getFechaExpiracion();
    Fecha* getFechaCorte();
    Fecha* getFechaLimite();
    int getCodigoSeguridad();
    long long int getNumeroTarjeta();
    int getPuntos();
    Persona* getCliente();
    ListaCompra* getCompras();
    Lista<Pago>* getPagos();
    
    //Metodos
    
    void ganarPuntos(float); //Metodo para ganar puntos al usar la tarjeta. Estos serviran despues para pagar
    string toString(); /*Muestra datos del tarjeta*/
    
    bool verificaSaldo(float);//Verifica que la persona tenga aalfo en la cuenta disponible comparado con el monto de la compra

    void comprar(Compra, Procesar&);
    void pagar(Pago, Procesar&);
    float obtenerSaldoFechaCorte();
    float obtenerSaldoTotal();

    
private:
    bool moroso; //Boleano que es verdadero cuando la persona no paga a tiempo
    float limiteSaldo; //Maximo saldo de la tarjeta
    float saldo;
    Fecha* fechaCorte;
    Fecha* fechaLimite;
    Fecha* fechaExpiracion; 
    int puntos;/*puntos que se acumulan al usar la tarjeta de credito*/
    long long int numeroTarjeta;
    int codigoSeguridad;
    Persona* cliente;
    ListaCompra* compras;
    Lista<Pago>* pagos;
    

};

istream& operator >>(istream&, TarjetaCredito&);
ostream& operator <<(ostream&, TarjetaCredito&);

#endif	/* TARJETACREDITO_H */

