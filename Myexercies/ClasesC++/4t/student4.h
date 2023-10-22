#include <iostream>
using namespace std;

class Student{
public: 
    string name_s;
    int age_s;
    float note_s;


    //Estrucutra por defecto
    Student(){
        name_s = "Por declarar";
        age_s = 0;
        note_s = 0;
    }

    //Constructor
    Student(string name, int age, float note){
        name_s = name;
        age_s = age;
        note_s = note;
    }

    void PrintDates(){
        cout<<"The name is: "<<name_s<<endl;
        cout<<"The age is: "<<age_s<<endl;
        cout<<"The note is: "<<note_s<<endl;
        cout<<"---------------------"<<endl;
    
    }

};