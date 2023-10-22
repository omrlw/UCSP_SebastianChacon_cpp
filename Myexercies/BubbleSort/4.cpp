#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Crear un vector de números
    vector<int> numeros = {1, 2, 3, 4, 5};

    // Mostrar el vector original
    cout << "Vector original: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Eliminar el tercer elemento (índice 2)
    numeros.erase(numeros.begin() + 2);

    // Mostrar el vector después de eliminar un elemento
    cout << "Vector después de eliminar el tercer elemento: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;



    // Mostrar el vector después de sumar dos elementos
    cout << "Vector después de sumar los elementos en el índice 1 y 2: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
