#include <iostream>
using namespace std;

int main () {
    const int tamanho = 6;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o valor " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    for (int i = 0; i < tamanho / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor [tamanho - 1 - i];
        vetor [tamanho - 1 - i] = temp;
    }

    std::cout << "Vetor invertido: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}

