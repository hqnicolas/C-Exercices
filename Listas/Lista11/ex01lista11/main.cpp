#include <iostream>
#include <string>
using namespace std;
#include <locale>

/* Crie um programa que modele diferentes tipos de funcionários em uma empresa.
A classe base será Funcionario, que terá atributos como nome e salarioBase,
além de um método virtual calcularSalarioFinal().
A classe derivada FuncionarioComissionado deve adicionar uma comissão ao salário base,
 e a classe FuncionarioHorista deve calcular o salário com base nas horas trabalhadas.
Requisitos:
a. Crie a classe base Funcionario com os atributos nome e salarioBase, além do método calcularSalarioFinal() (virtual).
b. Crie as classes FuncionarioComissionado e FuncionarioHorista que sobrescrevem calcularSalarioFinal().
c. No método principal, crie instâncias dos funcionários e calcule seus salários finais. */

class Funcionario {
public:
    string nome;
    double salarioBase;

    virtual double calcularSalarioFinal() const {
        return salarioBase; 
    }
};

class FuncionarioComissionado : public Funcionario {
private:
    double comissao;
    double vendasMensais;

public:
    void setComissao(double c) {
        comissao = c;
    }

    double getvendasMensais() const {
        return vendasMensais;
    }
    
        void setvendasMensais(double c) {
        vendasMensais = c;
    }

    double getComissao() const {
        return comissao;
    }

    double calcularSalarioFinal() const override {
        return salarioBase + (comissao * vendasMensais * 0.01); 
    }
};

class FuncionarioHorista : public Funcionario {
private:
    double valorHora;
    int horasTrabalhadas;

public:
    void setValorHora(double h) {
        valorHora = h;
    }

    double getValorHora() const {
        return valorHora;
    }

    void setHorasTrabalhadas(int ht) {
        horasTrabalhadas = ht;
    }

    int getHorasTrabalhadas() const {
        return horasTrabalhadas;
    }

    double calcularSalarioFinal() const override {
        return salarioBase + (valorHora * horasTrabalhadas);
    }
};

int main() {
	setlocale(LC_ALL, "portuguese");
    int escolha;
    Funcionario* funcionario;

    do {
        cout << "\nMenu:\n";
        cout << "1. Funcionário Comissionado\n";
        cout << "2. Funcionário Horista\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                funcionario = new FuncionarioComissionado();
                break;
            case 2:
                funcionario = new FuncionarioHorista();
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }

        if (escolha != 0) {
            cout << "\nDigite o nome do funcionário: ";
            cin.ignore(); // Limpa o buffer para ler a linha completa
            getline(cin, funcionario->nome);

            cout << "Digite o salário base: R$";
            cin >> funcionario->salarioBase;

            if (dynamic_cast<FuncionarioComissionado*>(funcionario)) {
                double vendasMensais;
                double comissao;
                cout << "Digite a comissão (%): ";
                cin >> comissao;
                static_cast<FuncionarioComissionado*>(funcionario)->setComissao(comissao);
                cout << "Digite o valor das vendas mensais: R$";
                cin >> vendasMensais;
                static_cast<FuncionarioComissionado*>(funcionario)->setvendasMensais(vendasMensais);
            } else if (dynamic_cast<FuncionarioHorista*>(funcionario)) {
                double valorHora, horasTrabalhadas;
                cout << "Digite o valor da hora trabalhada: R$";
                cin >> valorHora;
                static_cast<FuncionarioHorista*>(funcionario)->setValorHora(valorHora);

                cout << "Digite as horas trabalhadas: ";
                cin >> horasTrabalhadas;
                static_cast<FuncionarioHorista*>(funcionario)->setHorasTrabalhadas(horasTrabalhadas);
            }

            double salarioFinal = funcionario->calcularSalarioFinal();
            cout << "\nSalário final do funcionário " << funcionario->nome << ": R$" << salarioFinal << endl;

            delete funcionario; // Liberar memória alocada dinamicamente
        }
    } while (escolha != 0);

    return 0;
}


