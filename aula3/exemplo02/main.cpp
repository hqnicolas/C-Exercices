#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "portuguese");
    int numeros[5];
    int soma = 0;
    
    // Entrada dos números
    std::cout << "Digite 5 números inteiros:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> numeros[i];
    }

    // Cálculo da soma dos elementos do vetor
    for (int i = 0; i < 5; ++i) {
        soma += numeros[i];
    }

    // Exibição do resultado
    std::cout << "A soma dos elementos do vetor é: " << soma << std::endl;

    return 0;
}
