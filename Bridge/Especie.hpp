#ifndef ESPECIE_HPP
#define ESPECIE_HPP

class Especie {
public:
    virtual void comer() = 0;
    virtual void dormir() = 0;
    virtual ~Especie() {}
};

#endif
