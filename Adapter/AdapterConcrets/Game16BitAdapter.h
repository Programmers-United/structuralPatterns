//
// Created by Silva on 17/09/2024.
//

#ifndef GAME16BITADAPTER_H
#define GAME16BITADAPTER_H

#include "Adapter.h"
#include <iostream>
using namespace std;

class Game16BitAdapter : public Adapter {
    Game16Bit& game;
public:
    Game16BitAdapter(Game16Bit& game) : game(game) {}

    void moveLeft() override {
        game.movePlayer("left");
    }
    void moveRight() override {
        game.movePlayer("right");
    }
    void moveUp() override {
        game.playerJump();
    }
};

#endif //GAME16BITADAPTER_H
