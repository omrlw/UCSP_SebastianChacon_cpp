#include <iostream>
using namespace std;


//Enteder la referencia & ya que sin esta no funciona
// Funcion para evaluar si la profesion ingresada se encuentra en el arreglo de datos base
bool Verifying_profession(string& profession){
    string array[] = {"Doctor", "Architect", "Programmer"};
    for(int c = 0; array[c] != ""; c++){
        if (array[c] == profession){ 
            return true;
        }
    }
    return false;

};

class Student{
private:
    // Recuerda usar const char* para declarar un arreglo de cadenas dentro de private, por temas de seguridad 
    // declarar un arreglo de punteros a caracteres
    // No te olvides de definir el numero de elementos

    string profession_s ;


public: 
    string name_s; 
    float note_s;
    int age_s;

    // Atributos por defecto - Constructor Base
    Student(){
        name_s = "Por declarar";
        profession_s = "Por declarar";
        age_s = 0;
        note_s = 0;
    }

   // Atributos Ingresador, objeto estudiante - Constructor personalizado
    Student(string name, string profession, int age, float note){
        name_s = name;
        define_grade(profession); //Llamando a la funcion setter
        age_s = age;
        note_s = note;
    }

    //SETTER
    void define_grade(string grade_student){
        if (Verifying_profession(grade_student)){
            profession_s = grade_student;
        }
        else{
            profession_s = "INCORRECTGRADE";
        }

    }
    
    //GETTER
    string Callgrade(){
        return profession_s;
    }

    // Funcion para evaluar si aprobo
    bool Approved(){
        if (note_s > 10){
            return true; 
        }
        return false;
    }

    void PrintDates(){
        cout<<"The name is: "<<name_s<<endl;
        cout<<"The age is: "<<age_s<<endl;
        cout<<"The note is: "<<note_s<<endl;

        if (Approved()){
            cout<<"The student passed"<<endl ;
        }
        else {
            cout<<"The student didn't passed"<<endl;
        }

        cout<<"The profession is "<<Callgrade()<<endl;

    }

};