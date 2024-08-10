#include <iostream>

int main() {
	int num;
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite um numero: "; // Saída
	std::cin >> num; // Entrada 
	std::cout << "Voce digitou: " << num << std::endl; // Saída
	std::cout << "Enter para sair...";
	system("PAUSE");
	return 0;
}
