#include <iostream>
#include <locale>
using namespace std;

/*
2 - Crie uma classe chamada Retangulo que possui dois atributos privados:
comprimento e largura. A classe deve ter:

a. Um construtor para inicializar os valores de comprimento e largura.

b. Uma função amiga chamada calcularArea que recebe um objeto da
classe Retangulo e retorna a área do retângulo.

c. Uma função amiga chamada calcularPerimetro que recebe um objeto da
classe Retangulo e retorna o perímetro do retângulo.

d. Implemente a função main() para criar um objeto da classe Retangulo,
calcular e imprimir a área e o perímetro utilizando as funções amigas.
 */

class Retangulo {
    private:
        double comprimento_;
        double largura_;

    public:
        Retangulo(double comprimento, double largura) : comprimento_(comprimento), largura_(largura) {}

        friend double calcularArea(Retangulo r);

        friend double calcularPerimetro(Retangulo r);
};

double calcularArea(Retangulo r) {
    return r.comprimento_ * r.largura_;
}

double calcularPerimetro(Retangulo r) {
    return 2 * (r.comprimento_ + r.largura_);
}

int main() {
	setlocale(LC_ALL, "portuguese");
    double base, altura;
  
    cout << "Digite o lado e a altura na mesma linha: ";
    cin >> base >> altura;

	Retangulo retangulo(base, altura);
	double area = calcularArea(retangulo);
    double perimetro = calcularPerimetro(retangulo);

    cout << "Área do Retângulo: " << area << endl;
    cout << "Perímetro do Retângulo: " << perimetro << endl;

    return 0;
}

