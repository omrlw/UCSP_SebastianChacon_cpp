#include <iostream>
using namespace std;

// void FibonacchiRecursivo(int a, int b, int i){
//     if (i == 10){
//         return;
//     };
  
//     cout<<a<<endl;
//     FibonacchiRecursivo(b , b + a , i + 1);

// }
// int main(){

//     FibonacchiRecursivo(0,1,1);

//     return 0;
// }

int fiboR(int n){

    if (n == 0){
        return 1;
    }
    if (n == 1){
        return 1;
    }

    return fiboR(n-1)+ fiboR(n-2);
}

int fiboI(int n ){
    int a = 1, b = 1, c = 0;
    while(n >= 0){
        a = b;
        b = c;
        c = a + b;
        n--;
    }
    return c;
}

int main(){
    cout<<fiboR(5)<<endl;
    cout<<fiboI(4)<<endl;
    return 0;
}







