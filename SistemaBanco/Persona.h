/* 
 * File:   Persona.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:33 PM
 */

#ifndef PERSONA_H
#define	PERSONA_H

#include "Cliente.h"

#include <iostream>
#include <sstream>



class Persona : public Cliente {
public:
    Persona(string, string, string, int, float); 
    Persona();
    
    //Sets
    void setNombre(string);
    void setIdentificacion(string);
    void setCorreoElectronico(string);
    void setEdad(int);
    void setSalario(float);
    void setTarjetas(Lista<TarjetaCredito>*);
    
    //Gets
    string getNombre() const;
    string getIdentificacion() const;
    string getCorreoElectronico() const;
    int getEdad() const;
    float getSalario() const;
    Lista<TarjetaCredito>* getTarjetas();
    
    //Otros metodos
    string toString() const;
    
    
private:
    string nombre;
    string identificacion;
    string correoElectronico;
    int edad;
    float salario;
    Lista<TarjetaCredito>* tarjetas;
};
#endif	/* PERSONA_H */
