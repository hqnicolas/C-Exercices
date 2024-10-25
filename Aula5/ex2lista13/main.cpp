#include <iostream>
#include <numeric>
#include <locale>

int sum_for(int number) {
    int sum_internal = 0;
    for (int i = 1; i <= number; ++i) {
        sum_internal += i;
    }
    return sum_internal;
}

int sum_accumulate(int number) {
    int arr[number];
    for (int i = 0; i < number; ++i) {
        arr[i] = i + 1;
    }
    int sum = std::accumulate(arr, arr + number, 0); // Using pointer arithmetic instead of std::begin and std::end
    return sum;
}

int sum_formula(int number) {
    return number * (number + 1) / 2;
}

int main() {
    setlocale(LC_ALL, "português");
    
    int internal_number;
    std::cout << "Digite um número: ";
    std::cin >> internal_number;

    std::cout << "Soma de valores (com for): " << sum_for(internal_number) << std::endl;
    std::cout << "Soma de valores (com acumulação): " << sum_accumulate(internal_number) << std::endl;
    std::cout << "Soma de valores (com fórmula): " << sum_formula(internal_number) << std::endl;

    return 0;
}

