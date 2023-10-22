 #include <iostream>

 using namespace std;

 int main(){
    int array[4];
    int varu = 0;
    cout<<"Numero inicial arreglo:  "; cin>>varu;

    for( int i = 0; i < 4; i++){
        array[i] = varu++;
    };

    for( int i = 0; i < 4; i++){
        cout<<array[i]<<endl;
    }


    return 0;
 }