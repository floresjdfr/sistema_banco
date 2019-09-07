/* 
 * File:   Persona.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:33 PM
 */

#include "Cliente.h"

#ifndef PERSONA_H
#define	PERSONA_H

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

#endif	/* PERSONA_H */

