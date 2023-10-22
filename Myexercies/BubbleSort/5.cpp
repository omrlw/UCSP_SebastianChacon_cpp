#include <iostream>

bool esPotenciaDeDos(int numero) {
    if (numero <= 0) {
        return false;
    }

    // Utilizamos el operador de bitwise AND (&) para verificar si solo hay un bit establecido.
    // Si solo hay un bit establecido, entonces el número es una potencia de dos.
    return (numero & (numero - 1)) == 0;
}

int main() {
    int num;

    std::cout << "Ingrese un número: ";
    std::cin >> num;

    if (esPotenciaDeDos(num)) {
        std::cout << num << " es una potencia de dos." << std::endl;
    } else {
        std::cout << num << " no es una potencia de dos." << std::endl;
    }

    return 0;
}
