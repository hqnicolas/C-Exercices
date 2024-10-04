#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
/*	
#######################################################################################################################	
Vamos criar a classe Point, para representar um ponto no plano cartesiano. Ela recebe dois inteiros (coordenadas) e tem
uma função que mostra essas coordenadas, veja a classe Point:
*/
	
	class Point {
    public:
        int x_, y_;
    
    Point(int x, int y);
    Point(); // constructor padrão
    void getPoint();
    Point operator+(Point p); // sobrecarga do operador +
};

/*
#######################################################################################################################
O cabeçalho da sobrecarga é o mesmo de uma função. Neste caso:
Point operator+(Point p);
Ou seja, deve sempre retornar o tipo de dado da classe, que é Point. Depois escrevemos "operator+" para
sobrecarregar o operador +, e por fim, colocamos o tipo de dado que vai ser somado, no caso, é outro objeto do tipo
Point. */


#include <iostream>
using namespace std;

class Point {
    public:
        // Constructor that takes an x and y coordinate, assigns them to the object,
        // creates a new point for storing the pointer to this newly created object.
        Point::Point(int x, int y) : _x_(x), _y_(y) {}

        // Getters
        int getX() const { return _x_; }
        int getY() const { return _y_; }

        // Print methods
        void print() {
            cout << "(" << _x_ << ", " << _y_ << ")" << endl;
        }
};

#######################################################################################################################

int main() {
    Point p1(2, 3);
    p1.print(); // Output: (2, 3)

    return 0;
}

#######################################################################################################################

int main() {
    Point p1(1, 2), p2(2, 3);
    Point p3 = p1 + p2;
    p3.getPoint();
    return 0;
}

/*
#######################################################################################################################	
 A classe Caixa tem três atributos privados: largura, altura e profundidade.
O método calcularVolume foi declarado como uma função amiga da classe Caixa, usando a palavra resrvada friend
dentro da classe. Isso permite que a função acesse os membros privados diretamente. */


class Caixa {
    private:
        double largura_, altura, profundidade_;
 
    public:
        Caixa(double largura, double altura, double profundidade); // construtor padrão
        Caixa(); // constructor padrão
friend double calcularVolume(Caixa c);
};

	

/*
#######################################################################################################################
a função principal main, criamos um objeto caixa e chamamos a função calcularVolume, que retorna o produto dos
atributos privados para calcular o volume da caixa. */


Caixa::Caixa(double largura, double altura, double profundidade) {
    largura_(largura), altura_(altura), profundidade_(profundidade);
}

Caixa::Caixa() {}

double calcularVolume(Caixa c) {
    return c.largura_*c.altura_*c.profundidade_;
}



