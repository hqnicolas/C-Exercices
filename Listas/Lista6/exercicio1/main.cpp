#include <iostream>
#include <locale>
using namespace std;

/* 1 – Desenvolva um programa em C++ que contém uma função chamada trocar
que recebe duas variáveis inteiras como parâmetros por referência e troca seus
valores. No main, solicite ao usuário dois números, chame a função trocar, e
depois exiba os valores das variáveis após a troca. */


void trocar(int& num1, int& num2) {
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int n1, n2;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    
    cout << "Valor da variável num1 antes da troca: " << n1 << endl;
    cout << "Valor da variável num2 antes da troca: " << n2 << endl;

    trocar(n1, n2);

    cout << "Valor da variável num1 após a troca: " << n1 << endl;
    cout << "Valor da variável num2 após a troca: " << n2 << endl;
    
    return 0;
}

