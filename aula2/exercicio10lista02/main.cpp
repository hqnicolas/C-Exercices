#include <iostream>
#include <locale>

/* 
10 - As Organizações Tabajara resolveram dar um aumento de salário aos seus 
colaboradores e lhe contrataram para desenvolver o programa que calculará os 
reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste 
segundo o seguinte critério, baseado no salário atual:
• salários até R$ 280,00 (incluindo): aumento de 20%
• salários entre R$ 280,00 e R$ 700,00: aumento de 15%
• salários entre R$ 700,00 e R$ 1500,00: aumento de 10%
• salários de R$ 1500,00 em diante: aumento de 5%
Após o aumento ser realizado, informe na tela:
• o salário antes do reajuste;
• o percentual de aumento aplicado;
• o valor do aumento;
• o novo salário, após o aumento
 */


#include <iostream>
#include <iomanip>
#include <locale>

// Função principal
int main(int argc, char** argv) {
   // Configurando o ambiente locale para a língua portuguesa
   std::setlocale(LC_ALL, "portuguese");

   float salario;
   std::cout << "Digite o salário do colaborador: ";
   std::cin >> salario;

   float aumento;

   if (salario <= 280.00f) {
       aumento = salario * 0.20f;
       std::cout << "Salário até R$ 280,00:" << std::endl;
       std::cout << "Aumento de 20% para os salários até R$ 280,00" << std::endl;
   } else if (salario >= 280.01f && salario <= 700.00f) {
       aumento = salario * 0.15f;
       std::cout << "Salário entre R$ 280,00 e R$ 700,00:" << std::endl;
       std::cout << "Aumento de 15% para os salários entre R$ 280,00 e R$ 700,00" << std::endl;
   } else if (salario >= 700.01f && salario <= 1500.00f) {
       aumento = salario * 0.10f;
       std::cout << "Salário entre R$ 700,00 e R$ 1500,00:" << std::endl;
       std::cout << "Aumento de 10% para os salários entre R$ 700,00 e R$ 1500,00" << std::endl;
   } else {
       aumento = salario * 0.05f;
       std::cout << "Salário acima de R$ 1500,00:" << std::endl;
       std::cout << "Aumento de 5% para os salários acima de R$ 1500,00" << std::endl;
   }

   float novosalario = salario + aumento;
   std::cout << std::fixed << std::setprecision(2);
   system("PAUSE");
   std::cout << "Salário antes do reajuste: R$" << salario << std::endl;
   system("PAUSE");
   std::cout << "Percentual de aumento aplicado: " << (aumento / salario * 100) << "%" << std::endl;
   system("PAUSE");
   std::cout << "Valor do aumento: R$" << aumento << std::endl;
   system("PAUSE");
   std::cout << "Novo salário, após o aumento: R$" << novosalario << std::endl;
   system("PAUSE");

   return 0;
}


