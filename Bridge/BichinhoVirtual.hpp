#ifndef BICHINHOVIRTUAL_HPP
#define BICHINHOVIRTUAL_HPP

#include "Especie.h"
#include "FaseEvolucao.h"

class BichinhoVirtual {
protected:
    Especie* especie;
    FaseEvolucao* faseEvolucao;
public:
    BichinhoVirtual(Especie* especie, FaseEvolucao* faseEvolucao);
    virtual void comer();
    virtual void dormir();
    virtual void interagir();
    void mudarFase(FaseEvolucao* novaFase);
    virtual ~BichinhoVirtual();
};

#endif // BICHINHOVIRTUAL_H
