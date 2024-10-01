#include "BancoProxy.h"
#include "ContaBancariaReal.h"
#include <iostream>

BancoProxy::BancoProxy(const std::string& titular, double saldoInicial, const std::string& usuario, const std::string& senha)
    : conta(new ContaBancariaReal(titular, saldoInicial)), usuario(usuario), senha(senha) {}

BancoProxy::~BancoProxy() {
    delete conta;
}

bool BancoProxy::verificarAcesso() const {
    return usuario == "diogo" && senha == "saopaulo";
}

void BancoProxy::acessarContaBancaria() const {
    if (verificarAcesso()) {
        std::cout << "Acesso permitido.\n";
        conta->acessarContaBancaria();
    } else {
        std::cout << "Acesso negado: credenciais inválidas.\n";
    }
}
