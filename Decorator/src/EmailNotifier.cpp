#include "../include/EmailNotifier.hpp"
#include <iostream>

EmailNotifier::EmailNotifier(INotifier* notifier) : wrappedNotifier(notifier) {}

using namespace std;

void EmailNotifier::sendNotification(const string& message) {
    wrappedNotifier->sendNotification(message);
    cout << "Enviando notificacao por e-mail: " << message << endl;
}
