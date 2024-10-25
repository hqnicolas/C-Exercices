#include <iostream>

int fibonacci_for(int numero) {
   if (numero <= 1) {
       return numero;
   }
   int a = 1, b = 1;

   for (int i = 3; i <= numero; ++i) {
       int c = a + b;
       a = b;
       b = c;
   }
   return b;
}

int main() {
   int numero;

   std::cout << "Informe um número: ";
   std::cin >> numero;

   if (numero < 0) {
       std::cerr << "Erro: Número inválido. Informe um número não negativo." << std::endl;
       return 1;
   }

   std::cout << "O " << numero << "-ésimo número da sequência de Fibonacci é: " << fibonacci_for(numero) << std::endl;

   return 0;
}

