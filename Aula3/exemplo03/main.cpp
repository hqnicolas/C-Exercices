#include <iostream>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Laço for para impressão da matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        // Itera sobre as linhas
        // Itera sobre as colunas
        std::cout << std::endl;
    }
    return 0;
}
