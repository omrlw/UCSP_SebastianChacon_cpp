#include <iostream>
using namespace std;


void imprimir(const int arr[], const int tam){
    cout<<"Los elementos del arreglos son: [";

    for(int i = 0; i < tam; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ]"<<endl;

};

int main(){
    int a[]={1,2,34};
    int n = 3;

    imprimir(a,n);



    return 0;
}