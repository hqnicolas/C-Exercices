#include <iostream>
#include <string>
#include <locale>
using namespace std;

/* 
Crie a classe Pessoa que tenha 03 construtores sobrecarregados
O primeiro construtor deve receber o nome, idade, email e telefone da pessoa; 
O segundo construtor deve receber nome, idade e e-mail da pessoa; 
O terceiro é o construtor padrão; 
Crie um método para mostrar as informações; e. Crie 03 objetos, um para cada construtor.
*/

void corte() {
 	int width = 50;
    string line(width, '=');
    cout << line << endl;
}

class Pessoa {
private:
    string nome;
    int idade;
    string email;
    string telefone;

public:
    Pessoa(string n, int i, string e, string t) {
        nome = n;
        idade = i;
        email = e;
        telefone = t;
    }
    Pessoa(string n, int i, string e) {
        nome = n;
        idade = i;
        email = e;
    }
    Pessoa() {
        nome = "";
        idade = 0;
        email = "";
        telefone = "";
    }
    void mostrarInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Email: " << email << endl;
        cout << "Telefone: " << telefone << endl;
    }
};
    
int main() {
    setlocale(LC_ALL, "portuguese");
    corte();
    Pessoa pessoa1("João", 25, "joao@outlook.com", "(48)99912-3521");
    Pessoa pessoa2("Mario", 30, "mario@hotmail.com");
    Pessoa pessoa3;
    
    cout << "Pessoa 1:" << endl;
    pessoa1.mostrarInformacoes();
    corte();
    
    cout << "\nPessoa 2:" << endl;
    pessoa2.mostrarInformacoes();
    corte();
    
    cout << "\nPessoa 3 (Construtor padrão):" << endl;
    pessoa3.mostrarInformacoes();
    corte();
    return 0;
}


