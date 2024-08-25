#include <iostream>
#include <locale>

/*
Considere a seguinte situação: Uma conta bancária possui um saldo eum limite.
O valor máximo que o usuário da conta pode sacar é a somado limite com o saldo.
Crie uma função chamada sacar que recebe como parâmetro um valor e debite do saldo o valor solicitado.
*/

using namespace std;


	
void sacar(float& saldo, float limite, float valor_sacado) {
    if (valor_sacado <= (saldo + limite)) {
        saldo -= valor_sacado;
        cout << "Saque realizado com sucesso! Novo saldo: R$" << saldo << endl;
    } else {
        cout << "Saldo insuficiente!" << endl;
    }
}
int main() {
	setlocale(LC_ALL, "portuguese");
	float saldo;
    float limite;
    float valor_sacado;
    
	cout << "Digite o saldo da conta: ";
    cin >> saldo;
    cout << "Digite o Limite: ";
    cin >> limite;
    cout << "Digite o valor a ser sacado: R$";
    cin >> valor_sacado;

    sacar(saldo, limite, valor_sacado); 

    return 0;
}
