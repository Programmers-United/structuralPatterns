#ifndef DRAGAO_HPP
#define DRAGAO_HPP

#include "Especie.hpp"
#include <iostream>

class Dragao : public Especie {
public:
    void comer() override;
    void dormir() override;
};

#endif
