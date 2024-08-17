#include <iostream>
#include <locale>

/* 
Lista de exercícios 03 – Instrução condicional Switch Case 1. 
Leia o código de um determinado produto e mostre sua classificação. 
Utilize a seguinte referência:
Código 1 Classificação  Alimento não-perecível 
Código 2,3 ou 4 Classificação  Alimento perecível 
Código 5 ou 6 Classificação  Vestuário 
Código 7 Classificação  Higiene Pessoal 
Código 8 até 15 Classificação  Limpeza e Utensílios Domésticos
Qualquer outro código Código inválido

 */


int main() {
	setlocale(LC_ALL, "portuguese");
	int produto;
	std::cout << "Este programa receberá o código de um produto e exibirá sua classificação.\n";
    std::cout << "de 1 ~ 15 ok, mas Qualquer outro código: Código inválido\n";
	std::cout << "Digite o código do produto: ";
	std::cin >> produto;

	switch (produto) {
	case 1:
		std::cout << "Classificação: Alimento não-perecível" << std::endl;
		break;
	case 2 ... 4:
		std::cout << "Classificação: Alimento perecível" << std::endl;
		break;
	case 5 ... 6:
		std::cout << "Classificação: Vestuário" << std::endl;
		break;
	case 7:
		std::cout << "Classificação: Higiene Pessoal" << std::endl;
		break;
	case 8 ... 15:
		std::cout << "Classificação: Limpeza e Utensílios Domésticos" << std::endl;
		break;
	default:
		std::cout << "Código inválido" << std::endl;
		break;
	}
    system("PAUSE");

	return 0;
}
