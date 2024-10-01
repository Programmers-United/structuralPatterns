//
// Created by Silva on 17/09/2024.
//

#ifndef FACADE_H
#define FACADE_H

#include <iostream>
#include "../Subsystems/Lights.h"
#include "../Subsystems/Computer.h"
#include "../Subsystems/Thermostat.h"
#include "../Subsystems/SecuritySystem.h"
#include "../Subsystems/EntertainmentSystem.h"

using namespace std;

class Facade {
private:
    Lights lights;
    Thermostat thermostat;
    SecuritySystem security;
    EntertainmentSystem entertainment;
    Computer computer;

public:
    void leaveHome() {
        cout << "<<< Boa viagem >>>" << endl;
        lights.turnOff();
        thermostat.setTemperature(18);
        security.activate();
        computer.turnOff();
        cout << "<<< Sistemas foram desligados >>>" << endl;
    }

    void arriveHome() {
        cout << "<<< Bem vindo de volta >>>" << endl;
        lights.turnOn();
        thermostat.setTemperature(22);
        security.deactivate();
        cout << "<<< Sistemas ligados >>>" << endl;
    }

    void movieNight() {
        cout << "<<< Bom filme >>>" << endl;
        lights.turnOff();
        thermostat.setTemperature(20);
        entertainment.startMovie();
        cout << "<<< Modo noite de cinema ativado >>>" << endl;
    }

    void wakeUpKid() {
        cout << "<<< Bons estudos >>>" << endl;
        entertainment.startMusic();
        computer.turnOn();
        cout << "<<< Modo acorda crianca ativado >>>" << endl;
    }
};

#endif //FACADE_H
