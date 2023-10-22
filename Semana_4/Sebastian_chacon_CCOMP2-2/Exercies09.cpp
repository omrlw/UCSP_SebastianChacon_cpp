#include <iostream>
using namespace std;

int main() {
    int objetivo = 1000; // Definimos el valor de a + b + c que estamos buscando

    for (int a = 1; a < objetivo; a++) {
        for (int b = 1 ; b < objetivo; b++) {
            int c = objetivo - a - b; // Calculamos c de manera que a + b + c sea igual al objetivo

            // Verificamos si a^2 + b^2 es igual a c^2, cumpliendo la condición pitagórica
            if (a * a + b * b == c * c) {
                int producto = a * b * c; // Calculamos el producto abc
                cout << "El producto abc es: " << producto << endl;
                cout << "El triplete pitagórico es: " << a << ", " << b << ", " << c << endl;
                return 0; 
            }
        }
    }
    return 0;
}



// a^2 + b^2 = c^2

// En este caso:

// a = 200
// b = 375
// c = 425
// Si calculamos:

// 200^2 + 375^2 = 40000 + 140625 = 180625
// 425^2 = 180625