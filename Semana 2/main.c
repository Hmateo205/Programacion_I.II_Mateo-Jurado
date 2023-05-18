#include <stdio.h>
#include "HJ_matriz.h"

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    printf("Ingrese los valores de la matriz 1:\n");
    ingresarMatriz(matriz1);

    printf("\nIngrese los valores de la matriz 2:\n");
    ingresarMatriz(matriz2);

    int matriz1Cuadrado[3][3];
    elevarAlCuadrado(matriz1, matriz1Cuadrado);

    multiplicarMatrices(matriz1Cuadrado, matriz2, resultado);

    printf("\nMatriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}