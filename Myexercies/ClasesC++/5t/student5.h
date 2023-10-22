#include <iostream>

using namespace std;

class Student{
public: 
    string name_s;
    int age_s;
    float note_s;

    Student(){
        name_s = "Por declarar";
        age_s = 0;
        note_s = 0;
    }

    Student(string name, int age, float note){
        name_s = name;
        age_s = age;
        note_s = note;
    }

    bool Approved(){
        if (note_s <= 10){
            return false;
        }
        return true;
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

    
    }


};