#include <iostream>
#include <clocale>

using namespace std;

int fatorial_for(int n) { 
   int resultado = 1;
   for (int i = 1; i <= n; ++i) {
       resultado = resultado * i;
   }
   return resultado;
}

int fatorial_rec(int n) { 
   if(n == 1 || n == 0){  // base case
       return 1;
   } else {
       return n * fatorial_rec(n - 1); 
   }
}

int main() {
   setlocale(LC_ALL, "portuguese");
   
   int num;
   cout << "Digite um número para calcular o fatorial: ";
   cin >> num;
   
   cout << "Fator (com for) de " << num << " : " << fatorial_for(num) << endl;
   cout << "Fator (com recursão) de " << num << " : " << fatorial_rec(num) << endl;
   
   return 0;
}

