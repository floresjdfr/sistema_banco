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
    
    while(iterador->hayMas()){
        
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->getDescripcion() << "---------> Monto pendiente: " 
                    << iterador->getActual()->getMontoPendiente() << endl;
        }
        iterador->siguiente();
    }
        
    return s.str();
    
}

bool ListaCompra::hayComprasActivas(){ /*Retorna verdadero si hay pagos de 
                                        compra pendientes*/
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    
    while(iterador->hayMas()){
        if(iterador->getActual()->getEstado()){
            return true;
        }
        iterador->siguiente();
    }
    return false;
}

string ListaCompra::toString(){ /*Muestra todos los vouchers de compras
                                 que se hayan pagado en su totalidad*/
    stringstream s;
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    
    while(iterador->hayMas()){
        
        if(!iterador->getActual()->getEstado()){
            s << iterador->getActual()->toString();
        }
        iterador->siguiente();
    }
    return s.str();
}

string ListaCompra::toStringPendientes(){/*Muestra lista de vouchers de compras
                                          pendientes de pago*/
    stringstream s;
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    
    while(iterador->hayMas()){
        
        if(iterador->getActual()->getEstado()){
            s << iterador->getActual()->toStringPendiente();
        }
        iterador->siguiente();
    }
    return s.str();
}

float ListaCompra::montoALaFecha(Fecha* fec){
    IteradorLista<Compra>* iterador = Lista<Compra>::getIterador();
    float mAcumulado = 0.0;
    while (iterador->hayMas()){
        if(iterador->getActual()->getEstado() && (iterador->getActual()->getFecha()< fec)){
            mAcumulado = iterador->getActual()->getMontoPendiente();
        }
        iterador->siguiente();
    }
    return mAcumulado;
}