/* 
 * File:   Clientes.h
 * Author: JoseDavid
 *
 * Created on 9 de septiembre de 2019, 08:33 AM
 */

#ifndef CLIENTES_H
#define	CLIENTES_H

#include "Contenedor.h"
#include "Persona.h"
#include "Iterador.h"

class Clientes : public Contenedor<Persona>{
public:
    Clientes();
    virtual ~Clientes();
    void agregar(Persona*);
    
private:
    Nodo<Persona>* primero;
    Nodo<Persona>* actual;

};

#endif	/* CLIENTES_H */

