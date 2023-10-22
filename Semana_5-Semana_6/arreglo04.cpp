#include <iostream>
using namespace std;


void intercambio( int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

void invertir(int arr[], const int tam){
    for(int i = 0; i < tam/2; i++){
        intercambio(arr[i], arr[tam - i - 1]);
    }
}

void invertirRec(int arr[], const int tam, int i = 0){
    if(i < tam/2){
        intercambio(arr[i], arr[tam - i - 1]);
        invertirRec(arr, tam, i + 1);
    }
}


int main(){
    const int tam = 5;
    int arr[tam] = {1,2,3,4,5};

}