#include <iostream>
int main () {
const int tamanho = 5;
int golsMarcados[tamanho];
int golsSofridos[tamanho];

std::cout << "digite o numero de gols marcados e gols sofridos para cada partida:\n";
for (int i = 0; i < tamanho; ++i) {
   std::cout << "partida " << i + 1 << " :\n";
   std::cout << "Gols marcados: ";
   std::cin >> golsMarcados[i];
   std::cout << " Gols sofridos ";
   std::cin >> golsSofridos[i];
}

 std::cout << "saldo de gols em cada partida:\n";
    for (int i = 0; i < tamanho; ++i) {
        int saldoGols = golsMarcados[i] - golsSofridos[i];
        std::cout << "Partida " << i + 1 << ": " << saldoGols << std::endl;
    }

    return 0;
}