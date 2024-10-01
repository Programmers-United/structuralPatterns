#include "ContaBancariaReal.h"
#include <iostream>

ContaBancariaReal::ContaBancariaReal(const std::string& titular, double saldoInicial)
    : titular(titular), saldo(saldoInicial) {}

void ContaBancariaReal::acessarContaBancaria() const {
    std::cout << "Acessando a conta bancária de " << titular
              << ". Saldo atual: R$ " << saldo << std::endl;
}