//Fibonacchi con recursividad 


// 0,1,1,2,3,5,8,13,21
//Incides
//0,1,2,3,4,5,6,7,8

// Indices -> 8 = 7 + 6
// Indices -> 7 = 6 + 5
// Indices -> 6 = 5 + 4


#include <iostream>
using namespace std;


int fibo(int An){

    if (An == 0)
    {
        return 0;
    }
    
    else if (An == 1)
    {
        return 1;
    }

    return(fibo(An-2) + fibo(An-1));

};


int main(){
    cout<<fibo(8)<<endl;



    return 0;
}










