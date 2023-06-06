#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2) {
    float distancia;
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    return distancia;
}

float calcularAreaCono(float radio, float altura) {
    float area;
    area = M_PI * radio * (radio + sqrt(pow(altura, 2) + pow(radio, 2)));
    return area;
}

float calcularVolumenCono(float radio, float altura) {
    float volumen;
    volumen = (M_PI * pow(radio, 2) * altura) / 3;
    return volumen;
}

int main() {
    float x1, y1, z1; // Coordenadas del centro del cono (p1)
    float x2, y2, z2; // Coordenadas del punto en el radio del cono (p2)
    float x3, y3, z3; // Coordenadas del punto en la altura del cono (p3)
    float radio, altura;
    float area, volumen;

    // Obtener las coordenadas del usuario
    printf("Ingrese las coordenadas del centro del cono (p1):\n");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Ingrese las coordenadas del punto en el radio del cono (p2):\n");
    scanf("%f %f %f", &x2, &y2, &z2);
    printf("Ingrese las coordenadas del punto en la altura del cono (p3):\n");
    scanf("%f %f %f", &x3, &y3, &z3);

    // Calcular el radio y la altura
    radio = calcularDistancia(x1, y1, z1, x2, y2, z2);
    altura = calcularDistancia(x1, y1, z1, x3, y3, z3);

    // Calcular el área y el volumen
    area = calcularAreaCono(radio, altura);
    volumen = calcularVolumenCono(radio, altura);

    // Imprimir los resultados
    printf("El área del cono es: %.2f\n", area);
    printf("El volumen del cono es: %.2f\n", volumen);

    return 0;
}
