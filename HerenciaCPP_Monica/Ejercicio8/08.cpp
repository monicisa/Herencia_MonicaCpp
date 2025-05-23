#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
};

class Cliente : protected Persona {
public:
    Cliente (string n) {
        nombre=n;
    }

    void mostrar(){
        cout<<nombre<<endl;
    }
};

int main() {
    Cliente c("Mony");
    c.mostrar();
    return 0;
}