#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
#include <string>
#include <locale>
using namespace std;

/* 
Crie uma classe DataHora que implemente a combinação de data e hora, com sobrecarga dos construtores:
Um construtor que inicializa a data e hora com valores passados pelo usuário;
Um construtor que inicializa apenas a data, definindo a hora como meia-noite (00:00:00);
Um construtor que inicializa apenas a hora, definindo a data como 1º de janeiro de 1970;
Um construtor padrão;
Adicione um método para exibir a data e hora;
Crie um objeto para cada tipo de construtor;
*/

void corte() {
 	int width = 50;
    string line(width, '=');
    cout << line << endl;
}

class DataHora {
private:
    int dia, mes, ano, hora, minuto, segundo;
public:
    DataHora(int d, int m, int a, int h, int min, int s)  {
        dia = d;
        mes = m;
        ano = a;
        hora = h;
        minuto = min;
        segundo = s;
    }

    DataHora(int d, int m, int a)  {
        dia = d;
        mes = m;
        ano = a;
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    DataHora() {
        dia = 1;
        mes = 1;
        ano = 1970;
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    void exibirDataHora() {
        cout << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Ano: " << ano << endl;
        cout << "Hora: " << hora << ":" << minuto << ":" << segundo << endl;
    }
};
    
int main() {
    setlocale(LC_ALL, "portuguese");
    DataHora dataHora1(20, 4, 2023, 16, 59, 59);
    DataHora dataHora2(7, 8, 2022);
    DataHora dataHora3(9, 10, 10);
    DataHora dataHora4;
	corte();
    cout << "Data e Hora 1:" << endl;
    dataHora1.exibirDataHora();
    corte();
    cout << "Data e Hora 2:" << endl;
    dataHora2.exibirDataHora();
    corte();
    cout << "Data e Hora 3:" << endl;
    dataHora3.exibirDataHora();
    corte();
    cout << "Data e Hora 4:" << endl;
    dataHora4.exibirDataHora();
    corte();
    
    return 0;
}



