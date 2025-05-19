#include <iostream>
using namespace std;


class Animal {
public:
    Animal() {}  

    void comer() {
        cout << "El animal come." << endl;
    }
};


class Perro : public Animal {
public:
    Perro() {}  

    void ladrar() {
        cout << "El perro ladra." << endl;
    }
};

int main() {
    Perro miPerro;
    miPerro.comer();   
    miPerro.ladrar();  
    return 0;
}
