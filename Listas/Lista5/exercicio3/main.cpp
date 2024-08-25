#include <iostream>
#include <locale>

/* Escreva uma função que recebe três parâmetros do tipo inteiro.
Ela deverá retornar true se os parâmetros estiverem ordenados de forma
crescente ou false, caso contrário. */

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

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    bool ordenado = esta_ordenado(n1, n2, n3);
    if (ordenado) {
        cout << "Os números estão em ordem crescente." << endl;
    } else {
        cout << "Desculpe, não é crescente..." << endl;
    }

    return 0;
}

