#include <iostream>

using namespace std;

int fn(int n){
    int contador = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            for (int c = j; c <= n; c++)
            {
                contador = contador + 1;
            }
        }
    }
    
    return contador;

}


int main(){
    int n = 15;
    cout<<fn(n)<<endl;

}
