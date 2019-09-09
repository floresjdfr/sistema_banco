/* 
 * File:   Cliente.h
 * Author: Jose David
 *
 * Created on September 7, 2019, 4:33 PM
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

#include <iostream>

class Cliente {
public:
    virtual std::string toString() const = 0;
};

#endif	/* CLIENTE_H */

