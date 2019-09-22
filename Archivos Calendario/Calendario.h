/* 
 * File:   Calendario.h
 * Author: Dylana
 *
 * Created on 21 de septiembre de 2019, 01:40 PM
 */

#ifndef CALENDARIO_H
#define	CALENDARIO_H

#include<iostream>
#include<string>
//#include<conio.h>
#include<iomanip>

using namespace std;

class Calendar
{
private:
	int month;
	int year;
	int firstday;
public:
	Calendar(int =11, int =2011);
	void setFirstDay();
	void print();
};

#endif	/* CALENDARIO_H */

