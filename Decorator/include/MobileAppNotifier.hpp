#ifndef MOBILEAPPNOTIFIER_HPP
#define MOBILEAPPNOTIFIER_HPP

#include "INotifier.hpp"

using namespace std;

class MobileAppNotifier : public INotifier {
private:
    INotifier* wrappedNotifier;

public:
    MobileAppNotifier(INotifier* notifier);
    void sendNotification(const string& message) override;
};

#endif // MOBILEAPPNOTIFIER_HPP
