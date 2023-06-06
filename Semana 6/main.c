#include <stdio.h>

int main (int argc, char *argv[]) {

    int cono1[3][3];
    int cono2[3][3];

    for (int i = 0; i < 3; i++)
    {
        cono1[i][0]=ingreseComponente('X',i);
        cono1[i][1]=ingreseComponente('Y',i);
        cono1[i][2]=ingreseComponente('Z',i);
    }
     for (int j = 0; j < 3; j++)
    {
        cono2[j][0]=ingreseComponente('X',j);
        cono2[j][1]=ingreseComponente('Y',j);
        cono2[j][2]=ingreseComponente('Z',j);
    }

    float volumen1=calcularVolumen(cono1);
    float volumen2=calcularVolumen(cono2);

    imprimirVolumenArea(volumen1, volumen2,cono1,cono2);
    

    return 0;
}