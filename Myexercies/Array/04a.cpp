#include <iostream>

using namespace std;

int main() {
    int arr[4];

    cout << "Por favor ingrese 4 valores enteros:" << endl;

    //Almacenando datos array iteradas veces 
    for(int i=0;i<4;i++){
        cin >> arr[i]; //Almacenamos el valor ingresado por el usuario a el arr[i] donde i es un contador
    }
    cout << "Los valores en el arreglo son:"; 

    //Imprimiendo datos array iteradas veces 
    for(int i=0;i<4;i++){
        cout << " " << arr[i]; // Spacio y imprimos iteradas veces
    }
    return 0;



}