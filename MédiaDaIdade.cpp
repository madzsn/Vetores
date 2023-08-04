#include <iostream>

int main() {
    const int num_jogadoras = 10;
    int idades[num_jogadoras];

    // Lendo as idades das jogadoras
    std::cout << "Digite as idades das jogadoras:\n";
    for (int i = 0; i < num_jogadoras; i++) {
        std::cout << "Jogadora " << i + 1 << ": ";
        std::cin >> idades[i];
    }

    // Calculando a soma das idades
    int soma_idades = 0;
    for (int i = 0; i < num_jogadoras; i++) {
        soma_idades += idades[i];
    }

    // Calculando a média das idades
    float media_idades = static_cast<float>(soma_idades) / num_jogadoras;

    // Exibindo a média das idades
    std::cout << "A média das idades das jogadoras é: " << media_idades << std::endl;

    return 0;
}
