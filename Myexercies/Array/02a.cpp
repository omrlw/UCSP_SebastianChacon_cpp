//Referencias y Punteros
#include <iostream>

using namespace std; 


void duplicar(int &numero) {
    numero *= 2;
}

void swap_referencia(int &x,int &y){

    int temp{0};
    temp = x;
    x = y;
    y = temp;

    cout<<"x es : "<<x<<endl;
    cout<<"y es : "<<y<<endl;

}

void swap_punteros(int* &px, int* &py){
    int * temp;
    temp = px;
    px = py; 
    py = temp;

    std::cout << "ptr_x apunta a: " << *px << std::endl;
    std::cout << "ptr_y apunta a: " << *py << std::endl;

}


int main(){

    int vo = 23;
    int &vr = vo;
    vr = 42;

    //Accedimos al dato original y lo modificamos a traves de la referencia
    // cout<<vo<<endl; 23

    // int valor = 5;
    // duplicar(valor);
    // // Ahora, el valor se ha duplicado y es igual a 10
    // // cout<<valor<<endl;
    
    // int x{5}, y{3};
    // swap_referencia(x,y);

    int x = 3, y = 5; 

    int* px = &x;
    int* py = &y;

    swap_punteros(px, py);


    return 0;
}
int LengthArray(const char* arreglo){
    int c = 0;

    // No podemos usar el c en el for, porque la varible quedaria limitada al bucle
    for (; arreglo[c] != '\0'; c++ ){
    }
    
    return c;
}



int main(){
    
    // carácter nulo ('\0') al final para indicar el final de la cadena
    char holamundo[] = { 'H', 'o', 'l', 'a', ',', ' ', 'm', 'u','n', 'd', 'o', '!', '\0'};
    
    cout << "Longitud del array: " << LengthArray(holamundo) << endl;
    cout << "En indices es: " << LengthArray(holamundo) - 1 << endl;


    return 0;


}




