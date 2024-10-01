#include "./flyweight/FormaFactory.hpp"
#include "flyweight/impl/Circulo.hpp"

int main() {
    FormaFactory* formaFactory = new FormaFactory();

    Circulo* circulo1 = formaFactory->getCirculo("vermelho");
    circulo1->desenhar(10, 20, 15);

    Circulo* circulo2 = formaFactory->getCirculo("verde");
    circulo2->desenhar(30, 40, 20);

    Circulo* circulo3 = formaFactory->getCirculo("vermelho");
    circulo3->desenhar(50, 60, 25);

    Circulo* circulo4 = formaFactory->getCirculo("azul");
    circulo4->desenhar(70, 80, 30);

    Circulo* circulo5 = formaFactory->getCirculo("verde");
    circulo5->desenhar(90, 100, 35);

    delete formaFactory;
    return 0;
}
