#include <iostream>
using namespace std;
    

int PrimeTest(int prime){
    // Variable axiliar verificara si es primo o no
    int aux = 0 ;
    // Bucle test prime
    for(int i = 2; i < prime; i++){
        if (prime % i == 0){
            // Si no es primo, retorna 0
            return aux;
        }
    }
    //Retorna la misma variable ingresada
    aux = prime;
    return aux;
}
int main(){
    int result, cont = 0;
    int indiceBuscado = 10001;
    int i = 2;

    while (cont < indiceBuscado){
        result = PrimeTest(i); // Llama a la función PrimeTest para verificar si i es primo y almacena el resultado en result
        if (result == i){ // Comprueba si result es igual a i, lo que indica que i es un número primo
            cont++;
            if (cont == indiceBuscado){ // Si el contador alcanza el índice deseado, significa que encontramos el número primo deseado
                cout << "El número primo en el índice " << indiceBuscado << " es: " << result;
            }
        }
        i++; //Incrementa i para continuar buscando el siguiente número
    }
    return 0;
}