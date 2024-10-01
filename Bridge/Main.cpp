#include "BichinhoVirtual.hpp"
#include "Dragao.hpp"
#include "Bebe.hpp"
#include "Jovem.hpp"
#include "Adulto.hpp"
#include "Fenix.hpp"
#include <iostream>

int main() {

    Especie* dragao = new Dragao();
    FaseEvolucao* bebe = new Bebe();
    BichinhoVirtual* bichinho = new BichinhoVirtual(dragao, bebe);

    bichinho->comer();
    bichinho->dormir();
    bichinho->interagir();

    std::cout << "\nFase de evolução avançando para Jovem...\n";
    FaseEvolucao* jovem = new Jovem();
    bichinho->mudarFase(jovem);
    bichinho->interagir();

    std::cout << "\nFase de evolução avançando para Adulto...\n";
    FaseEvolucao* adulto = new Adulto();
    bichinho->mudarFase(adulto);
    bichinho->interagir();

    std::cout << "\nAgora com outra espécie (Fênix) na fase de Jovem...\n";
    Especie* fenix = new Fenix();
    BichinhoVirtual* bichinho2 = new BichinhoVirtual(fenix, jovem);
    bichinho2->comer();
    bichinho2->dormir();
    bichinho2->interagir();


    delete bichinho;
    delete bichinho2;

    return 0;
}
