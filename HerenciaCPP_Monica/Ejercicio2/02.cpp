#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
};

class Empleado : protected Persona {
public:
    void setDatos(string nom, int e) {
       nombre=nom;
       edad=e;
    }


    void mostrarDatos(){
        cout<<"Nombre: "<< nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
    }
};

int main() {
    Empleado emp;
    emp.setDatos("Moni",12);
    emp.mostrarDatos();
    return 0;
}