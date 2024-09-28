#include <iostream>
#include <string>
#include <locale>
using namespace std;

class ContaCorrente {
    
private:
    string titular_;
    float saldo_;
    float limite_;
    bool validarSaque(float valor) {
        return (saldo_ + limite_) >= valor;
    }
    
public:
    ContaCorrente(string titular, float saldo, float limite);
    void exibirInfo();
    void corte();
    void sacar(float valor);
    void transferir(float valor, ContaCorrente& deConta); 
};
    
int main() {
    setlocale(LC_ALL, "portuguese");
    ContaCorrente minhaConta("Rodrigo", 200, 1000);
    minhaConta.corte();
    minhaConta.exibirInfo();
    minhaConta.corte();
    float valorSaque = 50;
    minhaConta.sacar(valorSaque);
    minhaConta.exibirInfo();
    minhaConta.corte();
    ContaCorrente destinatario("Maria", 150, 500);
    float valorTransferencia = 75;
    minhaConta.transferir(valorTransferencia, destinatario);
    minhaConta.exibirInfo();
    minhaConta.corte();
    destinatario.exibirInfo();
    minhaConta.corte();
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

void ContaCorrente::sacar(float valor) {
    if (validarSaque(valor)) {
        saldo_ -= valor;
        cout << "Saque realizado com sucesso!" << endl;
    } else {
        cout << "Não foi possível realizar o saque." << endl;
    }
}

void ContaCorrente::transferir(float valor, ContaCorrente& deConta) {
    if (saldo_ + limite_ < valor) {
        cout << "Nao foi possivel realizar a transferencia." << endl;
    } else {
        saldo_ -= valor;
        deConta.saldo_ += valor;
        cout << "Transferencia realizada com sucesso!" << endl;
    }
}

void ContaCorrente::corte() {
 	int width = 50;
    string line(width, '=');
    cout << line << endl;
}
