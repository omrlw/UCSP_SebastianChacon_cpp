//
// Created by Omar Chacon on 14/09/23.
//


//Ejercicio 1
//Mutiplies of 3 or 5

#include <iostream>
using namespace std;

int main(){
    // Multiplos requeridos
    int mul1 = 3, mul2 = 5, count = 0;

    // Iteramos hasta 1000 que es el numero maximo requerido
    for (int i = 0; i < 1000; i++) {
        // Verificamos que sean multiplos
        if (i % mul1 == 0 || i % mul2 == 0) {
            //Si es multiplo sumammos el multiplo al contador
            count += i;
        }
    }
    // Imprimos el ultimo multiplo asignado
    cout<<count<<endl;
//    cout<<i;
    return 0;
}