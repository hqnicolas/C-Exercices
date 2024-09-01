#include <iostream>
#include <locale>
using namespace std;

/*  Escreva uma fun��o chamada calcular que recebe tr�s par�metros: dois
	n�meros inteiros e um caractere que indica a opera��o a ser realizada (+, -, *, /).
	O operador deve ter um valor padr�o de '+'.
	No main, solicite ao usu�rio dois n�meros e, opcionalmente, um operador. Se
	o operador n�o for fornecido, a fun��o deve realizar a soma.
	Exiba o resultado da opera��o. */


int calcular(int num1, int num2, char operador = '+') {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                throw "Divis�o por zero aqui n�o Jo�o Cl�ber!"; 
            }
            return num1 / num2;
        default: 
            cout << "Usando o Operador (+)" << endl;
            return num1 + num2;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    char operador;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;
    cout << "Digite o operador (+, -, *, /): ";
    cin >> operador;

    try {
        int resultado = calcular(n1, n2, operador);
        cout << "Resultado: " << resultado << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    } catch (...) {
        cerr << "Tente de outra forma....." << endl;
    }
    
    return 0;
}

