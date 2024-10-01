#ifndef BANCO_H
#define BANCO_H

#include <string>

class Banco {
public:
    virtual void acessarContaBancaria() const = 0;
    virtual ~Banco() = default;
};

#endif