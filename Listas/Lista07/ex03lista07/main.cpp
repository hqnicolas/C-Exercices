#include <iostream>

/* 3 – Faça um programa em C que lê uma matriz de 3x3 elementos usando um
comando for, multiplica cada elemento por 5 e imprime o resultado. */

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
         }
     }

     cout << "\nMatriz original:\n";
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             cout << matriz[i][j] << "  ";
          }
          cout << endl;
     }


     cout << "\nMatriz multiplicada por 5:\n";
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             matriz[i][j] *= 5;
             cout << matriz[i][j] << "  ";
          }
          cout << endl;
     }
     system("PAUSE");
     return 0;
}

