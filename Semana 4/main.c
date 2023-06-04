#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{   
    int matriz[3][4];
    int filas = 3;
    int columnas = 4;
    
    ingresarMatriz(matriz, filas, columnas);
    imprimirMatriz(matriz, filas, columnas);
    float determinanteprincipal = calcularDeterminante(matriz, filas, columnas);
    float parteprincipalx = parteX(matriz, filas, columnas);
    float parteprincipalY = parteY(matriz, filas, columnas);
    float parteprincipalZ = parteZ(matriz, filas, columnas);
    partesdivDeterminante(determinanteprincipal, parteprincipalx, parteprincipalY, parteprincipalZ);
    return 0;
}