/* 
 * File:   Fecha.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 6:26 PM
 */

#ifndef FECHA_H
#define	FECHA_H

#include <iostream>
#include <sstream>

using namespace std;

class Fecha {
public:
    Fecha();
    Fecha(string, string, string);
    
    //Sets
    
    void setDia(string);
    void setMes(string);
    void setAno(string);
    
    //Gets
    
    string getDia()const;
    string getMes()const;
    string getAno()const;
    
    //Otros metodos
    
    string toString() const;
    
private:
    string dia;
    string mes;
    string ano;
};

#endif	/* FECHA_H */

