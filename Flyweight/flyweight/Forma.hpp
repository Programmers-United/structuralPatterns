#ifndef FORMA_H
#define FORMA_H

class Forma {
public:
    virtual void desenhar(int x, int y, int raio) const = 0;
    virtual ~Forma() = default;
};

#endif