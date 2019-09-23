

#ifndef TRANSACCION_H
#define	TRANSACCION_H

#include "Fecha.h"

class Transaccion {
public:
    virtual string toString() const = 0;
};

#endif	/* TRANSACCION_H */

