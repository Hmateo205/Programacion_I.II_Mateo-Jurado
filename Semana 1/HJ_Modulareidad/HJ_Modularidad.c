#include <stdio.h>
#include "HJ_Modularidad.h"

void tamanoMatriz(int *filas, int *columnas)
{
    printf("Ingrese el tamano de la matriz matriz en X:\n");
    scanf("%d", columnas);
    
    printf("Ingrese el tamano de la matriz matriz en Y:\n");
    scanf("%d", filas);
}

void ingresarElementosMatriz(int matriz[][100], int filas, int columnas)
{
    printf("Ingrese los valores de la matriz:\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posicion (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[][100], int filas, int columnas)
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
