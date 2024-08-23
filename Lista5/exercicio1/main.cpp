
/*  Escreva uma função que recebe três parâmetros do tipo inteiro e retorna a soma destes três parâmetros. */

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

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    int soma_numeros = soma(n1, n2, n3);
    cout << "A soma dos três números é: " << soma_numeros << std::endl;
    
    return 0;
}

