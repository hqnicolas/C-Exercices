#include <iostream>
#include <locale>
using namespace std;

/* Crie uma classe chamada Complexo que representa um número complexo com duas partes:
 a parte real e a parte imaginária. Sobrecarregue o operador + para permitir a adição de dois objetos da classe Complexo.
 Implemente um método para imprimir o número complexo no formato "(real + imagi)". */


class Complexo {
private:
    double real;
    double imaginario;

public:
    Complexo(double r, double i) : real(r), imaginario(i) {}

    void imprimir() const {
        cout << "(" << real << " + " << imaginario << "i)";
    }

    Complexo operator+(const Complexo& other) const {
        return Complexo(real + other.real, imaginario + other.imaginario);
    }
};

int main() {
	setlocale(LC_ALL, "portuguese");
    double real1, imag1, real2, imag2;

    cout << "Digite um número real ao lado do complexo: ";
    cin >> real1 >> imag1;

    cout << "Digite um número real ao lado do complexo: ";
    cin >> real2 >> imag2;

    Complexo c1(real1, imag1);
    Complexo c2(real2, imag2);

    Complexo soma = c1 + c2;

    soma.imprimir();

    return 0;
}
