#include <iostream>
#include <string>
#include <locale>
using namespace std;

/* Um construtor é um método que é chamado automaticamente quando um objeto dessa classe é declarado */

  
class ContaCorrente {
	
private:
    string titular_;
    float saldo_;
    float limite_;
    
public:
    ContaCorrente(string titular, float saldo, float limite);
    void exibirInfo();
};
    
int main() {	
    setlocale(LC_ALL, "portuguese");
    ContaCorrente minhaConta("Rodrigo", 200, 1000);
    minhaConta.exibirInfo();
    return 0;
	}
	
ContaCorrente::ContaCorrente(string titular, float saldo, float limite) {
    titular_ = titular;
    saldo_ = saldo;
    limite_ = limite;
}

void ContaCorrente::exibirInfo() {
    cout << "Titular: " << titular_ << endl;
    cout << "Saldo: R$ " << saldo_ << endl;
    cout << "Limite: R$" << limite_ << endl;
    cout << "Valor disponível para saque: R$" << saldo_ + limite_ << endl;
}


