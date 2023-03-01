#include<iostream>
#include<stdlib.h>
using namespace std;

class Cuenta{
    private:
        int saldo,abonar,cargar,devolver;
    public:
        Cuenta(int,int,int,int);
        void abono();
        void carga();
        void devolver();
};

Cuenta::Cuenta(int _saldo,int _abonar,int _cargar,int _devolver){
    saldo = _saldo >= 0;
    abonar = _abonar;
    cargar = _cargar;
    devolver = _devolver;
}

void Cuenta::abono(){
    int _abono;

    _abono = (saldo) + (abonar);

    cout<<"se abono "<<_abono<<endl;
}

void Cuenta::carga(){
    int _carga;

    _carga = (saldo) - (cargar);

    cout<<"se cargo "<<_carga<<endl;
}

void Cuenta::devolve(){
    int _devolver;

    cout<<"regresar "<<saldo<<"actual"<<endl;
}

int main(){
    cout<<"\t Banco UMG"<<endl;
cout<< "Ingresar numero de cuenta"<<endl;
cin>> Cuenta

cout<<"Cuanto dinero tienes en la cuenta"<<endl;
cin>> SaldoCuenta



    system("pause");
    return 0;
}




