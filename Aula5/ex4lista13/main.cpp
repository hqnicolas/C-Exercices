#include <iostream>
#include <locale>

int fibonacci_rec(int numero);

int main() {
    std::setlocale(LC_ALL, "portuguese");

    for (int i = 0; i <= 7; ++i) {
        std::cout << "Fibonacci (" << i << ") é: " << fibonacci_rec(i) << std::endl;
        if (i == 0 || i == 1) {
            std::cout << "(com recursão)" << std::endl;
        } else {
            std::cout << "(recursivo)" << std::endl;
        }
    }

    return 0;
}

int fibonacci_rec(int numero) {
    if (numero <= 1) {
        return numero;
    }
    
    int fib = fibonacci_rec(numero - 1);
    fib += fibonacci_rec(numero - 2);
    return fib;
}

