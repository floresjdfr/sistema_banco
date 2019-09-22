/* 
 * File:   main.cpp
 * Author: Dylana
 *
 * Created on 21 de septiembre de 2019, 01:39 PM
 */

#include <cstdlib>

#include "Calendario.h"

using namespace std;

/*
 * 
 */
int main(){                    //This was to just be able to run your class...
	Calendar* c = new Calendar(1, 2019);
        cin.clear();
	c->setFirstDay();
	c->print();
	cin.ignore();
}

