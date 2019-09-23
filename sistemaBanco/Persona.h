

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
    
    //Gets
    string getNombre() const;
    string getIdentificacion() const;
    string getCorreoElectronico() const;
    int getEdad() const;
    float getSalario() const;
    
    //Otros metodos
    string toString() const;
    float capacidadPago(); //Este metodo calcula la capacidad de pago de la persona, esta es un 60% del salario
    
    
private:
    string nombre;
    string identificacion;
    string correoElectronico;
    int edad;
    float salario;
};

istream& operator >>(istream&, Persona&);
ostream& operator <<(ostream&, Persona&);

#endif	/* PERSONA_H */
