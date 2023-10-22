#include <iostream>
using namespace std;

int main(){
    int n1 = 0, n2 = 0;
    cout<<"Ingrese el primer numero: ";  cin>>n1;
    cout<<"Ingrese el segundo numero: "; cin>>n2;

    if (n1 % 2 == 1){
        cout<<"El numero "<<n1<<" es impar"<<endl;
    }
    else{
        cout<<"El numero"<<n1<<"es par"<<endl;
    }

    if (n2 % 2 == 1){
        cout<<"El numero " <<n2<< " es impar"<<endl;
    }
    else{
        cout<<"El numero" <<n2<< "es par"<<endl;
    }

    if ((n1+n2) % 2 == 1){
        cout<<"La suma de"<< n1 <<"+"<< n2 <<"es impar"<<endl;
    }
    else{
        cout<<"La suma de"<< n1 <<"+"<< n2 <<"es par"<<endl;
    }

    return 0;
}

