#include <conio.h>
#include <iostream>

using namespace std;

int main(){
    int numeros[] = {3,2,4,1};
    int i, posi,auxi;

    for (i=0;i<4;i++){
        posi = i;
        auxi = numeros [i];

        while ((pos>0)&&(numeros[posi-1] > auxi)){
            numero[posi] = numero[posi-1];
            posi--;
        }
        numeros[posi] = auxi;
    }

    cout<<"Ordenar de forma ascendente: ";
    for(i=0;i<4;i++){
        cout<<numeros[i]<<" ";

    }

    cout<<"\nOrden Descendente; ";
    for(i=3,i>=0;i--){
        cout<<numeros[i]<<" ";
    }

    getch();
    return 0;
}

