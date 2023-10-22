#include <iostream>
using namespace std;


int sumawhile(int a[], int n ){
    int cont{0}, suma{0};
    while(cont < n){
        suma += a[cont];
        cont++;
    }
    return suma;
}

int main(){
    int a[] = {5,3,4};
    cout<<"la suma es: "<< sumawhile(a,3);
    

    return 0;
}





