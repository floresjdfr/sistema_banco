

#ifndef NODO_H
#define	NODO_H

#include <sstream>
using namespace std;

template <class T>
struct Nodo { 

T* info;
Nodo<T>* siguiente;

};

#endif	/* NODO_H */

