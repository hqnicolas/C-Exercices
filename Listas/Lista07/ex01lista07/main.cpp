#include <iostream>
#include <locale>
using namespace std;

/* 
1. Faça um programa que possua um vetor denominado A que armazene 6
números inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5,-2,-5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das
posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posições o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = (A[0]) + (A[1]) + (A[5]);

	cout << "Soma dos valores das posições A[0], A[1] e A[5]: " << soma << endl;
	system("PAUSE");

    A[4] = 100;

    for (int i = 0; i < 6; i++) {
        cout << "Valor do vetor A na posição " << i << ": " << A[i] << endl;
    }
	system("PAUSE");
    return 0;
}

