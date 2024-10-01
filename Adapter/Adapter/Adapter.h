//
// Created by Silva on 17/09/2024.
//

#ifndef ADAPTER_H
#define ADAPTER_H

#include <iostream>

class Adapter {
public:
    virtual void moveLeft() = 0;
    virtual void moveRight() = 0;
    virtual void moveUp() = 0;
    virtual ~Adapter() = default;
};



#endif //ADAPTER_H
