#include <iostream>

using namespace std;

void voltear(int arr[], int t, int i = 0) {
    if (i == t / 2) {
        return; // Caso base: hemos invertido la mitad del arreglo
    }

    // Intercambia los elementos en las posiciones i y t - 1 - i
    int temp = arr[i];
    arr[i] = arr[t - 1 - i];
    arr[t - 1 - i] = temp;
    
    // Llama recursivamente a la función para el siguiente par de elementos
    voltear(arr, t, i + 1);
}

int main() {
    int a[] = {4, 3, 7, 1, 1};
    int t = 5;

    voltear(a, t);

    for (int i = 0; i < t; i++) {
        cout << a[i];
    }
    cout << endl;

    return 0;
}
