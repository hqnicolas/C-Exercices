#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    // Converter Ceusius em Fahrenheit: F = C * 9/5 + 32
    float fahrenheit = celsius * (9.0 / 5.0) + 32;

    cout << "A temperatura em Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}
