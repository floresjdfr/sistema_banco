/* 
 * File:   Cliente.cpp
 * Author: Jose David
 * 
 * Created on September 7, 2019, 4:33 PM
 */

#include "Cliente.h"

Cliente::Cliente(string Nombre, string Identificacion, string CorreoElectronico, int Edad, float Salario) {
    nombre = Nombre;
    identificacion = Identificacion;
    correoElectronico = CorreoElectronico;
    edad = Edad;
    salario = Salario;
}

Cliente::Cliente(){
    nombre = " ";
    identificacion = " ";
    correoElectronico = " ";
    edad = 0;
    salario = 0.0;
    
}


//Sets
void Cliente::setNombre(string Nombre){
    nombre = Nombre;
}

void Cliente::setIdentificacion(string Identificacion){
    identificacion = Identificacion;
}

void Cliente::setCorreoElectronico(string CorreoElectronico){
    correoElectronico = CorreoElectronico;
}

void Cliente::setEdad(int Edad){
    edad = Edad;
}

void Cliente::setSalario(float Salario){
    salario = Salario;
}

    
//Gets
string Cliente::getNombre() const{
    return nombre;
}

string Cliente::getIdentificacion() const{
    return identificacion;
}

string Cliente::getCorreoElectronico() const{
    return correoElectronico;
}

int Cliente::getEdad() const{
    return edad;
}

float Cliente::getSalario() const{
    return salario;
}


//Otros metodos
string Cliente::toString() const{
    stringstream s;
    s << "Nombre: " << nombre << endl;
    s << "Identificacion: " << identificacion << endl;
    s << "Edad: " << edad << endl;
    s << "Salario: " << salario << endl;
    s << "Correo electronico: " << correoElectronico << endl;
    return s.str();
}