// a^n = recursivo
#include <iostream>
using namespace std;

int rec(int a, int n , int m){
    if ( n == 1){  //iteramos sobre a
        return a;
    }
    m = n/2;
    return rec(a,m,m) * rec(a,n - m, m);
                  
}

int main(){
    cout<<rec(2,3,0)<<endl;

}