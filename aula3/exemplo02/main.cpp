#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "portuguese");
    int numeros[5];
    int soma = 0;
    
    // Entrada dos n�meros
    std::cout << "Digite 5 n�meros inteiros:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> numeros[i];
    }

    // C�lculo da soma dos elementos do vetor
    for (int i = 0; i < 5; ++i) {
        soma += numeros[i];
    }

    // Exibi��o do resultado
    std::cout << "A soma dos elementos do vetor �: " << soma << std::endl;

    return 0;
}
