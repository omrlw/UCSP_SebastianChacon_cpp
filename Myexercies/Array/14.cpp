#include <iostream>
using namespace std;


//Impresion recursiva


void sumaRecursiva(int arr[], int tam, int i = 0 , int s = 0 ){

    if (tam == 0){
        cout<<"El tamaño es "<<s<<endl;
        return;
    }

    sumaRecursiva(arr, tam - 1, i++,  s += arr[i] ); 

}

int main(){
    
    int a[]={1,2,3};
    int n = 3;

    sumaRecursiva(a,n);

    return 0;
}