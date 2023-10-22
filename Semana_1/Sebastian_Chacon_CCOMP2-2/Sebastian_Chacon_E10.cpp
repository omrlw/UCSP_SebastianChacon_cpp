#include <iostream>
using namespace std;

int main() {

    cout << "Longitud de Cara (cm)  Area Superficie (cm2)  Volumen (cm3)" << endl;

    // Iterar a través de longitudes de cara de 0 a 4 cm
    for (int longitudCara = 0; longitudCara <= 4; longitudCara++) {
        // Calcular área de superficie y volumen
        int areaSuperficie = 6 * longitudCara * longitudCara;
        int volumen = longitudCara * longitudCara * longitudCara;

        cout << longitudCara << "                    " << areaSuperficie << "                     " << volumen << endl;
    }

    return 0;
}
