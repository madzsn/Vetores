#include <iostream>
using namespace std;

int main () {
     int ver [4];
     vet [0] = 5;
    vet [1] = 10;
    int vet [4] = {5, 10};

    cout << vet [2] << endl;

    cout << "[ ";
    for (int i = 0; i < 4; i++) {
       cout << vet [i] << " ";
    }
    cout << " ]" << endl;

  // A barra aparece para dividir o byte (x) do valor inteiro (y)
   int x = sizeof(vet)/sizeof(int); 
   int y = sizeof(int);
   cout << "Tamanho de inteiro: " << y << endl;
   cout << "Quantidade de elementos do vetor: " << x << endl;

   
   // Alocação Dinâmica
   cout << "Digite o tamanho do vetor!" << endl;
   cin >> tamanho;
   int* vetor = new int[tamanho];
   
   // Para o usuário declarar os números, usaremos o For
   for (int i = 1; i < tamanho; i++) {
    cout << "Digite o elemento " << i << "do vetor: " << endl;
    cin >> vetor[i];
   } 

   for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
   }
   cout << endl;

    // Para deletar o vetor
    delete [] vetor;


   return 0;
}


/*sizeof = indica a quantidade de armazenamento em bytes, 
necessária para armazenar um objeto do tipo do operando.