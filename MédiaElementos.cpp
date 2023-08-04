#include <iostream>
using namespace std;

int main() {
    float vetor[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o elemento inteiro " << i + 1 << ": ";
        cin >> vetor[i];
        soma += vetor[i];
    }

    float media = static_cast<float>(soma) / 10;

    std::cout << "A média dos valores é: " << media << std::endl;

    return 0;
}
