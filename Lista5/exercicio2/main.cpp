#include <iostream>
#include <locale>

/* Escreva uma função que recebe um parâmetro do tipo inteiro .
 A função deverá retornar o caracter ‘P’ se o parâmetro for positivo
ou ‘N’ se o parâmetro for igual a zero ou negativo.
 */
using namespace std;

char define_sinal(int num) {
    if (num > 0) {
        return 'P';
    } else if (num == 0) {
        return 'N';
    } else {
        return 'N';
    }
}

int main() {
	setlocale(LC_ALL, "portuguese");
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    char sinal = define_sinal(numero);
    cout << "O sinal do número é: " << sinal << endl;

    return 0;
}

