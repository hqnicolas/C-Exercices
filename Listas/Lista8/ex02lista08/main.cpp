#include <iostream>
#include <string>
#include <locale>
using namespace std;

/* Criar uma classe para representar um ret�ngulo e calcular sua �rea e per�metro. 
Requisitos: Crie uma classe chamada Retangulo com dois atributos privados: largura e altura.
Crie m�todos p�blicos para: Calcular a �rea do ret�ngulo. Calcular o per�metro do ret�ngulo. 
Crie m�todos getters e setters para modificar e acessar os valores de largura e altura. No main(),
crie um objeto da classe Retangulo, atribua valores de largura e altura e calcule a �rea e o per�metro. */

class Rectangle {
    private:
        double length;
        double width;

    public:
        void setLength(double l) {
            length = l;
        }

        void setWidth(double w) {
            width = w;
        }

        double getLength() const {
            return length;
        }

        double getWidth() const {
            return width;
        }

        double calculateArea() const {
            return length * width;
        }

        double calculatePerimeter() const {
            return 2 * (length + width);
        }
};

int main() {
	setlocale(LC_ALL, "portuguese");
    Rectangle rectangle1;

    cout << "Insira o comprimento do ret�ngulo:"<< endl;
    double lengthInput;
    cin >> lengthInput;
    rectangle1.setLength(lengthInput);

    cout << "Insira a largura dos ret�ngulos:"<< endl;
    double widthInput;
    cin >> widthInput;
    rectangle1.setWidth(widthInput);

    double area = rectangle1.calculateArea();
    double perimeter = rectangle1.calculatePerimeter();

    cout << "A �rea do ret�ngulo �:" << area << endl;
    cout << "O per�metro do per�metro �:" << perimeter << endl;

    return 0;
}

