// Arreglos y Cadenas 
// Punteros 
// Los arreglos estan almacenados secuencialmente en memoria 
// EL Arreglo es estatico, por lo tanto nunca cambia de valor


#include <iostream>

using namespace std; 

int main(){
    // Declarando un arreglo de enteros de 4 elementos 
    int arr[4];
    
    // Inicializando los elementos del arreglo 
    arr[0] = 6; 
    arr[1] = 2; 
    arr[2] = 1;  
    arr[3] = 5; 

    // Imprimiendo las variables del array
    cout<<"Indice 0 resultado: "<<arr[0]<<endl;
    cout<<"Indice 1 resultado: "<<arr[1]<<endl;
    cout<<"Indice 2 resultado: "<<arr[2]<<endl;
    cout<<"Indice 3 resultado: "<<arr[3]<<endl;


    int array2[4]= {5,3,1,2};
    
    cout<<array2[2]<<endl;

    int array3[]= {5,3,1,2,2,3,1,3,3};
    
    cout<<array3[8]<<endl;


    return 0;
}  








