#include <stdio.h>
#include "HJ_Funciones.h"

typedef struct {
    double x;
    double y;
    double z;
} PuntoCartesiano;

void leerPunto(PuntoCartesiano *punto) {
    printf("Ingrese las coordenadas del punto:\n");
    printf("x: ");
    scanf("%lf", &(punto->x));
    printf("y: ");
    scanf("%lf", &(punto->y));
    printf("z: ");
    scanf("%lf", &(punto->z));
}

double calcularArea(PuntoCartesiano *puntos) {
    // Calcular los vectores AB y AC
    double vectorAB_x = puntos[1].x - puntos[0].x;
    double vectorAB_y = puntos[1].y - puntos[0].y;
    double vectorAB_z = puntos[1].z - puntos[0].z;

    double vectorAC_x = puntos[2].x - puntos[0].x;
    double vectorAC_y = puntos[2].y - puntos[0].y;
    double vectorAC_z = puntos[2].z - puntos[0].z;

    // Calcular el producto cruz de AB y AC
    double productoCruz_x = vectorAB_y * vectorAC_z - vectorAB_z * vectorAC_y;
    double productoCruz_y = vectorAB_z * vectorAC_x - vectorAB_x * vectorAC_z;
    double productoCruz_z = vectorAB_x * vectorAC_y - vectorAB_y * vectorAC_x;

    // Calcular el módulo del producto cruz
    double moduloProductoCruz = sqrt(productoCruz_x * productoCruz_x +
                                     productoCruz_y * productoCruz_y +
                                     productoCruz_z * productoCruz_z);

    // Calcular el área dividiendo el módulo del producto cruz entre 2
    double area = moduloProductoCruz / 2.0;

    return area;
}