#include <iostream>
using namespace std;

class Instrumento {
public:
    virtual void tocar() {
        cout<<"Está sonando el instrumento"<<endl;
    }
};

class Guitarra : public Instrumento {
public:
    void tocar() override {
        cout<<"la guitarra esta tocando un corrido"<<endl;
    }
};

void probar(Instrumento* inst) {
    inst->tocar();
}

int main() {
    Guitarra g;
    probar(&g);
    return 0;
}