#include <iostream>
using namespace std;

// Función para calcular el máximo común divisor (MCD) usando el algoritmo de Euclides
long long calcularMCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Función para calcular el mínimo común múltiplo (LCM) de dos números
long long calcularLCM(long long a, long long b) {
    return (a * b) / calcularMCD(a, b);
}

int main() {
    long long lcm = 1; // Inicializamos el LCM en 1

    // Calcular el LCM para todos los números del 1 al 20
    for (int i = 2; i <= 20; i++) {
        lcm = calcularLCM(lcm, i);
    }

    cout << "El número más pequeño divisible por todos los números del 1 al 20 es: " << lcm << endl;

    return 0;
}
