#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <string.h>

using namespace std;

const int Num_Alumnos = 5;
const int Num_Materias = 5;

string alumnos[Num_Alumnos];
string materias[Num_Materias] = {"Programacion_I","Proceso_Administrativo","Derecho_Informatico","Calculo_I","Fisica_I"};
int notas[Num_Materias];

void menuPrincipal();
void ingresoAlumnos();
void ingresoCalificaciones();
int promedio();

int main()
{
    menuPrincipal();
    system("pause");
    return 0;
}
void menuPrincipal()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tNotas De La Universidad" << endl;
        cout << "\t\t-------------------------------------\n\n";
        cout << "\t1. INGRESO DE CALIFICACIONES" << endl;
        cout << "\t2. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            ingresoAlumnos();
            break;
        case 2: repetir = false;
                break;
        }
    }while (repetir);
}
void ingresoAlumnos()
{
    system("cls");
    for(int i = 0; i < Num_Alumnos; i++)
    {
        cout <<"\n\tIngrese el nombre del alumno: \n\t " <<  i + 1 << ".\t";
        cin >> alumnos[i];
        ingresoCalificaciones();
        promedio();
    }
    system("pause>nul");
}
void ingresoCalificaciones()
{
    cout << "\n";
    for(int i = 0; i < Num_Materias; i++)
    {
        cout << "\tNotas " << materias[i] << ": ";
        cin >> notas[i];
    }
    system("pause>nul");
}
int promedio()
{
    int suma = 0, promedioTotal;
    for (int i=0; i<=Num_Materias; i++)
    {
        suma += notas[i];
    }
    promedioTotal = suma / Num_Materias;
    cout <<"\n\tPromedio: " << promedioTotal << endl;
    return suma, promedioTotal;
    system("pause>nul");
}

