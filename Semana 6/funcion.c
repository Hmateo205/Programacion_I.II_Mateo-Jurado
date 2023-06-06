#include <stdio.h>
#include <math.h>
#include "funcion.h"

float ingreseComponente(char comp, int i)
{
    float a;
    printf("Ingrese la componente %c del punto %d ", comp, i);
    scanf("%f", &a);
    return a;
}
float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

float calcularVolumen(int cono[3][3])
{
    float radio = calcularDistancias(cono[0][0], cono[0][1], cono[0][2], cono[1][0], cono[1][1], cono[1][2]);
    float altura = calcularDistancias(cono[0][0], cono[0][1], cono[0][2], cono[2][0], cono[2][1], cono[2][2]);
    return (3.14 * pow(radio, 2) * altura) / 3;
}


float imprimirVolumenArea(float volumen1, float volumen2, int cono1[3][3], int cono2[3][3])

{
    float altura = calcularDistancias(cono1[0][0], cono1[0][1], cono1[0][2], cono1[2][0], cono1[2][1], cono1[2][2]);
    float radio = calcularDistancias(cono1[0][0], cono1[0][1], cono1[0][2], cono1[1][0], cono1[1][1], cono1[1][2]);
    
    float radiopeque= ((altura/2)*radio)/altura;

    float volumen = (3.14 * pow(radiopeque, 2) * (altura/2)) / 3;
    float vol2= volumen*2;

    printf ("volumen pequeno %f", vol2);


}