#include <iostream>
#include <locale>

/* 
Lista de exerc�cios 03 � Instru��o condicional Switch Case 1. 
Leia o c�digo de um determinado produto e mostre sua classifica��o. 
Utilize a seguinte refer�ncia:
C�digo 1 Classifica��o  Alimento n�o-perec�vel 
C�digo 2,3 ou 4 Classifica��o  Alimento perec�vel 
C�digo 5 ou 6 Classifica��o  Vestu�rio 
C�digo 7 Classifica��o  Higiene Pessoal 
C�digo 8 at� 15 Classifica��o  Limpeza e Utens�lios Dom�sticos
Qualquer outro c�digo C�digo inv�lido

 */


int main() {
	setlocale(LC_ALL, "portuguese");
	int produto;
	std::cout << "Este programa receber� o c�digo de um produto e exibir� sua classifica��o.\n";
    std::cout << "de 1 ~ 15 ok, mas Qualquer outro c�digo: C�digo inv�lido\n";
	std::cout << "Digite o c�digo do produto: ";
	std::cin >> produto;

	switch (produto) {
	case 1:
		std::cout << "Classifica��o: Alimento n�o-perec�vel" << std::endl;
		break;
	case 2 ... 4:
		std::cout << "Classifica��o: Alimento perec�vel" << std::endl;
		break;
	case 5 ... 6:
		std::cout << "Classifica��o: Vestu�rio" << std::endl;
		break;
	case 7:
		std::cout << "Classifica��o: Higiene Pessoal" << std::endl;
		break;
	case 8 ... 15:
		std::cout << "Classifica��o: Limpeza e Utens�lios Dom�sticos" << std::endl;
		break;
	default:
		std::cout << "C�digo inv�lido" << std::endl;
		break;
	}
    system("PAUSE");

	return 0;
}
