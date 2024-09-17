//
// Created by Silva on 17/09/2024.
//

#include "AutomatedSystem.h"
#include <iostream>
using namespace std;

AutomatedSystem::AutomatedSystem() : facade() {}

void AutomatedSystem::showMenu() {
    int choice;
    do {
        cout << "\n--- Home Automation Menu ---\n";
        cout << "1. Sair de casa\n";
        cout << "2. Chegar em casa\n";
        cout << "3. Noite de filme\n";
        cout << "4. Acorda crianca, papai chegou\n";
        cout << "5. Sair\n";
        cout << "Qual sua escolha: ";
        cin >> choice;

        switch (choice) {
            case 1:
                facade.leaveHome();
            break;
            case 2:
                facade.arriveHome();
            break;
            case 3:
                facade.movieNight();
            break;
            case 4:
                facade.wakeUpKid();
            break;
            case 5:
                cout << "Saindo...\n";
            break;
            default:
                cout << "Escolha inválida. Tente novamente.\n";
        }
    } while (choice != 5);
}
