#ifndef INOTIFIER_HPP
#define INOTIFIER_HPP

#include <string>

using namespace std;

class INotifier {
public:
    virtual ~INotifier() = default;
    virtual void sendNotification(const string& message) = 0;
};

#endif // INOTIFIER_HPP
