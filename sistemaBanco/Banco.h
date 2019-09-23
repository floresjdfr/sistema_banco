
#ifndef BANCO_H
#define	BANCO_H

#include "Tarjeta.h"
#include "ListaTarjeta.h"


class Banco {
public:
    Banco();
    Banco(string, ListaTarjeta*);
    Banco(string);
    virtual ~Banco();
    
    void setListaTarjetas(ListaTarjeta*);
    void setNombre(string);
    
    ListaTarjeta* getListaTarjetas();
    string getNombre();
        
    
private:
    ListaTarjeta* tarjetas;
    string nombre;
};

#endif	/* BANCO_H */

