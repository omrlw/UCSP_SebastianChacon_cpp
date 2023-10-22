#include <iostream>
using namespace std;


//Impresion recursiva


void sumaRecursiva(int arr[], int tam, int i = 0 ){
    int s{0};
    s += arr[i];

    if (tam == 0){
        return;
    }

    sumaRecursiva(arr, tam - 1, i++ );

}



void imprimirRecursiva(int arr[], int tam, int i = 0){
    
    if(tam == 0){
        return;
    }

    cout<<arr[i]<<" ";
    sumaRecursiva(arr, tam - 1, ++i);
    imprimirRecursiva(arr, tam - 1, ++i);

} 

int main(){
    
    int a[]={1,2,3};
    int n = 3;

    imprimirRecursiva(a,n);

    return 0;
}