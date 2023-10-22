// Implementa una funcion intercambio de variables swap 
#include <iostream>
using namespace std; 

void swap(int &n1, int &n2, int resul[2]){
    int temp = 0;
    temp = n2;
    n2 = n1; 
    n1 = temp;
    resul[0] = n1;
    resul[1] = n2; 
}

void swap2(int &a1,int &a2){
    int temp = 0;
    temp = a1;
    a1 = a2;
    a2 = temp;

    cout<<a1<<a2<<endl;
}


int main(){
    int n1 = 10;
    int n2 = 20; 
    int resul[2];

    swap(n1,n2,resul);
    cout<<resul[0]<<endl;
    cout<<resul[1]<<endl;


    swap2(n1,n2);

    return 0;
}




