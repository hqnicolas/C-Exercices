#include <iostream>

int main() {

  int matriz[3][3], transposta[3][3];

  // Input da matriz

  std::cout << "Digite os elementos de uma matriz 3x3:" << std::endl;

  for (int i = 0; i < 3; ++i) {

    for (int j = 0; j < 3; ++j) {

      std::cin >> matriz[i][j];

    }

  }

  // Cálculo da transposta

  for (int i = 0; i < 3; ++i) {

    for (int j = 0; j < 3; ++j) {

      transposta[j][i] = matriz[i][j];

    }

  }

  // Output da transposta

  std::cout << "Matriz transposta:" << std::endl;

  for (int i = 0; i < 3; ++i) {

    for (int j = 0; j < 3; ++j) {

      std::cout << transposta[i][j] << " ";

    }

    std::cout << std::endl;

  }

  return 0;

}

