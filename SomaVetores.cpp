#include <iostream>

int main () {
    int vetor1[5] = {38, 87, 68, 42, 33};
    int vetor2[5] = {99, 25, 7, 96, 47};
    int vetorSoma[5];

    for (int i = 0; i < 5; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }
    std::cout << "Vetor 1: ";
    for (int i = 0; i < 5; i++) {
        std::cout << vetor1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Vetor 2: ";
    for (int i = 0; i < 5; i++) {
        std::cout << vetor2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Vetor Soma: ";
    for (int i = 0; i < 5; i++) {
        std::cout << vetorSoma[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}