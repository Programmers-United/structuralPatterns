#include "../include/MobileAppNotifier.hpp"
#include <iostream>

MobileAppNotifier::MobileAppNotifier(INotifier* notifier) : wrappedNotifier(notifier) {}

using namespace std;

void MobileAppNotifier::sendNotification(const string& message) {
    wrappedNotifier->sendNotification(message);
    cout << "Enviando notificacao por aplicativo movel: " << message << endl;
}
