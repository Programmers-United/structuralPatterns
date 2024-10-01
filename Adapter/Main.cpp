#include <iostream>
#include <memory>
#include "Games/Game8Bit.h"
#include "Games/Game16Bit.h"
#include "Adapter/Adapter.h"
#include "AdapterConcrets/Game8BitAdapter.h"
#include "AdapterConcrets/Game16BitAdapter.h"

using namespace std;

void showMenu() {
    cout << "\nMenu:\n";
    cout << "1 - Jogar jogo 8-bit\n";
    cout << "2 - Jogar jogo 16-bit\n";
    cout << "3 - Sair\n";
    cout << "Escolha uma opcao: ";
}

void showControlsMenu() {
    cout << "\nComandos:\n";
    cout << "1 - Mover para esquerda\n";
    cout << "2 - Mover para direita\n";
    cout << "3 - Mover para cima\n";
    cout << "4 - Sair do jogo\n";
    cout << "Escolha um comando: ";
}

int main() {

    // Jogos antigos
    Game8Bit game8Bit;
    Game16Bit game16Bit;

    // Adaptadores usando a interface abstrata
    unique_ptr<Adapter> adapter8Bit = make_unique<Game8BitAdapter>(game8Bit);
    unique_ptr<Adapter> adapter16Bit = make_unique<Game16BitAdapter>(game16Bit);

    int menuChoice = 0;
    
    while (menuChoice != 3) {
        showMenu();
        cin >> menuChoice;

        if (menuChoice == 1 || menuChoice == 2) {
            unique_ptr<Adapter> adapter = (menuChoice == 1) ? move(adapter8Bit) : move(adapter16Bit);
            cout << ((menuChoice == 1) ? "Jogando jogo 8-bit:" : "Jogando jogo 16-bit:") << endl;
            int controlChoice = 0;

            while (controlChoice != 4) {
                showControlsMenu();
                cin >> controlChoice;

                switch (controlChoice) {
                    case 1:
                        adapter->moveLeft();
                        break;
                    case 2:
                        adapter->moveRight();
                        break;
                    case 3:
                        adapter->moveUp();
                        break;
                    case 4:
                        cout << "Saindo do jogo...\n";
                        break;
                    default:
                        cout << "Comando invalido.\n";
                        break;
                }
            }
        } else if (menuChoice == 3) {
            cout << "Saindo do programa...\n";
        } else {
            cout << "Opcao invalida. Tente novamente.\n";
        }
    }

    return 0;
}
