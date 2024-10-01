//
// Created by Silva on 17/09/2024.
//

#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
using namespace std;

class Computer {
public:
    void turnOn() {
        cout << "O computador agora está ligado" << endl;
    }

    void turnOff() {
        cout << "O computador está desligado" << endl;
    }
};

#endif //COMPUTER_H
