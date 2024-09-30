#ifndef BASENOTIFIER_HPP
#define BASENOTIFIER_HPP

#include "INotifier.hpp"

using namespace std;

class BaseNotifier : public INotifier {
public:
    void sendNotification(const string& message) override;
};

#endif // BASENOTIFIER_HPP
