#include <iostream>

/* 
6 - Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.
 */

#include <iostream>

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            std::cout << i << " " << std::endl;
        }
    }
    return 0;
}
