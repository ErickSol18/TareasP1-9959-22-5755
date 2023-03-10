// Caso practico de partidos politicos
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

    const int NUMERO_PARTICIPANTES1 = 5;
    const int NUMERO_PARTICIPANTES2 = 5;
    const int NUMERO_PARTICIPANTES3 = 5;
    const int NUMERO_PROCESOS = 4;
    const int MAX_ACTIVIDADES = 20;
    const int MAX_CALIFICACION1 = 100;
    const int MAX_CALIFICACION2 = 100;
    const int MAX_CALIFICACION3 = 100;
    const int MIN_PUNTAJE = 0;
    const int MAX_DISTANCIA_CADENA = 1000;
    float totalpromedio1=0;
    float totalpromedio2=0;
    float totalpromedio3=0;
    const char JUEGOS = 3;

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz1(float matriz[NUMERO_PARTICIPANTES1][NUMERO_PROCESOS + 1]);
void llenarMatriz2(float matriz[NUMERO_PARTICIPANTES2][NUMERO_PROCESOS + 1]);
void llenarMatriz3(float matriz[NUMERO_PARTICIPANTES3][NUMERO_PROCESOS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz1(float matriz1[NUMERO_PARTICIPANTES1][NUMERO_PROCESOS + 1], char partidos[NUMERO_PARTICIPANTES1][MAX_DISTANCIA_CADENA]);
void imprimirMatriz2(float matriz2[NUMERO_PARTICIPANTES2][NUMERO_PROCESOS + 1], char partidos[NUMERO_PARTICIPANTES2][MAX_DISTANCIA_CADENA]);
void imprimirMatriz3(float matriz3[NUMERO_PARTICIPANTES3][NUMERO_PROCESOS + 1], char partidos[NUMERO_PARTICIPANTES3][MAX_DISTANCIA_CADENA]);
int main()
{
    srand(getpid());
    float matriz1[NUMERO_PARTICIPANTES1][NUMERO_PROCESOS + 1];
    float matriz2[NUMERO_PARTICIPANTES2][NUMERO_PROCESOS + 1];
    float matriz3[NUMERO_PARTICIPANTES3][NUMERO_PROCESOS + 1];
    char partidos1[NUMERO_PARTICIPANTES1][MAX_DISTANCIA_CADENA] = {"Julio","Kesdy","Cristhal","Javier","Erick"};
    char partidos2[NUMERO_PARTICIPANTES2][MAX_DISTANCIA_CADENA] = {"Karol","Ruben","Emilio","Geobani","Solares"};
    char partidos3[NUMERO_PARTICIPANTES3][MAX_DISTANCIA_CADENA] = {"Estrada","Lima","Cobon","Tsul","Melgar"};
    imprimirMatriz1(matriz1, partidos1);
    llenarMatriz2(matriz2);
    imprimirMatriz2(matriz2, partidos2);
    llenarMatriz3(matriz3);
    imprimirMatriz3(matriz3, partidos3);
 }
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz1(float matriz1[NUMERO_PARTICIPANTES1][NUMERO_PROCESOS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_PARTICIPANTES1; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_PROCESOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION1);

            matriz1[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION2);

            matriz1[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION3);

            matriz1[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_PUNTAJE, MAX_ACTIVIDADES);

            matriz1[y][3] = calificacion4;
            suma= matriz1[y][0]+matriz1[y][1]+matriz1[y][2]+matriz1[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_PROCESOS;
        matriz1[y][NUMERO_PROCESOS] = promedio;
        totalpromedio1= (float)promedio+totalpromedio1;

    }
}

void llenarMatriz2(float matriz2[NUMERO_PARTICIPANTES2][NUMERO_PROCESOS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_PARTICIPANTES2; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_PROCESOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION1);

            matriz2[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION2);

            matriz2[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION3);

            matriz2[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_PUNTAJE, MAX_ACTIVIDADES);

            matriz2[y][3] = calificacion4;
            suma= matriz2[y][0]+matriz2[y][1]+matriz2[y][2]+matriz2[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_PROCESOS;
        matriz2[y][NUMERO_PROCESOS] = promedio;
        totalpromedio2= (float)promedio+totalpromedio2;
    }
}

void llenarMatriz3(float matriz3[NUMERO_PARTICIPANTES3][NUMERO_PROCESOS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_PARTICIPANTES3; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_PROCESOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION1);

            matriz3[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION2);

            matriz3[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_PUNTAJE, MAX_CALIFICACION3);

            matriz3[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_PUNTAJE, MAX_ACTIVIDADES);

            matriz3[y][3] = calificacion4;
            suma= matriz3[y][0]+matriz3[y][1]+matriz3[y][2]+matriz3[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_PROCESOS;
        matriz3[y][NUMERO_PROCESOS] = promedio;
        totalpromedio3= (float)promedio+totalpromedio3;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_PROCESOS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
void imprimirMatriz1(float matriz1[NUMERO_PARTICIPANTES1][NUMERO_PROCESOS + 1], char alumnos1[NUMERO_PARTICIPANTES1][MAX_DISTANCIA_CADENA])
{
    int y, x;
    float promedioMayor = matriz1[0][NUMERO_PROCESOS];
    float promedioMenor = matriz1[0][NUMERO_PROCESOS];
    char alumno1PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno1PromedioMenor[MAX_DISTANCIA_CADENA];
    char alumno2PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno2PromedioMenor[MAX_DISTANCIA_CADENA];
    char alumno3PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno3PromedioMenor[MAX_DISTANCIA_CADENA];
    cout << "" << endl;
    cout << "" << endl;

//-------------------------------------------------------------------------------------------------------------------------------

    cout << "\t\tJUEGO 1" << endl;
    imprimirMatrizLinea();

    cout << setw(8) << "INDEPENDIENTE";
    cout  << setw(8) << "primera" ;
    cout  << setw(10) << "segunda" ;
    cout  << setw(10) << "tercera" ;
    cout  << setw(10)<< "cuarta" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_PARTICIPANTES1; y++)
    {
        cout << "!" << setw(8) << alumnos1[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_PROCESOS; x++)
        {
            int calificacion = matriz1[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz1[y][NUMERO_PROCESOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno1PromedioMayor, alumnos1[y], MAX_DISTANCIA_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno1PromedioMenor, alumnos1[y], MAX_DISTANCIA_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase1= totalpromedio1/NUMERO_PARTICIPANTES1;
    cout << "Promedio mayor 1: " << setw(10) << alumno1PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor 1: " << setw(10) << alumno1PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total es de: " << setw(9) << promedioDeClase1 << endl;

    cout << "" << endl;
}

void imprimirMatriz2(float matriz2[NUMERO_PARTICIPANTES2][NUMERO_PROCESOS + 1], char alumnos2[NUMERO_PARTICIPANTES2][MAX_DISTANCIA_CADENA])
{
    int y, x;
    float promedioMayor = matriz2[0][NUMERO_PROCESOS];
    float promedioMenor = matriz2[0][NUMERO_PROCESOS];
    char alumno1PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno1PromedioMenor[MAX_DISTANCIA_CADENA];
    char alumno2PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno2PromedioMenor[MAX_DISTANCIA_CADENA];
    char alumno3PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno3PromedioMenor[MAX_DISTANCIA_CADENA];
    cout << "" << endl;
    cout << "" << endl;


//-------------------------------------------------------------------------------------------------------------------------------

    cout << "\t\tJUEGO 2" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "INDEPENDIENTE";
    cout  << setw(8) << "primera" ;
    cout  << setw(10) << "segunda" ;
    cout  << setw(10) << "tercera" ;
    cout  << setw(10)<< "cuarta" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_PARTICIPANTES2; y++)
    {
        cout << "!" << setw(8) << alumnos2[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_PROCESOS; x++)
        {
            int calificacion = matriz2[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz2[y][NUMERO_PROCESOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno2PromedioMayor, alumnos2[y], MAX_DISTANCIA_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno2PromedioMenor, alumnos2[y], MAX_DISTANCIA_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase2= totalpromedio2/NUMERO_PARTICIPANTES2;
    cout << "Promedio mayor 2: " << setw(10) << alumno2PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor 2: " << setw(10) << alumno2PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total es de: " << setw(9) << promedioDeClase2 << endl;
    cout << "" << endl;
}

//-------------------------------------------------------------------------------------------------------------------------------


void imprimirMatriz3(float matriz3[NUMERO_PARTICIPANTES3][NUMERO_PROCESOS + 1], char alumnos3[NUMERO_PARTICIPANTES3][MAX_DISTANCIA_CADENA])
{
    int y, x;
    float promedioMayor = matriz3[0][NUMERO_PROCESOS];
    float promedioMenor = matriz3[0][NUMERO_PROCESOS];
    char alumno1PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno1PromedioMenor[MAX_DISTANCIA_CADENA];
    char alumno2PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno2PromedioMenor[MAX_DISTANCIA_CADENA];
    char alumno3PromedioMayor[MAX_DISTANCIA_CADENA];
    char alumno3PromedioMenor[MAX_DISTANCIA_CADENA];
    cout << "" << endl;
    cout << "" << endl;

//-------------------------------------------------------------------------------------------------------------------------------

    cout << "\t\tJUEGO 3" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "INDEPENDIENTE";
    cout  << setw(8) << "primera" ;
    cout  << setw(10) << "segunda" ;
    cout  << setw(10) << "tercera" ;
    cout  << setw(10)<< "cuarta" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_PARTICIPANTES3; y++)
    {
        cout << "!" << setw(8) << alumnos3[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_PROCESOS; x++)
        {
            int calificacion = matriz3[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz3[y][NUMERO_PROCESOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno3PromedioMayor, alumnos3[y], MAX_DISTANCIA_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno3PromedioMenor, alumnos3[y], MAX_DISTANCIA_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase3= totalpromedio3/NUMERO_PARTICIPANTES3;
    cout << "Promedio mayor  3: " << setw(10) << alumno3PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor  3: " << setw(10) << alumno3PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total es de: " << setw(9) << promedioDeClase3 << endl;
    cout << "" << endl;
}
