#include "../include/SMSNotifier.hpp"
#include <iostream>

SMSNotifier::SMSNotifier(INotifier* notifier) : wrappedNotifier(notifier) {}

using namespace std;

void SMSNotifier::sendNotification(const string& message) {
    wrappedNotifier->sendNotification(message);
    cout << "Enviando notificacao por SMS: " << message << endl;
}
