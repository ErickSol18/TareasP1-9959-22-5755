# incluir  < stdio.h >
# incluir  < stdlib.h >
# include  < unistd.h >
# incluir  < cadena.h >
# incluir  <iostream> _ _
# incluir  <iomanip> _ _

utilizando  el espacio de nombres  estándar ;

    const  int Liga1 = 10 ;
    const  int Liga2 = 10 ;
    const  int Liga3 = 10 ;
    const  int Año_Competencias = 4 ;
    const  int Max_Puntaje = 50 ;
    const  int Max_Puntaje_LN = 50 ;
    const  int Max_Puntaje_LA = 50 ;
    const  int Max_puntaje_LS = 50 ;
    const  int Min_Puntaje = 0 ;
    const  int MAXIMA_LONGITUD_CADENA = 100 ;
    float totalpromedio1= 0 ;
    float totalpromedio2= 0 ;
    float totalpromedio3= 0 ;
    const  char Resultado = 3 ;

int  busquedaAleatorios ( int minimo, int maximo);
void  llenarMatriz1 ( float matriz[Liga1][Año_Competencias + 1 ]);
void  llenarMatriz2 ( float matriz[Liga2][Año_Competencias + 1 ]);
void  llenarMatriz3 ( float matriz[Liga3][Año_Competencias + 1 ]);
void  imprimirMatrizLinea ();
void  imprimirMatriz1 ( float matriz1[Liga1][Año_Competencias + 1 ], char alumnos[Liga1][MAXIMA_LONGITUD_CADENA]);
void  imprimirMatriz2 ( float matriz2[Liga2][Año_Competencias + 1 ], char alumnos[Liga2][MAXIMA_LONGITUD_CADENA]);
void  imprimirMatriz3 ( float matriz3[Liga3][Año_Competencias + 1 ], char alumnos[Liga3][MAXIMA_LONGITUD_CADENA]);
int  principal ()
{
    srand ( getpid ());
    float matriz1[Liga1][Año_Competencias + 1 ];
    float matriz2[Liga2][Año_Competencias + 1 ];
    float matriz3[Liga3][Año_Competencias + 1 ];
    char alumnos1[Liga1][MAXIMA_LONGITUD_CADENA] = { " Luisa " , " Barry " , " María " , " Pedro " , " Juana " , " Chris " , " Mario " , " Celia " , " Bryan " , " Kevin " } ;
    char alumnos2[Liga2][MAXIMA_LONGITUD_CADENA] = { " Pablo " , " Lucia " , " Sonia " , " Ethan " , " Paola " , " Jorge " , " Angel " , " Paula " , " Ruben " , " Matty " } ;
    char alumnos3[Liga3][MAXIMA_LONGITUD_CADENA] = { " Tania " , " Marta " , " Steve " , " Bruno " , " Alexa " , " Diego " , " Luigi " , " Diana " , " Karol " , " Shrek " } ;
    llenarMatriz1 (matriz1);
    imprimirMatriz1 (matriz1, alumnos1);
    llenarMatriz2 (matriz2);
    imprimirMatriz2 (matriz2, alumnos2);
    llenarMatriz3 (matriz3);
    imprimirMatriz3 (matriz3, alumnos3);
}
int  busquedaAleatorios ( int minimo, int maximo)
{
    return minimo + rand () / (RAND_MAX / (maximo - minimo + 1 ) + 1 );
}

void  llenarMatriz1 ( float matriz1[Liga1][Año_Competencias + 1 ])
{
    entero y, x;
    para (y = 0 ; y < Liga1; y++)
    {
        float suma = 0 , suma2 = 0 , suma3 = 0 , suma4 = 0 ;
        para (x = 0 ; x < Año_Competencias; x++)
        {
            int calificacion = busquedaAleatorios (Min_Puntaje, Max_Puntaje_LN);

            matriz1[y][ 0 ] = Resultado;
            int calificacion2 = busquedaAleatorios (Min_Puntaje, Max_Puntaje_LA);

            matriz1[y][ 1 ] = calificacion2;
            int calificacion3 = busquedaAleatorios (Min_Puntaje, Max_puntaje_LS);

            matriz1[y][ 2 ] = calificacion3;
            int calificacion4 = busquedaAleatorios (Min_Puntaje, Max_Puntaje);

            matriz1[y][ 3 ] = calificacion4;
            suma= matriz1[y][ 0 ]+matriz1[y][ 1 ]+matriz1[y][ 2 ]+matriz1[y][ 3 ];
        }
        // Agregar promedio
        float promedio = suma/ Año_Competencias;
        matriz1[y][Año_Competencias] = promedio;
        totalpromedio1= ( float )promedio+totalpromedio1;

    }
}

void  llenarMatriz2 ( float matriz2[Liga2][Año_Competencias + 1 ])
{
    entero y, x;
    para (y = 0 ; y < Liga2; y++)
    {
        float suma = 0 , suma2 = 0 , suma3 = 0 , suma4 = 0 ;
        para (x = 0 ; x < Año_Competencias; x++)
        {
            int calificacion = busquedaAleatorios (Min_Puntaje, Max_Puntaje_LN);

            matriz2[y][ 0 ] = Resultado;
            int calificacion2 = busquedaAleatorios (Min_Puntaje, Max_Puntaje_LA);

            matriz2[y][ 1 ] = calificacion2;
            int calificacion3 = busquedaAleatorios (Min_Puntaje, Max_puntaje_LS);

            matriz2[y][ 2 ] = calificacion3;
            int calificacion4 = busquedaAleatorios (Min_Puntaje, Max_Puntaje);

            matriz2[y][ 3 ] = calificacion4;
            suma= matriz2[y][ 0 ]+matriz2[y][ 1 ]+matriz2[y][ 2 ]+matriz2[y][ 3 ];
        }
        // Agregar promedio
        float promedio = suma/ Año_Competencias;
        matriz2[y][Año_Competencias] = promedio;
        totalpromedio2= ( float )promedio+totalpromedio2;
    }
}

void  llenarMatriz3 ( float matriz3[Liga3][Año_Competencias + 1 ])
{
    entero y, x;
    para (y = 0 ; y < Liga3; y++)
    {
        float suma = 0 , suma2 = 0 , suma3 = 0 , suma4 = 0 ;
        para (x = 0 ; x < Año_Competencias; x++)
        {
            int calificacion = busquedaAleatorios (Min_Puntaje, Max_Puntaje_LN);

            matriz3[y][ 0 ] = Resultado;
            int Resultado2 = busquedaAleatorios (Min_Puntaje, Max_Puntaje_LA);

            matriz3[y][ 1 ] = Resultado2;
            int Resultado3 = busquedaAleatorios (Min_Puntaje, Max_puntaje_LS);

            matriz3[y][ 2 ] = Resultado3;
            int Resultado4 = busquedaAleatorios (Min_Puntaje, Max_Puntaje);

            matriz3[y][ 3 ] = Resultado4;
            suma= matriz3[y][ 0 ]+matriz3[y][ 1 ]+matriz3[y][ 2 ]+matriz3[y][ 3 ];
        }
        // Agregar promedio
        float promedio = suma/ Año_Competencias;
        matriz3[y][Año_Competencias] = promedio;
        totalpromedio3= ( float )promedio+totalpromedio3;
    }
}

void  imprimirMatrizLinea ()
{
    intx ;
    cout << " +-------- " ;
    para (x = 0 ; x < Año_Competencias + 1 ; x++)
    {
        cout << " +--------- " ;
    }
    cout<< " + \n " ;
}
void  imprimirMatriz1 ( float matriz1[Liga1][Año_Competencias + 1 ], char alumnos1[Liga1][MAXIMA_LONGITUD_CADENA])
{
    entero y, x;
    float promedioMayor = matriz1[ 0 ][Año_Competencias];
    float promedioMenor = matriz1[ 0 ][Año_Competencias];
    char alumno1PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno1PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << " " << endl;
    cout << " " << endl;
    cout << " \t\t Competencias " << endl;

    imprimirMatrizLinea ();

    cout << setw ( 8 ) << " Competidor " ;
    cout << setw ( 8 ) << " LA " ;
    cout << setw ( 10 ) << " LN " ;
    cout << setw ( 10 ) << " LS " ;
    cout << setw ( 10 )<< " LM " ;
    cout << setw ( 11 ) << " Prom " << endl;
    imprimirMatrizLinea ();
    promedioMenor= 100 ;
    promedioMayor= 0 ;
    para (y = 0 ; y < Liga1; y++)
    {
        cout << " ! " << setw ( 8 ) << alumnos1[y] << " ! " ;
        flotante suma = 0 ;
        para (x = 0 ; x < Año_Competencias; x++)
        {
            int calificacion = matriz1[y][x];
            cout << setw ( 9 ) << Resultado << " ! " ;
        }
        float promedio = matriz1[y][Año_Competencias];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy (alumno1PromedioMayor, alumnos1[y], MAXIMA_LONGITUD_CADENA);
        }
        si (promedio <promediomenor)
        {
            promedioMenor = promedio;
            memcpy (alumno1PromedioMenor, alumnos1[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw ( 9 ) << fixed << setprecision ( 2 ) << promedio << " ! " << endl;
        imprimirMatrizLinea ();
    }
    float promedioDeLiga1= totalpromedio1/Liga1;
    cout << " Promedio mayor facultad 1: " << setw ( 10 ) << alumno1PromedioMayor << " Nota: " << setw ( 10 ) << promedioMayor << endl;
    cout << " Promedio menor facultad 1: " << setw ( 10 ) << alumno1PromedioMenor << " Nota: " << setw ( 10 ) << promedioMenor << endl;
    cout << " promedio total de la facultad de ingenieria es de: " << setw ( 9 ) << promedioDeLiga1 << endl;

    cout << " " << endl;
}

void  imprimirMatriz2 ( float matriz2[Liga2][Año_Competencias + 1 ], char alumnos2[Liga2][MAXIMA_LONGITUD_CADENA])
{
    entero y, x;
    float promedioMayor = matriz2[ 0 ][Año_Competencias];
    float promedioMenor = matriz2[ 0 ][Año_Competencias];
    char alumno1PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno1PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << " " << endl;
    cout << " " << endl;
    cout << " \t\t FACULTAD DE ARQUITECTURA " << endl;

    imprimirMatrizLinea ();

    cout << setw ( 8 ) << " Alumno " ;
    cout << setw ( 8 ) << " PP " ;
    cout << setw ( 10 ) << " SP " ;
    cout << setw ( 10 ) << " EF " ;
    cout << setw ( 10 )<< " ACT " ;
    cout << setw ( 11 ) << " Prom " << endl;
    imprimirMatrizLinea ();
    promedioMenor= 100 ;
    promedioMayor= 0 ;
    para (y = 0 ; y < Liga2; y++)
    {
        cout << " ! " << setw ( 8 ) << competidor2[y] << " ! " ;
        flotante suma = 0 ;
        para (x = 0 ; x < Año_Competencias; x++)
        {
            int calificacion = matriz2[y][x];
            cout << setw ( 9 ) << Resultado << " ! " ;
        }
        float promedio = matriz2[y][Año_Competencias];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy (competidor2PromedioMayor, competidor2[y], MAXIMA_LONGITUD_CADENA);
        }
        si (promedio <promediomenor)
        {
            promedioMenor = promedio;
            memcpy (competidor2PromedioMenor, competidor2[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw ( 9 ) << fixed << setprecision ( 2 ) << promedio << " ! " << endl;
        imprimirMatrizLinea ();
    }
    float promedioDeLiga2=totalpromedio2/Liga2;
    cout << " Promedio mayor facultad 2: " << setw ( 10 ) << alumno2PromedioMayor << " Nota: " << setw ( 10 ) << promedioMayor << endl;
    cout << " Promedio menor facultad 2: " << setw ( 10 ) << alumno2PromedioMenor << " Nota: " << setw ( 10 ) << promedioMenor << endl;
    cout << " promedio total de la facultad de arquitectura es de: " << setw ( 9 ) << promedioDeLiga2 << endl;
    cout << " " << endl;
}

void  imprimirMatriz3 ( float matriz3[Liga3][Año_Competencias + 1 ], char alumnos3[Liga3][MAXIMA_LONGITUD_CADENA])
{
    entero y, x;
    float promedioMayor = matriz3[ 0 ][Año_Competencias];
    float promedioMenor = matriz3[ 0 ][Año_Competencias];
    char alumno1PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno1PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << " " << endl;
    cout << " " << endl;
    cout << " \t\t FACULTAD DE ADMINISTRACION " << endl;

    imprimirMatrizLinea ();

    cout << setw ( 8 ) << " Alumno " ;
    cout << setw ( 8 ) << " PP " ;
    cout << setw ( 10 ) << " SP " ;
    cout << setw ( 10 ) << " EF " ;
    cout << setw ( 10 )<< " ACT " ;
    cout << setw ( 11 ) << " Prom " << endl;
    imprimirMatrizLinea ();
    promedioMenor= 100 ;
    promedioMayor= 0 ;
    para (y = 0 ; y < Liga3; y++)
    {
        cout << " ! " << setw ( 8 ) << Competidor3[y] << " ! " ;
        flotante suma = 0 ;
        para (x = 0 ; x < Año_Competencias; x++)
        {
            int calificacion = matriz3[y][x];
            cout << setw ( 9 ) << Resultado << " ! " ;
        }
        float promedio = matriz3[y][Año_Competencias];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy (alumno3PromedioMayor, Competidor3[y], MAXIMA_LONGITUD_CADENA);
        }
        si (promedio <promediomenor)
        {
            promedioMenor = promedio;
            memcpy (alumno3PromedioMenor, Competidor3[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw ( 9 ) << fixed << setprecision ( 2 ) << promedio << " ! " << endl;
        imprimirMatrizLinea ();
    }
    float promedioDeClase3=totalpromedio3/Liga3;
    cout << " Promedio mayor facultad 3: " << setw ( 10 ) << alumno3PromedioMayor << " Nota: " << setw ( 10 ) << promedioMayor << endl;
    cout << " Promedio menor facultad 3: " << setw ( 10 ) << alumno3PromedioMenor << " Nota: " << setw ( 10 ) << promedioMenor << endl;
    cout << " promedio total de la facultad de administración es de: " << setw ( 9 ) << promedioDeClase3 << endl;
    cout << " " << endl;
}
