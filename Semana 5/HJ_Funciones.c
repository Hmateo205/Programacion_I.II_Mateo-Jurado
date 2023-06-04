#include <stdio.h>
#include "HJ_Funciones.h"

int main() {
    Point points[4];
    int i;

    // Ingresar las coordenadas de los 4 puntos
    printf("Ingresa las coordenadas de los 4 puntos:\n");
    for (i = 0; i < 4; i++) {
        printf("Punto %d:\n", i + 1);
        printf("x = ");
        scanf("%lf", &points[i].x);
        printf("y = ");
        scanf("%lf", &points[i].y);
        printf("z = ");
        scanf("%lf", &points[i].z);
    }

    // Calcular la longitud de los lados del cuadrado
    double sideLength = calculateDistance(points[0], points[1]);

    // Calcular el área del cuadrado
    double area = sideLength * sideLength;

    // Imprimir el área del cuadrado
    printf("El área del cuadrado es: %lf\n", area);

    // Calcular el volumen
    double depth;
    printf("Ingresa la profundidad: ");
    scanf("%lf", &depth);
    double volume = area * depth;

    // Imprimir el volumen
    printf("El volumen es: %lf\n", volume);

    return 0;
}