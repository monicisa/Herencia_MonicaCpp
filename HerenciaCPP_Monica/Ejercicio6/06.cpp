#include <iostream>
using namespace std;


class Usuario{
public:
    void login(){   
        cout<<"Ha iniciado sesión"<<endl;    
    }
};


class Moderador: public Usuario{
public:
    void moderar(){
        cout<<"Bienvenido"<<endl;
    }

};

class Admin : public Moderador{
public:
    void banear(){
        cout<<"adios"<<endl;
    }
};

int main(){
    Admin admin;
    admin.login();
    admin.moderar();
    admin.banear();
    return 0;
}