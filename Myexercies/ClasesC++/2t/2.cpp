// 2 Print dates of one class

#include <iostream>
#include <string>
using namespace std;

class Students{
public:
    string name_student;
    int age_student;
    float note_student;

    void printNameStudent(){
        cout<<name_student<<endl;
    }   

    void printNoteStudent(){   
        cout<<name_student<<" tiene de calificación: "<<note_student<<endl;
    }

};


int main(){
    Students student1;

    student1.name_student = "Sebastian";
    student1.age_student = 18;
    student1.note_student = 4.5;


    Students student2;

    student2.name_student = "Juan";
    student2.age_student = 19;
    student2.note_student = 4.0;

    student1.printNameStudent();
    student2.printNoteStudent();

    return 0;
}