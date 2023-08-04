#include <iostream>
#include <string>

int main() {
    const int num_paises = 7;
    std::string siglas_paises[num_paises] = {"EUA", "SWE", "NOR", "CHN", "GER", "CAN", "FRA"};

    std::string sigla_digitada;
    std::cout << "Digite uma sigla de país: ";
    std::cin >> sigla_digitada;

    // Verificando se a sigla digitada está presente no vetor
    bool encontrou = false;
    for (int i = 0; i < num_paises; i++) {
        if (siglas_paises[i] == sigla_digitada) {
            encontrou = true;
            break;
        }
    }

    // Exibindo o resultado
    if (encontrou) {
        std::cout << "A sigla " << sigla_digitada << " está presente no vetor." << std::endl;
    } else {
        std::cout << "A sigla " << sigla_digitada << " não está presente no vetor." << std::endl;
    }

    return 0;
}
