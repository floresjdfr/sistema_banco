/* 
 * File:   Cliente.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:33 PM
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

#include "Persona.h"

#include <iostream>
#include <sstream>

using namespace std;

class Cliente : public Persona {
public:
    Cliente(string, string, string, int, float);
    Cliente();
    
    //Sets
    void setNombre(string);
    void setIdentificacion(string);
    void setCorreoElectronico(string);
    void setEdad(int);
    void setSalario(float);
    
    //Gets
    string getNombre() const;
    string getIdentificacion() const;
    string getCorreoElectronico() const;
    int getEdad() const;
    float getSalario() const;
    
    //Otros metodos
    string toString() const;
    
    
private:
    string nombre;
    string identificacion;
    string correoElectronico;
    int edad;
    float salario;
};
#endif	/* CLIENTE_H */
