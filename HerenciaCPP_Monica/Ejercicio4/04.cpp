#include <iostream>
using namespace std;

class ReproductorMultimedia{

};

class ReproductorAudio: public ReproductorMultimedia{
public:
    void reproducir(){
        cout<<"Reproduciendo audio"<<endl;
    }
};

class ReproductorVideo: public ReproductorMultimedia{
public:
    void mostrar(){
        cout<<"Reproduciendo video"<<endl;
    }
};

class ReproductorTotal: public ReproductorAudio, public ReproductorVideo{

};

int main(){
    ReproductorTotal rt;
    rt.reproducir();
    rt.mostrar();
    return 0;
}