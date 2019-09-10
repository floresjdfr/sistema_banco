#include "Iterador.h"

template<class T>
Iterador<T>::Iterador(Nodo<T>* Primer){
    primer = Primer;
    cursor = Primer;
}



template <class T>
T* Iterador<T>::elementoActual(){
    return cursor->info;
}
