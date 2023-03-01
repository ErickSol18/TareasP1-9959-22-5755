#include<iostream>
#include<stdlib.h>
using namespace std;

class Empleo{
    private:
        string nombre,apellido;
        int salario;
    public:
        Empleo(string,string,int);
        void establecer();
        void obtener();
};

Empleo::Empleo(string _nombre,string _apellido,int _salario){
    nombre = _nombre;
    apellido = _apellido;
    salario = _salario;
}

void Empleo::establecer(){
    cout<<"me llamo "<<nombre<<" y mi apellido es "<<apellido<<" es un gusto "<<endl;
}

void Empleo::obtener(){
    cout<<"quisiera obtener "<<salario<<" debido a mi buen trabajo"<<endl;
}


int main(){
    Empleo e1 = Empleo("erick","solares",6000);
    Empleo e2 = Empleo("kesdy","Melgar",5000);
    Empleo e3("Javier","Lima",7000);

    e1.establecer();

    e2.obtener();

    e3.establecer();
    e3.obtener();


    system("pause");
    return 0;
}
