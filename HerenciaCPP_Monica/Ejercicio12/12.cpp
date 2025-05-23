#include <iostream>
using namespace std;

class Dispositivo {
public:
    string marca;
};

class TV : virtual public Dispositivo {};
class DVD : virtual public Dispositivo {};

class ControlRemoto : public TV, public DVD {};

int main() {
    ControlRemoto cr;
    cr.marca = "Sony"; 
    cout << "Marca del dispositivo: " << cr.marca << endl;
    return 0;
}
