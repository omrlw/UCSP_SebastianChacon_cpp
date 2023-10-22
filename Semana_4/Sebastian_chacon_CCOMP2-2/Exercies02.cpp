
//Ejercicio 2 Fibonacchi



#include <iostream>
using namespace std;
int main(){
    //Inicializando los tres primeros índices de fibonacchi, a0, b1 , c1 (donde c es la suma de los 2 anteriores)
    int a = 0 , b = 1 , c = 0, cont = 0;
    //Iteramos hasta que la progresion de fibonacchi no exceda los 4 millones
    while (c < 4000000){
        c = a + b; // C es la suma de a + b
        a = b; // Para que a adelante un indice, igualamos la posicion siguiente que le corresponde a b 
        b = c; // Para que b adelante un indice, igualamos a indice siguiente que es la suma de a + b
        
        //Si el numero de fibonacchi es par lo guardamos en un contador
        if (c % 2 == 0){
            cont += c;
        }    
    }
    //rpta
    cout << cont <<endl;

    return 0;
}