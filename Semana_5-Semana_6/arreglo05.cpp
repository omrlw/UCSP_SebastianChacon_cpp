#include <iostream> 

using namespace std;



int LongthArray(){




    
}






int main(){
    char holamundo[] = { 'H', 'o','l','a',' ','M','u','n','d','o' ,'\0'};
    int array[] = {1,2,23,3,3,3};

    cout<<holamundo[2]<<endl;

    // en C++, un array sin un formato especial se comporta como un puntero al primer 
    // elemento del array cuando se usa en un contexto en el que se espera un puntero.
    // En este caso, cuando usas cout para imprimir array, está interpretando array 
    // como un puntero al primer elemento del array.
    cout<<*array<<endl;




}