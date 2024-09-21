#include <iostream>
#include <string>
#include <locale>
using namespace std;

/* Crie uma classe chamada ContaBancaria com os seguintes atributos:
Privados: o saldo (do tipo double): Representa o saldo da conta. 
o senha (do tipo std::string): Representa a senha da conta.
Públicos: o titular (do tipo std::string): Nome do titular da conta.
Crie os seguintes métodos públicos: 
depositar(double valor): Aumenta o saldo da conta em um valor específico. 
sacar(double valor, std::string senha): Permite sacar um valor da conta,
mas apenas se a senha estiver correta e o saldo for suficiente. 
exibirSaldo(std::string senha): Mostra o saldo da conta se a senha estiver correta.
No main(), crie um objeto da classe ContaBancaria, teste os métodos 
depositar, sacar, e exibirSaldo, e valide a segurança ao tentar sacar ou ver o saldo com uma senha incorreta */

void limparTerminal() { 
	system("cls");
}

class ContaBancaria {
    private:
        double saldo = 5920.00;
        string senha = "silva123";

    public:
   	
        string titular = "Joao Silva";

        void depositar(double valor)  {
            if (valor > 0)  {
                saldo += valor;
            }
        }

        bool sacar(double valor, string senha)  {
            if (this->senha == senha && saldo >= valor)  {
                saldo -= valor;
                return true;
            }
            return false;
        }

        bool exibirSaldo(string senha)  {
            if (this->senha == senha)  {
                cout << "Saldo: R$ " << saldo << endl;
                return true;
            }
            return false;
        }
};


int main()  {
    ContaBancaria conta1;

    int opcao;
    do  {
    	limparTerminal();
        cout << endl;
        cout << "Conta Bancaria de " << conta1.titular << endl;
        cout << "Escolha uma das opcoes abaixo:" << endl;
        cout << "1 - Depositar" << endl;
        cout << "2 - Sacar" << endl;
        cout << "3 - Exibir Saldo" << endl;
        cout << "4 - Sair" << endl;
        cin >> opcao;

        double valor;
        string senha;

        switch (opcao)  {
            case 1:
                cout << "Valor a depositar: ";
                cin >> valor;
                conta1.depositar(valor);
                break;

            case 2:
                cout << "Valor a sacar: ";
                cin >> valor;
                cout << "Senha da conta: ";
                cin >> senha;

                if (conta1.sacar(valor, senha))  {
                    cout << "Saque realizado com sucesso!" << endl;
                } else  {
                    cout << "Senha incorreta ou saldo insuficiente." << endl;
                }
                break;

            case 3:
                cout << "Senha da conta: ";
                cin >> senha;

                if (conta1.exibirSaldo(senha))  {
                    cout << "Saldo exibido com sucesso!" << endl;
                } else  {
                    cout << "Senha incorreta." << endl;
                }
                break;

            case 4:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}

