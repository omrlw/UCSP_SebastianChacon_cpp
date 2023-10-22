#include <iostream>
using namespace std;

int main(){
    int x = 20;
    int y = 30;
    int *ptr = nullptr; 
    ptr = &x;
    x = y; 
    cout<<*ptr<<endl;
    *ptr = 100;
    ptr = &y;
    cout<<ptr<<endl;
    cout<<x<<endl;


}