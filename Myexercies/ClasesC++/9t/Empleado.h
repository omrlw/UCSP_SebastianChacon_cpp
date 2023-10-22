#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

using namespace std;

class Empleado{
private:
    std::string name;
    std::string lname;
    double salary;
public:
    Empleado(std::string name, std::string lname, double salary){
        this -> name = name;
        this -> lname = lname;
        this -> salary = Min_Salary(salary);   
    }

    double Min_Salary(double salary){
        if(salary < 0 ){
            salary = 0;
        }
        return salary;
    }

    //Setter
    void Set_name(std::string& name){
        this -> name = name;
    }
    void Set_lname(std::string& lname){
        this -> lname = lname;
    }
    void Set_salary(double salary){
        this -> salary = salary;
    }

    //Getter 
    std::string Get_name(){
        return name;
    }
    std::string Get_lname(){
        return lname;
    }
    double Get_salary(){
        return salary;
    }

};
#endif




