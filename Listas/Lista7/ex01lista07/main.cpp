#include <iostream>
#include <locale>
using namespace std;

/* 
1. Fa�a um programa que possua um vetor denominado A que armazene 6
n�meros inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5,-2,-5, 7.
(b) Armazene em uma vari�vel inteira (simples) a soma entre os valores das
posi��es A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posi��o 4, atribuindo a esta posi��es o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = (A[0]) + (A[1]) + (A[5]);

	cout << "Soma dos valores das posi��es A[0], A[1] e A[5]: " << soma << endl;
	system("PAUSE");

    A[4] = 100;

    for (int i = 0; i < 6; i++) {
        cout << "Valor do vetor A na posi��o " << i << ": " << A[i] << endl;
    }
	system("PAUSE");
    return 0;
}

