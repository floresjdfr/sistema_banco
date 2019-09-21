/* 
 * File:   ListaCompra.cpp
 * Author: Jose David
 * 
 * Created on September 21, 2019, 9:50 AM
 */

#include "ListaCompra.h"

ListaCompra::ListaCompra() {
}


string ListaCompra::comprasActivas(){
   
    stringstream s;
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    if(iterador->getActual() != NULL){
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->getDescripcion();
            s << "-------------------------------------------" << endl << endl;
        }
    }
    while(iterador->hayMas()){
        iterador->siguiente();
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->getDescripcion() << endl;
            s << "-------------------------------------------" << endl;
        }
    }
        
    return s.str();
    
}

bool ListaCompra::hayComprasActivas(){
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    if(iterador->getActual()){
        if(iterador->getActual()->getEstado()){
            return true;
        }
    }
    while(iterador->hayMas()){
        iterador->siguiente();
        if(iterador->getActual()->getEstado()){
            return true;
        }
    }
    return false;
}
