#include <iostream>
#include <string>

int main() {
    const int num_paises = 8;
    std::string nomes_paises[num_paises] = {
        "Estados Unidos",
        "Alemanha",
        "Noruega",
        "Japão",
        "Brasil",
        "Suécia",
        "Inglaterra",
        "França"
    };

    int titulos[num_paises] = {4, 2, 0, 1, 0, 0, 0, 1};

    std::cout << "Países que nunca venceram a Copa do Mundo Feminina:\n";
    for (int i = 0; i < num_paises; i++) {
        if (titulos[i] == 0) {
            std::cout << nomes_paises[i] << std::endl;
        }
    }

    return 0;
}
