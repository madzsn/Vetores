#include <iostream>

int main () {
const int tamanho = 5;
int vetor [tamanho];

std::cout << "digite o numero de gols marcados: ";

 for (int i = 0; i < tamanho; ++i) {
        std::cout << "Valor " << i + 1 << ": ";
        std::cin >> vetor[i];
    }
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += vetor[i]; 
    }

    std::cout << "Soma: " << soma << std::endl;

    return 0;
}