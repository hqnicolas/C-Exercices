
/*  Escreva uma fun��o que recebe tr�s par�metros do tipo inteiro e retorna a soma destes tr�s par�metros. */

#include <iostream>
#include <locale>

using namespace std;
#include <iostream>

int soma(int num1, int num2, int num3) {
    return num1 + num2 + num3;
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

    int soma_numeros = soma(n1, n2, n3);
    cout << "A soma dos tr�s n�meros �: " << soma_numeros << std::endl;
    
    return 0;
}

