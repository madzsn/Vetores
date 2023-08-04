#include <iostream>
using namespace std;

int main () {
    float vetor[7];
    float maior, menor;

    std::cout<< "Digite 7 números reais: ";
    for (int i = 0; i < 7; i++) {
        cin >> vetor[i];
        if (i == 0) {
            maior = menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
        }
    }
    std::cout << "Maior Valor é: " << maior << std::endl;
    std::cout << "Menor Valor é: " << menor << std::endl;

    return 0;
}