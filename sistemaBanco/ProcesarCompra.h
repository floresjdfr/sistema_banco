
#ifndef PROCESARCOMPRA_H
#define	PROCESARCOMPRA_H

#include "Procesar.h"

class ProcesarCompra : public Procesar {
public:
    ProcesarCompra();
    bool verificaSaldo(float, Tarjeta&); //recibe monto compra y la tarjeta. Verifica que tenga saldo
    void procesarTransaccion(float, string, Fecha*, Tarjeta&); //Procesa  la compra. Recibe monto, pago mensual,  descripcion, fecha, tarjeta
private:

};

#endif	/* PROCESARCOMPRA_H */

