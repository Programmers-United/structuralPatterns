#include "BichinhoVirtual.hpp"

BichinhoVirtual::BichinhoVirtual(Especie* especie, FaseEvolucao* faseEvolucao)
    : especie(especie), faseEvolucao(faseEvolucao) {}

void BichinhoVirtual::comer() {
    especie->comer();
}

void BichinhoVirtual::dormir() {
    especie->dormir();
}

void BichinhoVirtual::interagir() {
    faseEvolucao->interagir();
}

void BichinhoVirtual::mudarFase(FaseEvolucao* novaFase) {
    faseEvolucao = novaFase;
}

BichinhoVirtual::~BichinhoVirtual() {
    delete especie;
    delete faseEvolucao;
}
