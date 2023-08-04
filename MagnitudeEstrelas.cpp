#include <iostream>

int main() {
    // Declarando um vetor de 6 números reais para representar as magnitudes aparentes das estrelas
    double magnitudes[6];

    // Lendo as magnitudes das estrelas
    std::cout << "Digite as magnitudes aparentes das 6 estrelas:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::cout << "Estrela " << i + 1 << ": ";
        std::cin >> magnitudes[i];
    }

    // Calculando a magnitude média
    double soma = 0;
    for (int i = 0; i < 6; ++i) {
        soma += magnitudes[i];
    }
    double media = soma / 6;

    // Exibindo a magnitude média das estrelas
    std::cout << "A magnitude média das estrelas é: " << media << std::endl;

    return 0;
}
