//Factorial 
#include <iostream>
using namespace std;

int Fact(int n){
    if (n == 0){
        return 1;
    }
    else {
        n = n * Fact(n-1);
    }

    return n;

}

int main(){
    cout<<Fact(4)<<endl;
    return 0;
}