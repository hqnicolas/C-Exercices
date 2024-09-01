#include <iostream>
#include <locale>
#include  <cmath>
using namespace std;

/*  Desenvolva um programa em C++ que calcula a área de diferentes formas
	geométricas. O programa deve usar a sobrecarga de funções para calcular a
	área de um círculo, um retângulo e um triângulo. Cada forma terá uma função
	dedicada para o cálculo da área, e as funções devem ter diferentes assinaturas
	para acomodar as diferentes formas. */

double area(double raio) {
    const double PI = 3.14;
    return PI * pow(raio, 2);
}

double area(double largura, double altura) {
    return largura * altura;
}

double area(double base, double altura, double lado) {
    return (base * altura) / 2;
}

int main() {
	setlocale(LC_ALL, "portuguese");
    int opcao;

    cout << "Escolha uma forma para calcular á área:" << endl;
    cout << "1. Círculo" << endl;
    cout << "2. Retângulo" << endl;
    cout << "3. Triângulo" << endl;
    cin >> opcao;

    double raio, largura, altura, base, lado, resultado;

    switch (opcao) {
        case 1:
            cout << "Digite o raio de um círculo: ";
            cin >> raio;

            try {
                resultado = area(raio);
                cout << "A área do círculo com o raio de " << raio << " unidades é: " << resultado << endl;
            } catch (...) {
                cerr << "Tente de outra forma..." << endl;
            }

            break;

        case 2:
            cout << "Digite a largura do retângulo: ";
            cin >> largura;
            cout << "Digite a altura do retângulo: ";
            cin >> altura;

            try {
                resultado = area(largura, altura);
                cout << "A área do retângulo é: " << resultado << endl;
            } catch (...) {
                cerr << "Tente de outra forma..." << endl;
            }

            break;

        case 3:
            cout << "Digite a base do triângulo: ";
            cin >> base;
            cout << "Digite o lado do triângulo: ";
            cin >> lado;
            cout << "Digite a altura do triângulo: ";
            cin >> altura;

            try {
                resultado = area(base, altura, lado);
                cout << "A área do triângulo é: " << resultado << endl;
            } catch (...) {
                cerr << "Tente de outra forma..." << endl;
            }

            break;

        default:
            cerr << "Opção inválida! Por favor, tente novamente." << endl;
    }

    return 0;
}

