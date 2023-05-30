#include <stdio.h>
#include "HJ_funcion.h"

int main() {
    PuntoCartesiano puntos[4];

    // Leer los 4 puntos
    for (int i = 0; i < 4; i++) {
        printf("Punto %d:\n", i + 1);
        leerPunto(&puntos[i]);
    }

    // Calcular el área
    double area = calcularArea(puntos);

    // Mostrar el área calculada
    printf("\nEl área formada por los puntos ingresados es: %.2lf\n", area);

    return 0;
}
