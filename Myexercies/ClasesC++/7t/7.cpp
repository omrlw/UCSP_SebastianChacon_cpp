#include <iostream>
#include "student7.h"

using namespace std;

int main(){
    //Original class
    // animal animal1;
    // animal1.eating();

    animal perro0;
    perro0.sleep();

    //heredando
    perro perro1;
    perro1.sleep();
    perro1.eating();
    // perro1.wuaf();



    //Esto no funciona porque no se hereda invercamente
    // animal perroOriginal;
    // perroOriginal.wuaf();


    return 0;


}