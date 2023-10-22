#include <iostream>

using namespace std;

//Invertir elementos de un arreglo recursivo con funciones

void invertir(int ao[],int ai[], int n){

    for (int i = 0; i < n; i++)
    {
        ai[i] = ao[4-i];
    }
    
    for(int i{0}; i < n; i++){
        cout<<ai[i];
    }

}

int main(){
    int ao[] = {1,2,3,4,5};   
    int ai[5];
    
    invertir(ao,ai,5);

    return 0;
}