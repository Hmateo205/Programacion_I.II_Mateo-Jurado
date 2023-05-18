#include <stdio.h>

int main(int argc, char *argv[])
{
    void ingresarMatriz(int matriz[][4], int filas, int columnas);
    void imprimirMatriz(int matriz[][4], int filas, int columnas);
    int calcularDeterminante(int matriz[][4], int filas, int columnas);
    int matriz[3][4];
    int filas = 3;
    int columnas = 4;

    ingresarMatriz(matriz, filas, columnas);
    imprimirMatriz(matriz, filas, columnas);
    calcularDeterminante(matriz, filas, columnas);

    return 0;
}
void ingresarMatriz(int matriz[][4], int filas, int columnas)
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

int calcularDeterminante(int matriz[][4], int filas, int columnas)
{
    printf("Calculo por determinantes:\n");
    int determinanteprincipal = 0;
    // primeradiagonal1
    int primervalorx = matriz[0][0];
    int primervalory = matriz[1][1];
    int primervalorz = matriz[2][2];
    int primervalor = primervalorx * primervalory * primervalorz;
    // segundadiagonal1
    int segundovalorx = matriz[1][0];
    int segundovalory = matriz[2][1];
    int segundovalorz = matriz[0][2];
    int segundovalor = segundovalorx * segundovalory * segundovalorz;
    // terceradiagonal1
    int tercervalorx = matriz[2][0];
    int tercervalory = matriz[0][1];
    int tercervalorz = matriz[1][2];
    int tercervalor = tercervalorx * tercervalory * tercervalorz;
    // cuartadiagonal
    int cuartovalorx = matriz[2][0];
    int cuartovalory = matriz[1][1];
    int cuartovalorz = matriz[0][2];
    int cuartovalor = cuartovalorx * cuartovalory * cuartovalorz;
    // quintadaigonal
    int quintovalorx = matriz[0][0];
    int quintovalory = matriz[2][1];
    int quintovalorz = matriz[1][2];
    int quintovalor = quintovalorx * quintovalory * quintovalorz;
    // sexta diagonal
    int sextovalorx = matriz[1][0];
    int sextovalory = matriz[0][1];
    int sextovalorz = matriz[2][2];
    int sextovalor = sextovalorx * sextovalory * sextovalorz;
    determinanteprincipal = ((primervalor + segundovalor + tercervalor) - (cuartovalor + quintovalor + sextovalor));
    printf("%d", determinanteprincipal);
}