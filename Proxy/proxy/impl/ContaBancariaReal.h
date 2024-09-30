#ifndef CONTA_BANCARIA_REAL_H
#define CONTA_BANCARIA_REAL_H

#include <string>
#include "../Banco.h"

class ContaBancariaReal : public Banco {
private:
    std::string titular;
    double saldo;

public:
    ContaBancariaReal(const std::string& titular, double saldoInicial);
    void acessarContaBancaria() const override;
};

#endif