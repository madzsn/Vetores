#include <iostream>

int main () {
    const int tamanho = 10;
    int vetor [tamanho];
    int soma=0;

    std::cout << "Digite " << tamanho << " valores inteiros: ";
     for (int i = 0; i < tamanho; ++i) {
        std::cin >> vetor[i];
        soma = vetor[i] + soma;
     }
std::cout << "A soma vai ser: " << soma << "." << std::endl;

return 0;

}