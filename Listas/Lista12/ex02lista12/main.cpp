#include <iostream>
#include <locale>
using namespace std;

/* Crie um programa que possua uma classe abstrata chamada Payment e
que possua uma função virtual pura processPayment( ) para
implementar diferentes formas de pagamento.
Requisitos:
a. Crie a classe base Payment com o método processPayment( ) (virtual puro);
b. Crie as classes derivadas CreditCardPayment,
PaypalPayment e BitcoinPayment que implementam (override) o método processPayment( );
c. No método principal, crie instâncias das classes derivadas e demonstre
a forma de pagamento de cada classe derivada */

class Payment  {
    public:
        virtual void processPayment() = 0;
         ~Payment() {}
};

class CreditCardPayment  : public Payment  {
    public:
        void processPayment() override {
            cout << "Pagamento em andamento com cartão de crédito." << endl;
         }
};

class PaypalPayment  : public Payment  {
    public:
        void processPayment() override {
            std::cout << "Processando pagamento com PayPal." << endl;
         }
 };

class BitcoinPayment  : public Payment  {
    public:
        void processPayment() override {
            std::cout << "Processando pagamento com Bitcoin." << endl;
         }
 };

int main()  {
    setlocale(LC_ALL, "portuguese");

    CreditCardPayment* creditCard = new CreditCardPayment();
    PaypalPayment* paypal = new PaypalPayment();
    BitcoinPayment* bitcoin = new BitcoinPayment();

    int opcao;
    
    do   {
        cout << "Escolha uma opção:" << endl;
        cout << "1 - Pagar com cartão de crédito" << endl;
        cout << "2 - Pagar com PayPal" << endl;
        cout << "3 - Pagar com Bitcoin" << endl;
        cout << "4 - Sair" << std::endl;

        cin >> opcao;

        switch(opcao)  {
            case 1:
                creditCard->processPayment();
                break;

            case 2:
                paypal->processPayment();
                break;

            case 3:
                bitcoin->processPayment();
                break;
         }
     } while (opcao != 4);

    delete creditCard;
    delete paypal;
    delete bitcoin;

    return 0;
}
