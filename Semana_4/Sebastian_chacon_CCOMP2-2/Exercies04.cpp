#include <iostream>
using namespace std;

// Function to check if a number is a palindrome


int isPalin(int n){
    int s = 0;
    while (n > 0){
        s = s + n % 10 ;
        s = s * 10 ;
        n = n / 10;
    }
    return s / 10;
}

bool out(int n ){
    if (n == isPalin(n)){
        return true;
    }
    return false;

}


int main(){
    int n = 0;
    for ( int i = 0; i<= 999 ; i++){
         for ( int b = 0; b<= 999 ; b++){
            n = i * b; 
            if (out(n)){
                cout<<n<<"  Es palindromo mas grande de 3 digitos"<<endl;
            }
        }
    }
}