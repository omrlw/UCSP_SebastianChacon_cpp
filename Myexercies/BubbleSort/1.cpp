#include <iostream>
using namespace std;    

void bublesort(int arr[], const int t){
    for(int i = 0; i < t ; i++){
        for(int b = 0; b < t - 1; b++){
            if(arr[b] > arr[b+1]){
                int temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1]= temp;
            }
        }
        cout<<arr[i]<<" ";
    }

}

int main(){
  
    int a[] = {23,3,22,323,3312,123};
    const int t = 6;

    bublesort(a,t);

    return 0;
}