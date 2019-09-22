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
    Fecha(int, int, int);
    
    //Sets
    
    void setDia(int);
    void setMes(int);
    void setAno(int);
    
    //Gets
    
    int getDia()const;
    int getMes()const;
    int getAno()const;
    
    //Otros metodos
    
    string toString() const;
    bool operator <(Fecha*);
    bool operator >(Fecha*);
    Fecha* operator =(Fecha*);
    
private:
    int dia;
    int mes;
    int ano;
};

istream& operator >>(istream&, Fecha&);
ostream& operator <<(ostream&, Fecha&);

#endif	/* FECHA_H */

