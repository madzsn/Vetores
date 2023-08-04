#include <iostream>

int main () {
    const int tamanho = 8;
    int vetor [tamanho];

    std::cout << "Digite " << tamanho << " valores inteiros: ";
    for (int i = 0; i < tamanho; i++) {
        std::cin >> vetor[i];
    }

    std::cout << "Elementos pares no vetor: ";
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            std::cout << vetor[i] << " ";
        }
    }
std::cout << std::endl;

return 0;

}