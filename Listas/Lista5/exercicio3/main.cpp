#include <iostream>
#include <locale>

/* Escreva uma fun��o que recebe tr�s par�metros do tipo inteiro.
Ela dever� retornar true se os par�metros estiverem ordenados de forma
crescente ou false, caso contr�rio. */

using namespace std;

bool esta_ordenado(int num1, int num2, int num3) {
    if (num1 < num2 && num2 < num3) {
    	return true;
	} else {
		return false;
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
    int n1, n2, n3;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;
    cout << "Digite o terceiro n�mero: ";
    cin >> n3;

    bool ordenado = esta_ordenado(n1, n2, n3);
    if (ordenado) {
        cout << "Os n�meros est�o em ordem crescente." << endl;
    } else {
        cout << "Desculpe, n�o � crescente..." << endl;
    }

    return 0;
}

