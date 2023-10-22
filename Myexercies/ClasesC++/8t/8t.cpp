#include "8.h"
#include <iostream>	
using namespace std;

int main() {

    Punto p1;
    Punto p2(4,5);
    Punto * ptr1 = &p1;
    Punto * ptr2 = &p2;

    p1.settcoordenadax(5);
    p1.settcoordenaday(9);

    cout<< p1.getcordenadax()<<endl<<ptr1->getcordenaday()<<endl;
    cout<< ptr2->getcordenadax()<<endl<< ptr2 -> getcordenaday()<<endl;




}