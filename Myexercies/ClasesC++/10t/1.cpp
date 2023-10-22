#include <iostream>
using namespace std;

class Empleado{
private:
    string nombre;
    string apellido;
    double salario;
public:
    Empleado(string nombre, string apellido, double salario){
        this -> nombre = nombre;
        this -> apellido = apellido;
        this -> salario = SalarioPositivo(salario);
    }

    double SalarioPositivo(double salario){
        if (salario < 0){
            salario = 0;
        }
        return salario;
    }

    //Setter 
    void SetNombre(string nombre){
        this -> nombre = nombre;

    }
    void SetApellido(string apellido){
        this -> apellido = apellido;
    }
    void SetSalario(double salario){
        this -> salario = SalarioPositivo(salario);
    }

    //Getter 
    string GetNombre(){
        return nombre;

    }
    string GetApellido(){
        return apellido;
    }
    double GetSalario(){
        return salario;
    }


    void MostrarDatosEmpleado() {
    cout << "Nombre: " << GetNombre() << endl;
    cout << "Apellido: " << GetApellido() << endl;
    cout << "Salario: " << GetSalario() << endl;
    }

};

int main(){

    Empleado empleado1("Omar", "Chacon", -11);
    cout<<empleado1.GetSalario()<<endl;

    empleado1.MostrarDatosEmpleado();
 
    return 0;
}