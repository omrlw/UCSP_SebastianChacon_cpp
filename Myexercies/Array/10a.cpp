//Suma

#include <iostream>

using namespace std;


int suma(int a[], int n){
    int sal{0};
    cout<<"Ingresa sal 4:";
    for (int i{0}; i < n; i++){
        cin>>a[i];
        sal += a[i];
    }
    return sal;

};

int main(){
    int a[] = {1,2,3};
    cout<<suma(a, 3)<<endl;

}

//Metodo similar pero el for mas corto

// int sumar(const int array[], const int tam) { 
//     long sum = 0;
//     for(int i = 0; i < tam; sum += array[i++]); 
//     return sum;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     cout << "Suma de elementos: " << sumar(arr, 7) << endl; 
//     return 0;
// }
