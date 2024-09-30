#include "./include/BaseNotifier.hpp"
#include "./include/EmailNotifier.hpp"
#include "./include/SMSNotifier.hpp"
#include "./include/MobileAppNotifier.hpp"
#include <memory>

int main() {
    // Cria um notificador básico
    INotifier* notifier = new BaseNotifier();

    // Adiciona envio de e-mail e SMS
    notifier = new EmailNotifier(notifier);
    notifier = new SMSNotifier(notifier);
    notifier = new MobileAppNotifier(notifier);

    // Envia notificação com todas as opções
    notifier->sendNotification("Esta é uma notificação multi-canal.");

    // Libera memória
    delete notifier;

    return 0;
}
