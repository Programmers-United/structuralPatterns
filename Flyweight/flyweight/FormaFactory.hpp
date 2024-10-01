#ifndef FORMA_FACTORY_H
#define FORMA_FACTORY_H

#include "./impl/Circulo.hpp"
#include <unordered_map>
#include <string>

class FormaFactory {
private:
    std::unordered_map<std::string, Circulo*> circulos;

public:
    ~FormaFactory() {
        for (auto& par : circulos) {
            delete par.second;
        }
    }

    Circulo* getCirculo(const std::string& cor) {
        if (circulos.find(cor) == circulos.end()) {
            circulos[cor] = new Circulo(cor);
            std::cout << "Criando um novo círculo de cor " << cor << std::endl;
        }
        return circulos[cor];
    }
};

#endif