#include <iostream>
#include <string>
using namespace std;
#include <locale>
#include <cstdlib>

/* 2. Crie um sistema de contas bancárias com diferentes tipos de contas. A classe base será Conta, que terá um método sacar().
A classe ContaCorrente permite saques com taxas, enquanto a classe ContaPoupanca não tem taxa de saque.
Ambas devem sobrescrever o método sacar().
Requisitos:
a. Crie a classe base Conta com métodos depositar() e sacar() (virtual).
b. Crie as classes derivadas ContaCorrente e ContaPoupanca, e sobrescreva o método sacar().
c. No método principal, crie instâncias de contas correntes e poupanças, e simule saques e depósitos.  */

void limparTerminal(){ 
	system("cls");
}

class Conta {
public:
    string titular;
    double saldo;

    void depositar(double valor) {
        saldo += valor;
        cout << "Depósito realizado com sucesso!\n";
     }

    virtual void sacar(double valor) {
        if (saldo >= valor) {
            saldo -= valor;
            cout << "Saque realizado com sucesso!\n";
         } else {
            cout << "Saldo insuficiente!\n";
         }
     }

};

class ContaCorrente : public Conta {
public:
    double taxaSaque = 0.1;  // Taxa de saque de 1%

    void sacar(double valor) override {
        double valorTaxa = valor * taxaSaque;
        if (saldo >= valor + valorTaxa) {
            saldo -= valor + valorTaxa;
            cout << "Saque realizado com taxa de " << taxaSaque * 100 << "%.\n";
         } else {
            cout << "Saldo insuficiente!\n";
         }
     }

};

class ContaPoupanca : public Conta {
public:
    void sacar(double valor) override {
        if (saldo >= valor) {
            saldo -= valor;
            cout << "Saque realizado sem taxa.\n";
         } else {
            cout << "Saldo insuficiente!\n";
         }
     }
};

int main() {
	setlocale(LC_ALL, "portuguese");
    ContaCorrente contaCorrente;
    ContaPoupanca contaPoupanca;

    int opcaoConta;  // Opção para selecionar a conta (corrente ou poupança)

contaCorrente.titular = "Sr. Correia";
contaPoupanca.titular = "Maria Poupas";

contaCorrente.saldo = 1000.0;
contaPoupanca.saldo = 500.0;

int opcao;
double valor;

do {
	limparTerminal();
    cout << "\nMenu:\n";
    cout << "1 - Depositar\n";
    cout << "2 - Sacar\n";
    cout << "3 - Exibir saldos\n";  // Adicionar opção para exibir saldo
    cout << "4 - Sair\n";
    cout << "Escolha uma opção: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
        	limparTerminal();
            cout << "\nSelecione a conta para depositar:\n";
            cout << "1 - Conta Corrente\n";
            cout << "2 - Conta Poupança\n";
            cout << "Escolha uma opção: ";
            cin >> opcaoConta;

            if (opcaoConta == 1) {
                cout << "Digite o valor a depositar: ";
                cin >> valor;
                contaCorrente.depositar(valor);
				cout << "Saldo da conta corrente de Sr. Correia: R$ " << contaCorrente.saldo << endl;
                system("pause");
            } else if (opcaoConta == 2) {
                cout << "Digite o valor a depositar: ";
                cin >> valor;
                contaPoupanca.depositar(valor);
				cout << "Saldo da conta poupança de Maria Poupas: R$ " << contaPoupanca.saldo << endl;
                system("pause");
            } else {
                cout << "Opção inválida!\n";
                system("pause");
            }
            break;

        case 2:
        	limparTerminal();
            cout << "\nSelecione a conta para sacar:\n";
            cout << "1 - Conta Corrente\n";
            cout << "2 - Conta Poupança\n";
            cin >> opcaoConta;
            
            if  (opcaoConta  ==  1)  {
                cout  <<  "Digite o valor a sacar: ";
                cin  >>  valor;
                contaCorrente.sacar(valor);
				cout << "Saldo da conta corrente de Sr. Correia: R$ " << contaCorrente.saldo << endl;
                system("pause");
                break;
            }  else  if  (opcaoConta  ==  2)  {
                cout  <<  "Digite o valor a sacar: ";
                cin  >>  valor;
                contaPoupanca.sacar(valor);
				cout << "Saldo da conta poupança de Maria Poupas: R$ " << contaPoupanca.saldo << endl;
                system("pause");
                break;
            }  else  {
                cout  <<  "Opção inválida!\n";
                system("pause");
                break;
            }

        case 3:
	        limparTerminal();
	        cout << "Saldo da conta corrente de Sr. Correia: R$ " << contaCorrente.saldo << endl;
	        cout << "Saldo da conta poupança de Maria Poupas: R$ " << contaPoupanca.saldo << endl;
            system("pause");

        case 4:
        	limparTerminal();
            cout  <<  "Saindo...\n";
            break;

        default:
        	limparTerminal();
            cout  <<  "Opção inválida!\n";
            system("pause");
    }
    
} while  (opcao  !=  4);

 return  0;
}
