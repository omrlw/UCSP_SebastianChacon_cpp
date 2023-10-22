#include <iostream>

using namespace std;



class Punto{

private: 
    //Paramateros privados
    int coordenada_x;
    int coordenada_y;

public:

    //Constructor Default
    Punto(){
        coordenada_x = 0;
        coordenada_y = 0;
    }

    //Constructor Personalizado
    Punto(int x, int y){
        coordenada_x = x;
        coordenada_y = y;
    }


    //Setter
    void settcoordenadax(int x){
        coordenada_x = x;
    }


    void settcoordenaday(int y){
        coordenada_y = y;
    }

    //Getter
    int getcordenadax(){
        return coordenada_x;
    }

    int getcordenaday(){
        return coordenada_y;
    }

};