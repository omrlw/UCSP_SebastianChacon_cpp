#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un entero de cuatro digitos: ";cin >> numero;

    if (numero >= 1000 && numero <= 9999) {
        // Extrae e imprime los dígitos en orden inverso
        int miles = numero / 1000;
        int centenas = (numero % 1000) / 100;
        int decenas = (numero % 100) / 10;
        int unidades = numero % 10;

        cout << "Digitos en orden inverso: " << unidades << "  " << decenas << "  " << centenas << "  " << miles << endl;
    } else {
        cout << "Ingrese un entero valido" << endl;
    }

    return 0;
}
