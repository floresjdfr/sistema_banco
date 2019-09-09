/* 
 * File:   Persona.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 4:33 PM
 */

#include "Persona.h"

Persona::Persona(string Nombre, string Identificacion, string CorreoElectronico, int Edad,
        float Salario) {
    nombre = Nombre;
    identificacion = Identificacion;
    correoElectronico = CorreoElectronico;
    edad = Edad;
    salario = Salario;
}

Persona::Persona(){
    nombre = " ";
    identificacion = " ";
    correoElectronico = " ";
    edad = 0;
    salario = 0.0;
    
}


//Sets
    void Persona::setNombre(string Nombre){
        nombre = Nombre;
    }
    void Persona::setIdentificacion(string Identificacion){
        identificacion = Identificacion;
    }
    void Persona::setCorreoElectronico(string CorreoElectronico){
        correoElectronico = CorreoElectronico;
    }
    void Persona::setEdad(int Edad){
        edad = Edad;
    }
    void Persona::setSalario(float Salario){
        salario = Salario;
    }

    
    //Gets
    
    string Persona::getNombre() const{
        return nombre;
    }
    string Persona::getIdentificacion() const{
        return identificacion;
    }
    string Persona::getCorreoElectronico() const{
        return correoElectronico;
    }
    int Persona::getEdad() const{
        return edad;
    }
    float Persona::getSalario() const{
        return salario;
    }
    
    
    //Otros metodos
    
    string Persona::toString() const{
        stringstream s;
        s << "Nombre: " << nombre << endl;
        s << "Identificacion: " << identificacion << endl;
        s << "Edad: " << edad << endl;
        s << "Salario: " << salario << endl;
        s << "Correo electronico: " << correoElectronico << endl;
        return s.str();
    }