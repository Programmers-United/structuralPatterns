//
// Created by Silva on 17/09/2024.
//

#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>
using namespace std;

class Thermostat {
public:
    void setTemperature(int temp) {
        cout << "Temperatura ajustada para " << temp << " graus" << endl;
    }
};

#endif //THERMOSTAT_H
