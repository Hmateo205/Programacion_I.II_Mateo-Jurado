#include "HJ_Funciones.h"
#include <math.h>

double calculateDistance(Point p1, Point p2) {
    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
    return distance;
}