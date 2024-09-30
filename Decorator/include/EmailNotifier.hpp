#ifndef EMAILNOTIFIER_HPP
#define EMAILNOTIFIER_HPP

#include "INotifier.hpp"

using namespace std;

class EmailNotifier : public INotifier {
private:
    INotifier* wrappedNotifier;
    
public:
    EmailNotifier(INotifier* notifier);
    void sendNotification(const string& message) override;
};

#endif // EMAILNOTIFIER_HPP
