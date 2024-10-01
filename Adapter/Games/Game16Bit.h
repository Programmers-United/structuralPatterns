//
// Created by Silva on 17/09/2024.
//

#ifndef GAME16BIT_H
#define GAME16BIT_H

#include <iostream>
using namespace std;

class Game16Bit {
public:
    void movePlayer(const string& direction) {
        cout << "16-bit player moving\n" << direction << endl;
    }
    void playerJump() {
        cout << "16-bit player jumping\n" << endl;
    }
};

#endif //GAME16BIT_H
