typedef struct {
    double x;
    double y;
    double z;
} PuntoCartesiano;

void leerPunto(PuntoCartesiano *punto);
double calcularArea(PuntoCartesiano *puntos);