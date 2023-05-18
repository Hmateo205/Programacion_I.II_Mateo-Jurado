#include <stdio.h>
#include "HJ_matriz.h"


void ingresarMatriz(int matriz[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}


void elevarAlCuadrado(int matriz[3][3], int resultado[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < 3; k++) {
                resultado[i][j] += matriz[i][k] * matriz[k][j];
            }
        }
    }
}


void multiplicarMatrices(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
}
