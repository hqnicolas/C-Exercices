#include <iostream>
#include <locale>
using namespace std;

/* 1 � Desenvolva um programa em C++ que cont�m uma fun��o chamada trocar
que recebe duas vari�veis inteiras como par�metros por refer�ncia e troca seus
valores. No main, solicite ao usu�rio dois n�meros, chame a fun��o trocar, e
depois exiba os valores das vari�veis ap�s a troca. */


void trocar(int& num1, int& num2) {
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int n1, n2;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;
    
    cout << "Valor da vari�vel num1 antes da troca: " << n1 << endl;
    cout << "Valor da vari�vel num2 antes da troca: " << n2 << endl;

    trocar(n1, n2);

    cout << "Valor da vari�vel num1 ap�s a troca: " << n1 << endl;
    cout << "Valor da vari�vel num2 ap�s a troca: " << n2 << endl;
    
    return 0;
}

