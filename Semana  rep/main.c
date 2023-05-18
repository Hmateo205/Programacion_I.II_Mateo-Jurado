#include <stdio.h>
#include "prog.h"

int main (int argc, int *argv[])
{
    float m1[3][3] = {{3.4,5.4,8},{7.1,9.3,7.2},{2.3,8.9,4}};
    float n1[3][4] = {{7,9,7,9},{7.9,8,2,1.3},{4.7,8.2,3,7}};
    multiplicar(m1,n1);

    return 0;
}