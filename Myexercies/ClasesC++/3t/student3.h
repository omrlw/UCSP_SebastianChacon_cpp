#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
    float note; 

    // Aunque es posible imprimir directamente los valores dentro del constructor,
    // no es una práctica típica ni recomendada, ya que los valores no se almacenarían,
    // en la instancia de la clase para su posterior uso.
    // Student(string name_s, int ages_s, float note_s){
    //     cout<<name_s<<endl;
    // };

    Student(string name_s, int ages_s, float note_s){
        name = name_s;
        age = ages_s;
        note = note_s;
    };


    // Para llamar a esta funcion debes hacerlo a travez de un objeto de clase
    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<note<<endl;
    };
  


};