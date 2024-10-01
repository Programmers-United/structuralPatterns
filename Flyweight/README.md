Exemplo: Flyweight para desenhar círculos

Imagine que temos muitos círculos para desenhar em uma tela, e cada círculo tem uma cor, raio, e posição (x, y). Podemos usar o Flyweight para evitar criar um novo objeto para cada círculo, reutilizando objetos com a mesma cor.

Estrutura do exemplo:

- Flyweight: Interface para os objetos compartilhados.
- Flyweight Concreto: Implementação do Flyweight com o estado compartilhado.
- Factory: Controla a criação e o compartilhamento dos Flyweights.
- Cliente: Utiliza os Flyweights.