#include <iostream>
#include <string>

int main() {
    // Declarando um vetor de inteiros para armazenar as distâncias médias dos planetas ao Sol (em milhões de km)
    int distancias[] = {57, 108, 150, 228, 778, 1427, 2871, 4497, 5914, 22794};

    // Nomes dos planetas correspondentes às distâncias
    std::string planetas[] = {"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter", "Saturno", "Urano", "Netuno", "Plutão", "Éris"};

    // Encontrando o índice do planeta mais próximo do Sol
    int indiceMaisProximo = 0;
    for (int i = 1; i < 10; ++i) {
        if (distancias[i] < distancias[indiceMaisProximo]) {
            indiceMaisProximo = i;
        }
    }

    // Encontrando o índice do planeta mais distante do Sol
    int indiceMaisDistante = 0;
    for (int i = 1; i < 10; ++i) {
        if (distancias[i] > distancias[indiceMaisDistante]) {
            indiceMaisDistante = i;
        }
    }

    // Exibindo os resultados
    std::cout << "Planeta mais próximo do Sol: " << planetas[indiceMaisProximo] << std::endl;
    std::cout << "Planeta mais distante do Sol: " << planetas[indiceMaisDistante] << std::endl;

    return 0;
}
