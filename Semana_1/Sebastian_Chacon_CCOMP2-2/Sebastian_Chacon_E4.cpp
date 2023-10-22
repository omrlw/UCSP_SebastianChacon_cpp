#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5;

    cout << "Ingrese el primer numero: ";cin >> n1;

    cout << "Ingrese el segundo numero: ";cin >> n2;

    cout << "Ingrese el tercer numero: ";cin >> n3;

    cout << "Ingrese el cuarto numero: ";cin >> n4;

    cout << "Ingrese el quinto numero: ";cin >> n5;

    int masGrande = n1;
    int masPequeno = n1;

    if (n2 > masGrande) {
        masGrande = n2;
    } else if (n2 < masPequeno) {
        masPequeno = n2;
    }

    if (n3 > masGrande) {
        masGrande = n3;
    } else if (n3 < masPequeno) {
        masPequeno = n3;
    }

    if (n4 > masGrande) {
        masGrande = n4;
    } else if (n4 < masPequeno) {
        masPequeno = n4;
    }

    if (n5 > masGrande) {
        masGrande = n5;
    } else if (n5 < masPequeno) {
        masPequeno = n5;
    }

    cout << "El entero más grande es: " << masGrande << endl;
    cout << "El entero más pequeño es: " << masPequeno << endl;

    return 0;
}
