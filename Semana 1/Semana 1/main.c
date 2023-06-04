#include <stdio.h>
#include "HJ_Modularidad.h"


int main()
{
    int filas, columnas;
    
    tamanoMatriz(&filas, &columnas);
    
    int matriz[100][100];
    
    ingresarElementosMatriz(matriz, filas, columnas);
    
    imprimirMatriz(matriz, filas, columnas);

    return 0;
}