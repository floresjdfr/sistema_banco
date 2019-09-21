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
    
    /*Esta clase hereda de lista ya que la lista de compras posee metodos especificos
     que el template lista no posee*/
public:
    ListaCompra();
    string comprasActivas(); //Este metodo muestra las compras que no se han pagado
    bool hayComprasActivas(); //Este metodo retorna verdadero si hay comprs que no se han pagado
private:

};

#endif	/* LISTACOMPRA_H */

