#include<iostream>
#include<string>
using namespace std;

#include "Libreria.h"

int main(){
    CtaBanc cliente;
    string nom;
    double saldoIni, cantidad;
    char opcion;

    cout << "Nombre del cliente: ";
    cin >> nom;
    cout << "Saldo inicial de la cuenta: ";
    cin >> saldoIni;
    cliente.setNombre(nom);
    cliente.setSaldo(saldoIni);
    do{
        cout << "a) depositar b) retirar c)consultar saldo d) terminar" << endl;
        cin >> opcion;
        switch (opcion){
            case 'a':{
                cout << "Cantidad? ";
                cin >> cantidad;
                cliente.deposita(cantidad);
                break;
            }
            case 'b':{
                cout << "Cantidad? ";
                cin >> cantidad;
                bool respuesta = cliente.retira(cantidad);
                if (respuesta == false){
                    cout << "No hay saldo suficiente. " << endl;
                }
                break;
            }
            case 'c':{
                cliente.muestra();
                break;
            }
        }
   }while (opcion != 'd');

   return 0;
}
