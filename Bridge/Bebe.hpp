#ifndef BEBE_HPP
#define BEBE_HPP

#include "FaseEvolucao.h"
#include <iostream>

class Bebe : public FaseEvolucao {
public:
    void interagir() override;
};

#endif