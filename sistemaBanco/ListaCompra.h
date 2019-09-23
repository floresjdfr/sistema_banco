
#ifndef LISTACOMPRA_H
#define	LISTACOMPRA_H

#include "Lista.h"
#include "Compra.h"
#include "IteradorLista.h"
class ListaCompra : public Lista<Compra>{
    
    /*Esta clase hereda de lista, ya que para crear una lista de compras necesitamos
    metodos especificos que el template lista no posee*/
public:
    ListaCompra();
    string comprasActivas(); //Este metodo muestra las compras que no se han pagado
    bool hayComprasActivas(); //Este metodo retorna verdadero si hay compras que no se han pagado
    string toString(); /*Muestra todos los vouchers de compras que se hayan pagado en su totalidad*/
    string toStringPendientes(); /*Muestra lista de vouchers de compras pendientes de pago*/
    float montoALaFecha(Fecha*);
};

#endif	/* LISTACOMPRA_H */

