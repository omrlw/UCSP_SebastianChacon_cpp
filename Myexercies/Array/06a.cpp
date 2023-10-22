#include <iostream>

using namespace std;

//Invertir elementos de un arreglo
int main(){
    int ao[] = {1,2,3,4,5};   
    int ai[5];
    
    cout<<ao<<endl;

    for (int i = 0; i < 5; i++)
    {
        ai[i] = ao[4-i];
    }
    
    for(int i{0}; i < 5; i++){
        cout<<ai[i];
    }


    return 0;
}