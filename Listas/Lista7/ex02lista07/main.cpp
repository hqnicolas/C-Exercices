#include <iostream>
#include <locale>
using namespace std;

/* 2. Escreva um programa que leia 10 n�meros inteiros e os armazene em um
vetor. Imprima o vetor, o maior elemento e a posi��o que ele se encontra. */


int main() {
	setlocale(LC_ALL, "portuguese");
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite um n�mero: ";
        cin >> numeros[i];
    }

    cout << "\nVetor de n�meros: \n";
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

    cout << "\n\nMaior n�mero: " << maiorNumero;
    cout << "\nPosi��o do maior n�mero: " << posicaoMaiorNumero;
	system("PAUSE");
    return 0;
}

