#include <iostream>
#include <locale>
using namespace std;

/*  Escreva uma função chamada calcular que recebe três parâmetros: dois
	números inteiros e um caractere que indica a operação a ser realizada (+, -, *, /).
	O operador deve ter um valor padrão de '+'.
	No main, solicite ao usuário dois números e, opcionalmente, um operador. Se
	o operador não for fornecido, a função deve realizar a soma.
	Exiba o resultado da operação. */


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
                throw "Divisão por zero aqui não João Cléber!"; 
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

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
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

