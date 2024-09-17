//
// Created by Silva on 17/09/2024.
//

#ifndef LIGHTS_H
#define LIGHTS_H

#include <iostream>
using namespace std;

class Lights {
public:
    void turnOn() {
        cout << "Luzes ligadas" << endl;
    }
    void turnOff() {
        cout << "Luzes desligadas" << endl;
    }
};

#endif //LIGHTS_H
