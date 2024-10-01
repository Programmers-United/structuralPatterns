#ifndef BANCO_PROXY_H
#define BANCO_PROXY_H

#include "Banco.h"

class BancoProxy : public Banco {
private:
    ContaBancariaReal* conta;
    std::string usuario;
    std::string senha;

public:
    BancoProxy(const std::string& titular, double saldoInicial, const std::string& usuario, const std::string& senha);
    ~BancoProxy();
    bool verificarAcesso() const;
    void acessarContaBancaria() const override;
};

#endif
