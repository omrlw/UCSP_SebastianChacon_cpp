#include <iostream>

using namespace std;

class animal{
public:
    void eating(){
        cout<<"The animal is eating"<<endl;
    }
    void sleep(){
        cout<<"The animal is sleep"<<endl;
    }
    void play(){
        cout<<"The animal is playing!"<<endl;
    }
}; // <-- added semicolon here

//Subclase respecto a la clase animal
class perro: public animal{
public: 
    void wuaf(){
        cout<<"The animal say wuaf!"<<endl;
    }
    void sleep(){
        cout<<"The perro is sleep"<<endl;
    }

};