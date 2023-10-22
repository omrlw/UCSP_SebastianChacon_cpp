#include <iostream>
using namespace std;

int main() {
    double pesoEnLibras, alturaEnPulgadas;

    cout << "Ingresa tu peso en libras: ";cin >> pesoEnLibras;
    cout << "Ingresa tu altura en pulgadas: ";cin >> alturaEnPulgadas;

    // Calcular el IMC (IMC = peso en kg / (altura en m)^2)

    double pesoEnKg = pesoEnLibras * 0.453592;
    double alturaEnMetros = alturaEnPulgadas * 0.0254;
    double imc = pesoEnKg / (alturaEnMetros * alturaEnMetros);


    cout << "Tu IMC es: " << imc << endl;

    cout << "IMC:" << endl;
    cout << "Bajo peso: Menos de 18.5" << endl;
    cout << "Peso normal: 18.5 - 24.9" << endl;
    cout << "Sobrepeso: 25 - 29.9" << endl;
    cout << "Obesidad - Clase I: 30 - 34.9" << endl;
    cout << "Obesidad - Clase II: 35 - 39.9" << endl;
    cout << "Obesidad - Clase III: 40 o más" << endl;

    return 0;
}
