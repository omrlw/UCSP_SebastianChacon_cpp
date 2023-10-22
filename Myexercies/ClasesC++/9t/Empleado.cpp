#include "Empleado.h" 
#include <iostream>
#include <string>

using namespace std; 

int main(){

    Empleado e1("Sebastian","Chacon",15000);
    cout<<e1.Get_salary()<<endl;

    Empleado e2("Juan", "L'Moue", -10000);
    cout<<e2.Get_salary()<<endl;

}