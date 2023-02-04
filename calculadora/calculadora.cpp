#include<iostream>

using namespace std;
int main()
{
   int num1, num2, opcion, resultado;
   cout<< "Ingrese el primer numero: ";
   cin>> num1;
   cout<< "Ingrese el segundo numero: ";
   cin>> num2;

   cout<<"1) Sumar"<<endl;
   cout<<"2) Restar"<<endl;
   cout<<"3) Multiplicar"<<endl;
   cout<<"4) Dividir"<<endl;
   cout<<"Opcion: ";
   cin>> opcion;

   switch(opcion){
       case 1: resultado = num1+num2;
       break;
       case 2: resultado = num1-num2;
       break;
       case 3: resultado = num1*num2;
       break;
       case 4: resultado = num1/num2;
       break;
       default:
        break;
   }
   cout<< "El resultado es: "<<resultado<<endl;
   system("pause");
   return 0;
}
