
//Ejercicio 3 
//Primos que no generen residuo para el numero 600851475143 

#include <iostream>
using namespace std;

//Evaluando si el numero es primo 
bool PrimeTest(long long prime){
   
    for(int i = 2; i < prime; i++){
        if (prime % i == 0){
            return false;
        }
    }
    return true;
}

void out(int n){
    if (PrimeTest(n)){
        cout << n << endl;
        }
    }


int main(){
    long long n = 600851475143;
    for ( int i = 2; i <= n ; i ++){
        if (n % i == 0){    
            out(i);
        }
    }
    return 0;
}
