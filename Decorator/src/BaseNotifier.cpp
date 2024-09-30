#include "../include/BaseNotifier.hpp"
#include <iostream>

using namespace std;

void BaseNotifier::sendNotification(const string& message) {
    cout << "Notificacao basica: " << message << endl;
}
