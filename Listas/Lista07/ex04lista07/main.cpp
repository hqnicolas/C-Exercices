#include <iostream>
using namespace std;

/* 

4 – Faça um programa que permita ao usuário entrar com uma matriz 3x3
números inteiros. Em seguida, gere um vetor unidimensional pela soma dos
números de cada coluna da matriz e mostre na tela este vetor. Por exemplo, a
matriz:

5 -8 10
1  2 15
25 10 7

Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A
primeira posição será 5 + 1 + 25, e assim por diante:

31 4 3

 */

int main() {
    int matriz[3][3];
    int somaColunas[3] = {0};

     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o elemento da linha " << i + 1 << " e coluna " << j + 1 << ": ";
            cin >> matriz[i][j];
          }
      }

     for (int j = 0; j < 3; j++) {
         for (int i = 0; i < 3; i++) {
             somaColunas[j] += matriz[i][j];
           }
      }

     cout << "\nVetor com a soma de cada coluna:\n";
     for (int i = 0; i < 3; i++) {
         cout << somaColunas[i] << "   ";
       }
	system("PAUSE");
    return 0;
}

