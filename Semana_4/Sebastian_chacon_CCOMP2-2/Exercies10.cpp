#include <iostream>
#include <cmath> // Necesario para la función sqrt
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // Los números negativos y 1 no son primos
    }

    // Verificar primos potenciales
    for(int i = 2; i <= numero; i++){ // Corrección aquí
        if (numero % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    long long limite = 2000000; // El límite superior para encontrar primos
    long long sumaPrimos = 0; // Inicializamos la suma en 0

    for (long long i = 2; i < limite; i++) {
        if (esPrimo(i)) {
            sumaPrimos += i; // Si es primo, lo sumamos a la suma
        }
    }

    cout << "La suma de todos los primos por debajo de " << limite << " es: " << sumaPrimos << endl;

    return 0;
}
