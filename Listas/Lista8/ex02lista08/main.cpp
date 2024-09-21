#include <iostream>
#include <string>
#include <locale>
using namespace std;

/* Criar uma classe para representar um retângulo e calcular sua área e perímetro. 
Requisitos: Crie uma classe chamada Retangulo com dois atributos privados: largura e altura.
Crie métodos públicos para: Calcular a área do retângulo. Calcular o perímetro do retângulo. 
Crie métodos getters e setters para modificar e acessar os valores de largura e altura. No main(),
crie um objeto da classe Retangulo, atribua valores de largura e altura e calcule a área e o perímetro. */

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

    cout << "Insira o comprimento do retângulo:"<< endl;
    double lengthInput;
    cin >> lengthInput;
    rectangle1.setLength(lengthInput);

    cout << "Insira a largura dos retângulos:"<< endl;
    double widthInput;
    cin >> widthInput;
    rectangle1.setWidth(widthInput);

    double area = rectangle1.calculateArea();
    double perimeter = rectangle1.calculatePerimeter();

    cout << "A área do retângulo é:" << area << endl;
    cout << "O perímetro do perímetro é:" << perimeter << endl;

    return 0;
}

