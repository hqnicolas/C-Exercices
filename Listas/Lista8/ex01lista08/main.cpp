#include <iostream>
#include <string>
#include <locale>

/*  Crie uma classe chamada de cidadesBrasil que permita inserir atributos como nome, data de fundação,
número de habitantes e número de eleitores. Crie as funções para entrada e saída de dados. */

using namespace std;

class CidadesBrasil {
    private:
        std::string nome;
        int dataFundacao;
        int numeroHabitantes;
        int numeroEleitores;

    public:
        CidadesBrasil(std::string nome, int dataFundacao, int numeroHabitantes, int numeroEleitores) :
            nome(nome), dataFundacao(dataFundacao), numeroHabitantes(numeroHabitantes), numeroEleitores(numeroEleitores) {}

        const std::string getNome() const {
            return nome;
        }

        void setNome(const std::string& n) {
            if (!n.empty()) {
                nome = n;
            }
        }

        int getDataFundacao() const {
            return dataFundacao;
        }

        void setDataFundacao(int d) {
            if (d > 0) {
                dataFundacao = d;
            }
        }

        int getNumeroHabitantes() const {
            return numeroHabitantes;
        }

        void setNumeroHabitantes(int n) {
            if (n >= 0) {
                numeroHabitantes = n;
            }
        }

        int getNumeroEleitores() const {
            return numeroEleitores;
        }

        void setNumeroEleitores(int e) {
            if (e >= 0) {
                numeroEleitores = e;
            }
        }
};

int main() {
	setlocale(LC_ALL, "portuguese");
    std::string nomeCidade;
    int dataFundacao;
    int numeroHabitantes;
    int numeroEleitores;

    cout << "Digite o nome da cidade: ";
    getline(cin, nomeCidade);

    cout << "Digite a data de fundação da cidade: ";
    cin >> dataFundacao;

    cout << "Digite o número de habitantes na cidade: ";
    cin >> numeroHabitantes;

    cout << "Digite o número de eleitores na cidade: ";
    cin >> numeroEleitores;

    CidadesBrasil cidade1(nomeCidade, dataFundacao, numeroHabitantes, numeroEleitores);
    cout << "Nome: " << cidade1.getNome() << endl;
    cout << "Data de Fundação: " << cidade1.getDataFundacao() << endl;
    cout << "Número de Habitantes: " << cidade1.getNumeroHabitantes() << endl;
    cout << "Número de Eleitores: " << cidade1.getNumeroEleitores() << endl;

    return 0;
}

