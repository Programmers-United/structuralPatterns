#include "proxy/impl/BancoProxy.h"

int main() {

    Banco* contaProxy1 = new BancoProxy("Professor Diogo", 30000000.00, "diogo", "saopaulo");
    contaProxy1->acessarContaBancaria();
    
    std::cout << "\n";

    Banco* contaProxy2 = new BancoProxy("João Silva", 1500.0, "usuarioErrado", "senhaInvalida");
    contaProxy2->acessarContaBancaria();

    delete contaProxy1;
    delete contaProxy2;

    return 0;
}
