#include <iostream>
using namespace std;

class Sensor {
protected:
    void detectarMovimiento() {
        cout << "Movimiento detectado" << endl;
    }
};

class SistemaAlarma : private Sensor {
public:
    void verificar() {
        detectarMovimiento();
        // Llama a detectarMovimiento();
    }
};

int main() {
    SistemaAlarma sa;
    sa.verificar();
    return 0;
}