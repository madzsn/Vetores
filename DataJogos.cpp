#include <iostream>

int main() {
    const int tamanho = 6;
    int datas[tamanho];

    std::cout << "Digite as datas dos jogos da fase da Copa Feminina:\n";
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> datas[i];
    }
     int inicio = 0;
    int fim = tamanho - 1;
    while (inicio < fim) {
        int temp = datas[inicio];
        datas[inicio] = datas[fim];
        datas[fim] = temp;
        inicio++;
        fim--;
    }
    std::cout << "Datas dos jogos invertidas:\n";
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Jogo " << i + 1 << ": " << datas[i] << std::endl;
    }

    return 0;
}1
