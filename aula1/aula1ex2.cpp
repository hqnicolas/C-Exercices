#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	string name;
    int idade;
    
    // Solicita entrada de dados do usu�rio
    cout << "Digite seu nome: ";
    getline(std::cin, name);
    
    cout << "Digite sua idade: ";
    cin >> idade;
    cin.ignore(); // Para remover o caractere de nova linha do buffer

    // exibe uma mensagem  final
    cout << "Ol�, " << name << "! Voc� tem " << idade << " anos." << std::endl;
    system("PAUSE");
    
    return 0;
}
