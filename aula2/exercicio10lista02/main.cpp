#include <iostream>
#include <locale>

/* 
10 - As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus 
colaboradores e lhe contrataram para desenvolver o programa que calcular� os 
reajustes.
Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste 
segundo o seguinte crit�rio, baseado no sal�rio atual:
� sal�rios at� R$ 280,00 (incluindo): aumento de 20%
� sal�rios entre R$ 280,00 e R$ 700,00: aumento de 15%
� sal�rios entre R$ 700,00 e R$ 1500,00: aumento de 10%
� sal�rios de R$ 1500,00 em diante: aumento de 5%
Ap�s o aumento ser realizado, informe na tela:
� o sal�rio antes do reajuste;
� o percentual de aumento aplicado;
� o valor do aumento;
� o novo sal�rio, ap�s o aumento
 */


#include <iostream>
#include <iomanip>
#include <locale>

// Fun��o principal
int main(int argc, char** argv) {
   // Configurando o ambiente locale para a l�ngua portuguesa
   std::setlocale(LC_ALL, "portuguese");

   float salario;
   std::cout << "Digite o sal�rio do colaborador: ";
   std::cin >> salario;

   float aumento;

   if (salario <= 280.00f) {
       aumento = salario * 0.20f;
       std::cout << "Sal�rio at� R$ 280,00:" << std::endl;
       std::cout << "Aumento de 20% para os sal�rios at� R$ 280,00" << std::endl;
   } else if (salario >= 280.01f && salario <= 700.00f) {
       aumento = salario * 0.15f;
       std::cout << "Sal�rio entre R$ 280,00 e R$ 700,00:" << std::endl;
       std::cout << "Aumento de 15% para os sal�rios entre R$ 280,00 e R$ 700,00" << std::endl;
   } else if (salario >= 700.01f && salario <= 1500.00f) {
       aumento = salario * 0.10f;
       std::cout << "Sal�rio entre R$ 700,00 e R$ 1500,00:" << std::endl;
       std::cout << "Aumento de 10% para os sal�rios entre R$ 700,00 e R$ 1500,00" << std::endl;
   } else {
       aumento = salario * 0.05f;
       std::cout << "Sal�rio acima de R$ 1500,00:" << std::endl;
       std::cout << "Aumento de 5% para os sal�rios acima de R$ 1500,00" << std::endl;
   }

   float novosalario = salario + aumento;
   std::cout << std::fixed << std::setprecision(2);
   system("PAUSE");
   std::cout << "Sal�rio antes do reajuste: R$" << salario << std::endl;
   system("PAUSE");
   std::cout << "Percentual de aumento aplicado: " << (aumento / salario * 100) << "%" << std::endl;
   system("PAUSE");
   std::cout << "Valor do aumento: R$" << aumento << std::endl;
   system("PAUSE");
   std::cout << "Novo sal�rio, ap�s o aumento: R$" << novosalario << std::endl;
   system("PAUSE");

   return 0;
}


