#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

/* Crie um programa que possua uma classe abstrata chamada Shape e
que possua uma função virtual pura area( ) para calcular a área das
figuras geométricas círculo, retângulo e triângulo.
a. Crie a classe base Shape com o atributo area e com o método
area( ) (virtual puro);
b. Crie as classes derivadas Circulo, Retangulo e Triangulo que
implementam (override) o método area( );
c. No método principal, crie instâncias das classes derivadas e
calcule suas respectivas áreas.
*/

class Shape {
    public:
        virtual double area() = 0;
};

class Circle : public Shape {
    private:
        double radius;

    public:
        Circle(double radius) : radius(radius) {}

        double area() override {
            return 3.14 * radius * radius;
        }
};

class Rectangle : public Shape {
    private:
        double width, height;

    public:
        Rectangle(double width, double height) : width(width), height(height) {}

        double area() override {
            return width * height;
        }
};

class Triangle : public Shape {
    private:
        double base, height;

    public:
        Triangle(double base, double height) : base(base), height(height) {}

        double area() override {
            return (base * height) / 2.0;
        }
};

void showMenu() {
    cout << "Selecione o tipo de objeto:" << endl;
    cout << "1 - Círculo" << endl;
    cout << "2 - Retângulo" << endl;
    cout << "3 - Triângulo" << endl;
}

Shape* createObject(int type) {
    switch (type) {
        case 1:
            double radius;
            cout << "Digite o raio do círculo: ";
            cin >> radius;
            return new Circle(radius);

        case 2:
            double width, height;
            cout << "Digite a largura e a altura do retângulo: ";
            cin >> width >> height;
            return new Rectangle(width, height);

        case 3:
            double triangleBase, triangleHeight;
            cout << "Digite a base e a altura do triângulo: ";
            cin >> triangleBase >> triangleHeight;
            return new Triangle(triangleBase, triangleHeight);
    }
}

int main() {
	setlocale(LC_ALL, "portuguese");
    showMenu();

    int type;
    cout << "Escolha a opção (1-3): ";
    cin >> type;

    Shape* shape = createObject(type); 
    double area = shape->area(); 

    cout << setprecision(4) << fixed;
    cout << "Área da forma: " << area << endl;

    delete shape; 

    return 0;
}





