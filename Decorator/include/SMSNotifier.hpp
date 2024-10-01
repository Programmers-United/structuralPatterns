#ifndef SMSNOTIFIER_HPP
#define SMSNOTIFIER_HPP

#include "INotifier.hpp"

using namespace std;

class SMSNotifier : public INotifier {
private:
    INotifier* wrappedNotifier;

public:
    SMSNotifier(INotifier* notifier);
    void sendNotification(const string& message) override;
};

#endif // SMSNOTIFIER_HPP
