/* 
 * File:   Pago.h
 * Author: Jose David
 *
 * Created on September 21, 2019, 1:43 PM
 */

#ifndef PAGO_H
#define	PAGO_H

#include "Transaccion.h"

class Pago : public Transaccion{
public:
    Pago();
    Pago(const Pago& orig);
    virtual ~Pago();
private:

};

#endif	/* PAGO_H */

