#include <iostream>
#include <string>
#include <locale>
#include <algorithm> // Para usar a função sort()

int main() {

    const int num_paises = 5;
    std::string paises[num_paises];

    // Armazenar os nomes dos países no vetor
    paises[0] = "Estados Unidos";
    paises[1] = "Alemanha";
    paises[2] = "Noruega";
    paises[3] = "Japão";
    paises[4] = "Brasil";

    // Ordenar os nomes dos países em ordem alfabética
    std::sort(paises, paises + num_paises);

    // Exibir os nomes dos países em ordem alfabética
    std::cout << "Países que já venceram a Copa do Mundo Feminina em ordem alfabética:\n";
    for (int i = 0; i < num_paises; i++) {
        std::cout << paises[i] << std::endl;
    }

    return 0;
}
