#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingresa tu edad: ";cin >> edad;

    int mhr1 = 220 - edad;
    int mhr2 = 208 - 0.7 * edad;
    int mhr3 = 207 - 0.7 * edad;
    int mhr4 = 211 - 0.64 * edad;

    cout << "Valores sugeridos de MHR:" << endl;
    cout << "MHR1 (220 - edad): " << mhr1 << endl;
    cout << "MHR2 (208 - 0.7 * edad): " << mhr2 << endl;
    cout << "MHR3 (207 - 0.7 * edad): " << mhr3 << endl;
    cout << "MHR4 (211 - 0.64 * edad): " << mhr4 << endl;

    // Encuentra el valor mínimo y máximo de MHR
    int mhrMinimo = min(min(mhr1, mhr2), min(mhr3, mhr4));
    int mhrMaximo = max(max(mhr1, mhr2), max(mhr3, mhr4));

    // Muestra el rango sugerido de MHR
    cout << "Rango sugerido de MHR: " << mhrMinimo << " - " << mhrMaximo << endl;

    return 0;
}
