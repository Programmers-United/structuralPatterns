//
// Created by Silva on 17/09/2024.
//

#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

#include <iostream>
using namespace std;

class SecuritySystem {
public:
    void activate() {
        cout << "Sistema de seguranca ativado" << endl;
    }
    void deactivate() {
        cout << "Sistema de seguranca desativado" << endl;
    }
};

#endif //SECURITYSYSTEM_H
