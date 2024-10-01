#ifndef CIRCULO_H
#define CIRCULO_H

#include "../Forma.hpp"
#include <string>
#include <iostream>

class Circulo : public Forma {
private:
    std::string cor;

public:
    Circulo(const std::string& cor) : cor(cor) {}

    void desenhar(int x, int y, int raio) const override {
        std::cout << "Desenhando círculo de cor " << cor 
                  << " na posição (" << x << ", " << y 
                  << ") com raio " << raio << std::endl;
    }

    std::string getCor() const {
        return cor;
    }
};

#endif