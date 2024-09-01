#include <iostream>
#include <locale>
#include  <cmath>
using namespace std;

/*  Desenvolva um programa em C++ que calcula a �rea de diferentes formas
	geom�tricas. O programa deve usar a sobrecarga de fun��es para calcular a
	�rea de um c�rculo, um ret�ngulo e um tri�ngulo. Cada forma ter� uma fun��o
	dedicada para o c�lculo da �rea, e as fun��es devem ter diferentes assinaturas
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

    cout << "Escolha uma forma para calcular � �rea:" << endl;
    cout << "1. C�rculo" << endl;
    cout << "2. Ret�ngulo" << endl;
    cout << "3. Tri�ngulo" << endl;
    cin >> opcao;

    double raio, largura, altura, base, lado, resultado;

    switch (opcao) {
        case 1:
            cout << "Digite o raio de um c�rculo: ";
            cin >> raio;

            try {
                resultado = area(raio);
                cout << "A �rea do c�rculo com o raio de " << raio << " unidades �: " << resultado << endl;
            } catch (...) {
                cerr << "Tente de outra forma..." << endl;
            }

            break;

        case 2:
            cout << "Digite a largura do ret�ngulo: ";
            cin >> largura;
            cout << "Digite a altura do ret�ngulo: ";
            cin >> altura;

            try {
                resultado = area(largura, altura);
                cout << "A �rea do ret�ngulo �: " << resultado << endl;
            } catch (...) {
                cerr << "Tente de outra forma..." << endl;
            }

            break;

        case 3:
            cout << "Digite a base do tri�ngulo: ";
            cin >> base;
            cout << "Digite o lado do tri�ngulo: ";
            cin >> lado;
            cout << "Digite a altura do tri�ngulo: ";
            cin >> altura;

            try {
                resultado = area(base, altura, lado);
                cout << "A �rea do tri�ngulo �: " << resultado << endl;
            } catch (...) {
                cerr << "Tente de outra forma..." << endl;
            }

            break;

        default:
            cerr << "Op��o inv�lida! Por favor, tente novamente." << endl;
    }

    return 0;
}

