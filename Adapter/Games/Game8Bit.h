//
// Created by Silva on 17/09/2024.
//

#ifndef GAME8BIT_H
#define GAME8BIT_H

#include <iostream>
using namespace std;

class Game8Bit {
public:
    void moveCharacter(const string& direction) {
        cout << "8-bit character moving\n" << direction << endl;
    }
    void characterJump() {
        cout << "8-bit character jumping\n" << endl;
    }
};

#endif //GAME8BIT_H
