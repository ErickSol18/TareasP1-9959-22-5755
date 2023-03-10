#ifndef CABECERA_H_
#define CABECERA_H_

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

#endif // CABECERA_H_
