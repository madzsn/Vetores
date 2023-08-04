#include <iostream>
#include <string>
#include <algorithm> // Para usar a função sort

int main() {
    // Declarando um vetor de strings para armazenar os nomes dos planetas
    std::string planetas[5] = {"Terra", "Marte", "Júpiter", "Vênus", "Saturno"};

    // Ordenando os nomes dos planetas em ordem alfabética
    std::sort(planetas, planetas + 5);

    // Exibindo os nomes dos planetas em ordem alfabética
    std::cout << "Nomes dos planetas em ordem alfabética:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << planetas[i] << std::endl;
    }

    return 0;
}
