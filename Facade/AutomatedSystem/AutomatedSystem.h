//
// Created by Silva on 17/09/2024.
//

#ifndef AUTOMATEDSYSTEM_H
#define AUTOMATEDSYSTEM_H

#include "../Pattern/Facade.h"

class AutomatedSystem {
private:
    Facade facade;

public:
    AutomatedSystem();
    void showMenu();
};



#endif //AUTOMATEDSYSTEM_H
