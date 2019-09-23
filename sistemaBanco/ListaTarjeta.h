

#ifndef LISTATARJETA_H
#define	LISTATARJETA_H

#include "Lista.h"
#include "Tarjeta.h"
#include "IteradorLista.h" 
#include "Persona.h"

class ListaTarjeta : public Lista<Tarjeta>{
public:
    ListaTarjeta();
    string busquedaTarjetasIdentificacion(string);//Busqueda de tarjetas buscando por identificacion cliente
    bool eliminaTarjetasIdentificacion(string); //Elimina tarjetas buscando por identificacion
    bool eliminaTarjetaNumero(int);
    bool busquedaTarjetaNumero(int); //buscar la tarjeta por numero de tarjeta y retorna true si la encuentra
    Tarjeta* tarjetaNumero(int); //Retorna la tarjeta, ingresando por parametreo el numero de tarjeta
    
};

#endif	/* LISTATARJETA_H */

