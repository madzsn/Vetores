#include <iostream>
#include <limits> // Para usar o valor máximo e mínimo dos floats

int main() {
    const int num_jogadoras = 6;
    float alturas[num_jogadoras];

    // Lendo as alturas das jogadoras
    std::cout << "Digite as alturas das jogadoras (em metros):\n";
    for (int i = 0; i < num_jogadoras; i++) {
        std::cout << "Jogadora " << i + 1 << ": ";
        std::cin >> alturas[i];
    }

    // Inicializando as variáveis com a primeira altura do vetor
    float maior_altura = alturas[0];
    float menor_altura = alturas[0];

    // Encontrando a maior e a menor altura
    for (int i = 1; i < num_jogadoras; i++) {
        if (alturas[i] > maior_altura) {
            maior_altura = alturas[i];
        }
        if (alturas[i] < menor_altura) {
            menor_altura = alturas[i];
        }
    }

    // Exibindo a maior e a menor altura
    std::cout << "A maior altura é: " << maior_altura << " metros" << std::endl;
    std::cout << "A menor altura é: " << menor_altura << " metros" << std::endl;

    return 0;
}
