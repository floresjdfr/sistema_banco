/* 
 * File:   ListaTarjeta.cpp
 * Author: JoseDavid
 * 
 * Created on 22 de septiembre de 2019, 11:36 AM
 */

#include "ListaTarjeta.h"
#include "Tarjeta.h"

ListaTarjeta::ListaTarjeta() {
}

string ListaTarjeta::busquedaTarjetasIdentificacion(string ide){
    IteradorLista<Tarjeta>* iterador = Lista<Tarjeta>::getIterador();
    stringstream s;
    while(iterador->hayMas()){
        if(iterador->getActual()->getCliente()->getIdentificacion() == ide){
            s << iterador->getActual()->getNumeroTarjeta() << endl;
        }
        iterador->siguiente();
    }
    return s.str();
}
bool ListaTarjeta::eliminaTarjetasIdentificacion(string ide){
    Lista<Tarjeta>::actual = Lista<Tarjeta>::primero; //Actual es igual a primero
    
    while (Lista<Tarjeta>::actual != NULL){ //Si el primero no esta vacio
        
        if(Lista<Tarjeta>::primero->info->getCliente()->getIdentificacion() == ide){ //Si la identificacion esta en el primero
            Lista<Tarjeta>::primero = Lista<Tarjeta>::primero->siguiente;
            delete Lista<Tarjeta>::actual;
            Lista<Tarjeta>::actual = Lista<Tarjeta>::primero; //Actual es igual a primero
        }
        else{ //Si la identificacion esta en algun otro nodo
            
            while(Lista<Tarjeta>::actual != NULL){
                if(Lista<Tarjeta>::actual->siguiente && Lista<Tarjeta>::actual->siguiente->info->getCliente()->getIdentificacion() == ide){
                    Lista<Tarjeta>::actual->siguiente = Lista<Tarjeta>::actual->siguiente->siguiente;
                    delete Lista<Tarjeta>::actual->siguiente;
                }
                Lista<Tarjeta>::actual = Lista<Tarjeta>::actual->siguiente;
            }
            
            
        }
    }
}

bool ListaTarjeta::eliminaTarjetaNumero(int numero){
    Lista<Tarjeta>::actual = Lista<Tarjeta>::primero; //Actual es igual a primero
    
    while (Lista<Tarjeta>::actual != NULL){ //Si el primero no esta vacio
        
        if(Lista<Tarjeta>::primero->info->getNumeroTarjeta() == numero){ //Si la identificacion esta en el primero
            Lista<Tarjeta>::primero = Lista<Tarjeta>::primero->siguiente;
            delete Lista<Tarjeta>::actual;
            Lista<Tarjeta>::actual = Lista<Tarjeta>::primero; //Actual es igual a primero
        }
        else{ //Si la identificacion esta en algun otro nodo
            
            while(Lista<Tarjeta>::actual != NULL){
                if(Lista<Tarjeta>::actual->siguiente && Lista<Tarjeta>::actual->siguiente->info->getNumeroTarjeta() == numero){
                    Lista<Tarjeta>::actual->siguiente = Lista<Tarjeta>::actual->siguiente->siguiente;
                    delete Lista<Tarjeta>::actual->siguiente;
                }
                Lista<Tarjeta>::actual = Lista<Tarjeta>::actual->siguiente;
            }
            
            
        }
    }
}

