#include <iostream>
#include <string>

using namespace std;   
 
void print(string a[] , const int t){
    for (int i = 0; i < t; i++)
    {
        cout<<a[i]<< " ";
    }
    
}

void bublesort(string arr[], const int t){
    for(int i = 0; i < t; i++){
        for(int b = 0; b < t -1 ; b++){
            if(arr[b] > arr[b+1]){
                string temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1]= temp;
            }
        }
    }
    print(arr,t);

}

int main(){

    string a[] = {"pato", "come","a" , "ganzo" ,"b"};
    const int t = 5;

    bublesort(a,t);

    return 0;

}