#include <iostream>
#include <string>

int main () {
    const int tamanho = 5;
    std::string frutas [tamanho];

    std::cout << "Digite o nome de " << tamanho << " frutas: ";

    // Preenchendo o vetor com o nome das frutas digitadas pelo usuário


    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Fruta " << i + 1 << ": ";
        std::cin >> frutas[i];
    }

    // Exibindo o nome de cada fruta em uma linha separada

    std::cout << "Nome das frutas: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << frutas[i] << std::endl;

    }

    return 0;
}