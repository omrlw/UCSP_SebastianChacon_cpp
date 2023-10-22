#include <iostream>
#include <array>

using namespace std;


//Formas de inicializar un array
int main(){

    int array2[5] = {1,2,3,4,5};
    int array3[] = {1,2,3,4,412,3,3}; 

    array<int,5 > n; 
    n ={1,2,3,4,5};

    cout<<n[1]<<endl;

 
    // carácter nulo ('\0') al final para indicar el final de la cadena
    char holamundo[] = { 'H', 'o', 'l', 'a', ',', ' ', 'm', 'u','n', 'd', 'o', '!', '\0'};
    cout<<holamundo<<endl;



    return 0;
}
