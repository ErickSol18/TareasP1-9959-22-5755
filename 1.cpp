//CtaBanc.h
//CuentaBancaria

#ifndef CtaBanc_h
#define CtaBanc_h

class CtaBanc{
    private:
        string nombre;
        double saldo;

    public:
        CtaBanc();
        CtaBanc(string nom, double sal);
        //metodos de acceso
        string getNombre();
        double getSaldo();
        //metodos de modificacion
        void setNombre(string nom);
        void setSaldo(double sal);
        //otros metodos
        void deposita(double cant);
        bool retira(double cant);
        void muestra();
};

CtaBanc::CtaBanc(){
    nombre = " ";
    saldo = 0;
}

CtaBanc::CtaBanc(string nom, double sal){
    nombre = nom;
    saldo = sal;
}

string CtaBanc::getNombre(){
     return nombre;
}

double CtaBanc::CtaBanc(){
    return saldo;
}

void CtaBanc::setNombre(string nom){
    nombre = nom;
}

void CtaBanc::setSaldo(double sal){
    saldo = sal;
}

void CtaBanc::deposita(double cant){
    saldo += cant;
}

bool CtaBanc::retira(double cant){
    if (cant > saldo){
        return false;
    }
    else{
        saldo -= cant;  //saldo = saldo - cant
        return true;
    }
}

void CtaBanc::muestra(){
    cout<<"Nombre "<< nombre << " saldo "<< endl;
}

#endif // CtaBanc_h
