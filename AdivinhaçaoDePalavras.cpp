#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    // Inicializa o gerador de números aleatórios
   std::srand(static_cast<unsigned int>(std::time(0)));

    // Palavras predefinidas
    std::string palavras[] = {"gato", "cachorro", "elefante", "panda", "girafa"};

    // Seleciona uma palavra secreta aleatória do vetor
    std::string palavraSecreta = palavras[std::rand() % 5];
    int tamanhoPalavra = palavraSecreta.length();

    std::string palavraAdivinhada(tamanhoPalavra, '_');

    bool acertou = false;

    std::cout << "Bem-vindo ao jogo de adivinhação de palavras!" << std::endl;

    while (!acertou) {
        std::cout << "Palavra: " << palavraAdivinhada << std::endl;
        std::cout << "Digite uma letra: ";
        
        char letra;
        std::cin >> letra;
        
        bool letraEncontrada = false;

        for (int i = 0; i < tamanhoPalavra; ++i) {
            if (palavraSecreta[i] == letra) {
                palavraAdivinhada[i] = letra;
                letraEncontrada = true;
            }
        }

        if (!letraEncontrada) {
            std::cout << "Letra não encontrada na palavra." << std::endl;
        }

        if (palavraAdivinhada == palavraSecreta) {
            acertou = true;
            std::cout << "Parabéns! Você acertou a palavra secreta: " << palavraSecreta << std::endl;
        }
    }

    return 0;
}
