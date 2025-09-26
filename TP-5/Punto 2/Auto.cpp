#include <iostream>
#include "Auto.h"
using namespace std;

bool Auto::estaVTVVencida()
{
    Fecha fechaActual;
    Fecha fechaVencVTV;
    fechaActual.setFechaActual();
    fechaVencVTV = Auto::fechaVencimientoVTV;
    return fechaVencVTV < fechaActual;
}

int Auto::antiguedad() {
    

}
double Auto::costoAlquiler(int precioDia, int diasAlquilados) {}