#include <iostream>

int main() {
    const int tamanho = 5;
    char vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite uma letra: ";
        std::cin >> vetor[i];
    }

    char letra;
    std::cout << "Digite a letra que deseja verificar: ";
    std::cin >> letra;

    bool encontrada = false;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == letra) {
            encontrada = true;
            break;
        }
    }

    std::cout << "A letra " << letra << " " << (encontrada ? "está" : "não está") << " presente no vetor." << std::endl;

    return 0;
}
