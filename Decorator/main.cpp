#include "./include/BaseNotifier.hpp"
#include "./include/EmailNotifier.hpp"
#include "./include/SMSNotifier.hpp"
#include "./include/MobileAppNotifier.hpp"
#include <memory>

int main() {
    // Cria um notificador b�sico
    INotifier* notifier = new BaseNotifier();

    // Adiciona envio de e-mail e SMS
    notifier = new EmailNotifier(notifier);
    notifier = new SMSNotifier(notifier);
    notifier = new MobileAppNotifier(notifier);

    // Envia notifica��o com todas as op��es
    notifier->sendNotification("Esta � uma notifica��o multi-canal.");

    // Libera mem�ria
    delete notifier;

    return 0;
}
