#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char cadenaDesordenada[] = "e6s0T9o 6.eS.99 u9n5a. CADENA";
    // char temp = cadenaDesordenada[0];

    for (int i = 0; cadenaDesordenada[i] != '\0'; i++)
    {
        if (isalpha(cadenaDesordenada[i]))
        {
            cout<<(char)(isupper(cadenaDesordenada[i]) ? tolower(cadenaDesordenada[i]) : cadenaDesordenada[i]);
        }
        else if (isspace(cadenaDesordenada[i])){
            cout<<" ";
        }
        else if (ispunct(cadenaDesordenada[i]))
        {
            cout<<"";
        }
    
    }

    return 0;
};