#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Ingrese el primer numero: "; cin>>n1;
    cout<<"Ingrese el segundo numero: ";cin>>n2;
    cout<<"Ingrese el factor: ";cin>>n3;


    if (n3 % n1 == 0){
        cout<<"El numero " << n1 << " es factor de "<< n3 <<endl;
    }
    else{
        cout<<"El numero " << n1 << " no es factor de "<< n3 <<endl;
    }

    if (n3 % n2 == 0){
        cout<<"El numero " << n2 << " es factor de "<< n3 <<endl;
    }
    else{
        cout<<"El numero " << n2 << " no es factor de "<< n3 <<endl;
    }
    return 0;
}