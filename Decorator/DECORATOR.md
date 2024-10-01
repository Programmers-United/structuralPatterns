# Sistema de Notificação usando o Padrão Decorator

## Descrição do Problema

Um sistema de notificação precisa ser capaz de enviar mensagens por diferentes canais, como e-mail, SMS e aplicativos móveis. No entanto, não queremos criar múltiplas subclasses para cada combinação possível de canais, pois isso tornaria o sistema inflexível e difícil de manter. O desafio é permitir que novas funcionalidades de envio sejam adicionadas dinamicamente, sem modificar o código original do notificador.

## Solução com o Padrão Decorator

O padrão de projeto **Decorator** oferece uma solução flexível para esse problema. Ele permite adicionar novos comportamentos (como o envio por e-mail ou SMS) dinamicamente, "decorando" um objeto base com funcionalidades adicionais. O notificador base é estendido de forma modular, onde cada decorador adiciona um novo canal de notificação.

### Funcionamento:

- O **BaseNotifier** implementa um notificador simples que apenas exibe a mensagem.
- Os decoradores como **EmailNotifier**, **SMSNotifier** e **MobileAppNotifier** são responsáveis por adicionar novas funcionalidades ao notificador, sem alterar sua estrutura original.
- Os decoradores podem ser encadeados, permitindo combinações flexíveis de canais de notificação.

Dessa forma, a estrutura permite estender o sistema de notificações sem a necessidade de criar subclasses para cada nova funcionalidade, promovendo a reutilização de código e facilitando a manutenção.
