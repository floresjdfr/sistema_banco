/* 
 * File:   ListaCompra.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 9:50 AM
 */

#ifndef LISTACOMPRA_H
#define	LISTACOMPRA_H

#include "Lista.h"
#include "Compra.h"
#include "IteradorLista.h"
class ListaCompra : public Lista<Compra>{
    
    /*Esta clase hereda de lista que que las lista de compras posee metodos especificos
     que el template lista no posee*/
public:
    ListaCompra();
    ListaCompra(const ListaCompra& orig);
    virtual ~ListaCompra();
//    string comprasActivas();
//    bool hayComprasActivas();
private:

};

#endif	/* LISTACOMPRA_H */

