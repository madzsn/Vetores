#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializa o gerador de números aleatórios
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Gera um número secreto entre 1 e 100
    int numeroSecreto = std::rand() % 100 + 1;
    int tentativa, tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhação!" << std::endl;

    do {
        std::cout << "Digite um número entre 1 e 100: ";
        std::cin >> tentativa;

        tentativas++;

        if (tentativa > numeroSecreto) {
            std::cout << "O número é menor." << std::endl;
        } else if (tentativa < numeroSecreto) {
            std::cout << "O número é maior." << std::endl;
        } else {
            std::cout << "Parabéns! Você acertou o número secreto em " << tentativas << " tentativas." << std::endl;
        }
    } while (tentativa != numeroSecreto);

    return 0;
}
