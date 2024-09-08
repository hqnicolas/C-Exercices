#include <iostream>
#include <locale>
using namespace std;

/* 2. Escreva um programa que leia 10 números inteiros e os armazene em um
vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra. */


int main() {
	setlocale(LC_ALL, "portuguese");
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite um número: ";
        cin >> numeros[i];
    }

    cout << "\nVetor de números: \n";
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    int maiorNumero = numeros[0];
    int posicaoMaiorNumero = 0;

    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maiorNumero) {
            maiorNumero = numeros[i];
            posicaoMaiorNumero = i;
        }
    }

    cout << "\n\nMaior número: " << maiorNumero;
    cout << "\nPosição do maior número: " << posicaoMaiorNumero;
	system("PAUSE");
    return 0;
}

