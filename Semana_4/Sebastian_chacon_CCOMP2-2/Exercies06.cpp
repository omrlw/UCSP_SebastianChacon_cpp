#include <iostream>
#include <cmath>

using namespace std;

int SquareNatural(int a){
    // Sumando los cuadrados, de los 100 numeros -> 1² + 2² +3³ |100 Σ(i=0) i^2 |
    int aux = 0;
    for(int i = 0; i<=a; i++){
        aux = aux + i*i;
    }
    return aux;
}

int SquareSumNatural(int a){
    //Sumando los 100 numeros y elevando al la suma al cuadrado -> (1 + 2 ...)^2 |100Σ(i=0) i|^2 
    int aux = 0;
    aux = (a * (a+1) /2) * (a * (a+1) /2); 

    return aux;

}


int main(){
    //Asignando la variable n a las funciones y calculando su diferencia
    int n = 100;
    cout<<"la diferencia entre la suma de los cuadrados de los primeros 100 números naturales y el cuadrado de la suma es:"
    <<endl<<SquareSumNatural(n) - SquareNatural(n);


}