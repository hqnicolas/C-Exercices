#include <iostream>
#include <locale>

/* Escreva uma fun��o que recebe um par�metro do tipo inteiro .
 A fun��o dever� retornar o caracter �P� se o par�metro for positivo
ou �N� se o par�metro for igual a zero ou negativo.
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

    cout << "Digite um n�mero: ";
    cin >> numero;

    char sinal = define_sinal(numero);
    cout << "O sinal do n�mero �: " << sinal << endl;

    return 0;
}

