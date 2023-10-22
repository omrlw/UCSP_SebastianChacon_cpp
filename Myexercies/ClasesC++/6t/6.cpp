#include <iostream>
#include <string>
#include "student6.h"


//Entiendo el setter y el getter como recorriendo array

using namespace std;

int main(){
    // Sin embargo,char arrayprofe[] = 
    // {"Doctor", "Architect", "Programmer"};, da error porque
    // estás tratando de inicializar un arreglo de caracteres
    // con un conjunto de cadenas literales entre comillas dobles.
    // En C y C++, esto no es una inicialización válida para un
    // arreglo de caracteres. Lo que debes hacer en su lugar es
   // declarar un arreglo de punteros a caracteres(un arreglo de cadenas) 
    // de la siguiente manera:    

 

    // Student student1("Sebastian", "Programmer", 19, 12.2);
    // Student student2("Santiago", "Doctor", 12, 18);
    Student student3;
            
    // student1.PrintDates();
    student3.PrintDates();

}



