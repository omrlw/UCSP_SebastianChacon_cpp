#include <iostream>
#include <string>
using namespace std;

class Students{
public:
    string name_student;
    int age_student;
    float note_student;


};

int main(){
    Students student1;

    student1.name_student = "Sebastian";
    student1.age_student = 18;
    student1.note_student = 4.5;

    cout<<student1.name_student<<endl;


    return 0;
}