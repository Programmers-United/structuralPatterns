//
// Created by Silva on 17/09/2024.
//

#ifndef GAME8BITADAPTER_H
#define GAME8BITADAPTER_H

#include "Adapter.h"

#include <iostream>
using namespace std;

class Game8BitAdapter : public Adapter {
    Game8Bit& game;
public:
    Game8BitAdapter(Game8Bit& game) : game(game) {}

    void moveLeft() override {
        game.moveCharacter("left");
    }
    void moveRight() override {
        game.moveCharacter("right");
    }
    void moveUp() override {
        game.characterJump();
    }
};

#endif //GAME8BITADAPTER_H
