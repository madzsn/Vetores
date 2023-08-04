#include <iostream>

int main () {
    const int tamanho = 5;
    int vetor[tamanho];

    std::cout << "Digite " << tamanho << " valores inteiros: ";

    // Preenchendo o vetor com valores digitados pelo usuario

    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Valor " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    // Exibindo os elementos na tela

    std::cout << "Elementos do vetor: ";
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}