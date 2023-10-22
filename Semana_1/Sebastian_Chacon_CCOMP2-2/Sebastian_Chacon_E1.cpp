#include <iostream>
using namespace std;

int main() {
	int radio = 0;
    float pi = 3.1416;
	cout << "Ingrese el radio de la circunferencia: "; cin >> radio;
    cout << "El diametro del circulo es: "<< radio * 2 <<endl;
    cout << "La circunferencia del circulo es: "<< 2 * pi * radio <<endl;
    cout << "El area del circulo es:  " << pi * (radio * radio);

	return 0;
}