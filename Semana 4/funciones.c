#include <stdio.h>
#include "funciones.h"

void ingresarMatriz(int matriz[][4], int filas, int columnas)
{
    printf("Ingrese los valores de la matriz(3 incognitas/ X,Y,Z = Constante):\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posicion (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimirMatriz(int matriz[][4], int filas, int columnas)
{
    printf("Matriz:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

float calcularDeterminante(int matriz[][4], int filas, int columnas)
{
    printf("Calculo por determinantes:\n");
    int determinanteprincipal = 0;
    // primeradiagonal1
    int primervalor = matriz[0][0] * matriz[1][1] * matriz[2][2];
    // segundadiagonal1
    int segundovalor = matriz[1][0] * matriz[2][1] * matriz[0][2];
    // terceradiagonal1
    int tercervalor = matriz[2][0] * matriz[0][1] * matriz[1][2];
    // cuartadiagonal
    int cuartovalor = matriz[2][0] * matriz[1][1] * matriz[0][2];
    // quintadaigonal
    int quintovalor = matriz[0][0] * matriz[2][1] * matriz[1][2];
    // sexta diagonal
    int sextovalor = matriz[1][0] * matriz[0][1] * matriz[2][2];
    determinanteprincipal = ((primervalor + segundovalor + tercervalor) - 
    (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", determinanteprincipal);
    return determinanteprincipal;
    }

float parteX(int matriz[][4], int filas, int columnas){
    printf("Calculo para X:\n");
    int parteprincipalx = 0;
    // primeradiagonal1
    int primervalor = matriz[0][3] * matriz[1][1] * matriz[2][2];
    // segundadiagonal1
    int segundovalor = matriz[1][3] * matriz[2][1] * matriz[0][2];
    // terceradiagonal1
    int tercervalor = matriz[2][3] * matriz[0][1] * matriz[1][2];
    // cuartadiagonal
    int cuartovalor = matriz[2][3] * matriz[1][1] * matriz[0][2];
    // quintadaigonal
    int quintovalor = matriz[0][3] * matriz[2][1] * matriz[1][2];
    // sexta diagonal
    int sextovalor = matriz[1][3] * matriz[0][1] * matriz[2][2];
    parteprincipalx = ((primervalor + segundovalor + tercervalor) - 
    (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", parteprincipalx);
    return parteprincipalx;

}

float parteY(int matriz[][4], int filas, int columnas){
    printf("Calculo para Y:\n");
    int parteprincipalY = 0;
    // primeradiagonal1
    int primervalor = matriz[0][0] * matriz[1][3] * matriz[2][2];
    // segundadiagonal1
    int segundovalor = matriz[1][0] * matriz[2][3] * matriz[0][2];
    // terceradiagonal1
    int tercervalor = matriz[2][0] * matriz[0][3] * matriz[1][2];
    // cuartadiagonal
    int cuartovalor = matriz[2][0] * matriz[1][3] * matriz[0][2];
    // quintadaigonal
    int quintovalor = matriz[0][0] * matriz[2][3] * matriz[1][2];
    // sexta diagonal
    int sextovalor = matriz[1][0] * matriz[0][3] * matriz[2][2];
    parteprincipalY = ((primervalor + segundovalor + tercervalor) - 
    (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", parteprincipalY);
    return parteprincipalY;

}

float parteZ(int matriz[][4], int filas, int columnas ){
    printf("Calculo para Z:\n");
    int parteprincipalZ = 0;
    // primeradiagonal1
    int primervalor = matriz[0][0] * matriz[1][1] * matriz[2][3];
    // segundadiagonal1
    int segundovalor = matriz[1][0] * matriz[2][1] * matriz[0][3];
    // terceradiagonal1
    int tercervalor = matriz[2][0] *  matriz[0][1] * matriz[1][3];
    // cuartadiagonal
    int cuartovalor = matriz[2][0] * matriz[1][1] * matriz[0][3];
    // quintadaigonal
    int quintovalor = matriz[0][0] * matriz[2][1] * matriz[1][3];
    // sexta diagonal
    int sextovalor = matriz[1][0] * matriz[0][1] * matriz[2][3];
    parteprincipalZ = ((primervalor + segundovalor + tercervalor) - 
    (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", parteprincipalZ);
    return parteprincipalZ;

}

void partesdivDeterminante(float determinanteprincipal, float parteprincipalx, 
float parteprincipalY, float parteprincipalZ)
{
    float divX = parteprincipalx / determinanteprincipal;
    float divY = parteprincipalY / determinanteprincipal;
    float divZ = parteprincipalZ / determinanteprincipal;

    printf("Valor de X: %.3f\n", divX);
    printf("Valor de Y: %.3f\n", divY);
    printf("Valor de Z: %.3f\n", divZ);
}