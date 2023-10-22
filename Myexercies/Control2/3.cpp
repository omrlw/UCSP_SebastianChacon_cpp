//Voltea una cadena por recursividad y por iteracion! 
#include <iostream>
using namespace std;

    
void vI(int a[] , int t ){
    int s[t];
    for (int i = 0; i < t; i++)
    {
        s[i] = a[t-i-1];
        cout<<s[i]; 
    }

}



void printS(int a[]){
    for( int i = 0 ; i < 5; i++){
        cout<<a[i];
    }
}



void vR(int a[], const int t, int i = 0){
    int s[t];

    if (i >= t){
        return;
    }

    s[i] = a[i];
    vR(a, t, i+1);
    printS(s);

}


int main(){
    int a[] = {1,2,3,4,5};
    const int t = 5;
    // vI(a,t);
    vR(a,t);

}