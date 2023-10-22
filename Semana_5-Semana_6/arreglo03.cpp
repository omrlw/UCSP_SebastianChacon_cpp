#include <iostream>
using namespace std;

// Examen !!!!

// ----------------------------------------------------------------------------------------------------------------------------

long sumarwhile(const int arr[], const int tam){
    long sum = 0;
    int i = 0;
    while( i < tam){
        sum += arr[i++];
    }
    return sum;

}

void print( const int arr[], const int tam){
    cout<<"los elementos"<<endl; 

}

int main(){
    const int tam = 4; 
    int arr[tam] = {1,2,3,4};

    cout<<"La suma es: "<<endl;

}

// ----------------------------------------------------------------------------------------------------------------------------





// int main(){
//     const size_t arraySize{11};
//     array<unsigned int, arraySize > n{0,0,0,0,1,2,3,4};

//     cout<<" Grade distribution "<<endl;

//     for (size_t i{0};)






// }




// long sumarWhile(const int arr[], const int tam){
//     long sum = 0;
//     int i = 0;
//     while( i < tam){
//         sum += arr[i++];
//     }
//     return sum;
// }



// void imprimir(const int arr[], const int tam){
//     cout<<"Los elementos del arreglos son: ";

//     for(int i = 0; i < tam; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<" ]"<<endl;

// };



// long sumarREcursiva(const int arr[], const int tam){
//     if(tam == 0){
//         return 0;
//     }
//     return arr[tam - 1] + sumarREcursiva(arr, tam - 1);
// }

// void imprimirRecursiva(const int arr[], const int tam, int i = 0){
//     if(tam == 0){
//         return;
//     }

//     cout<<arr[i]<<" ";
//     imprimirRecursiva(arr, tam - 1, ++i);

// // Recursividad este al final 

// }

// int main(){
//     const int tam = 4;
//     int arr[tam] = {1,2,3,4};

//     cout<<"La suma es: "<<sumarREcursiva(arr, tam)<<endl;

//     imprimirRecursiva(arr, tam);

// }


