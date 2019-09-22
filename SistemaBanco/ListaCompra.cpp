/* 
 * File:   ListaCompra.cpp
 * Author: Jose David
 * 
 * Created on September 21, 2019, 9:50 AM
 */

#include "ListaCompra.h"

ListaCompra::ListaCompra() {
}


string ListaCompra::comprasActivas(){ /*Este metodo retorna la descripcion y monto
                                       de los pagos que se encuentren pendientes*/
   
    stringstream s;
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador(); /*Utiliza el iterador
                                                                     para recorrer 
                                                                     la lista*/
    if(iterador->getActual() != NULL){ 
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->getDescripcion() << "---------> Monto pendiente: " 
                    << iterador->getActual()->getMontoPendiente() << endl;
        }
    }
    while(iterador->hayMas()){
        iterador->siguiente();
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->getDescripcion() << "---------> Monto pendiente: " 
                    << iterador->getActual()->getMontoPendiente() << endl;
        }
    }
        
    return s.str();
    
}

bool ListaCompra::hayComprasActivas(){ /*Retorna verdadero si hay pagos de 
                                        compra pendientes*/
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

string ListaCompra::toString(){ /*Muestra todos los vouchers de compras
                                 que se hayan pagado en su totalidad*/
    stringstream s;
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    if(iterador->getActual()){
        if(!iterador->getActual()->getEstado()){
            s << iterador->getActual()->toString();
        }
    }
    while(iterador->hayMas()){
        iterador->siguiente();
        if(!iterador->getActual()->getEstado()){
            s << iterador->getActual()->toString();
        }
    }
    return s.str();
}

string ListaCompra::toStringPendientes(){/*Muestra lista de vouchers de compras
                                          pendientes de pago*/
    stringstream s;
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    if(iterador->getActual()){
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->toStringPendiente();
        }
    }
    while(iterador->hayMas()){
        iterador->siguiente();
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->toStringPendiente();
        }
    }
    return s.str();
}

