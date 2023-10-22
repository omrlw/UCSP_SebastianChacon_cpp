#include <iostream>
using namespace std;

int main() {
    char letra;
    int ascii;

    cout << "Ingrese una letra : "; cin >> letra;
    ascii = static_cast<int>(letra);
    cout << "El valor ascii de " << letra << " es: " << ascii;

    return 0;
}
