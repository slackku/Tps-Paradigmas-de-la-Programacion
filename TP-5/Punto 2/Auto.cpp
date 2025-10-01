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

int Auto::antiguedad()
{
    return stoi(this->modelo);
}

double Auto::costoAlquiler(int precioDia, int diasAlquilados)
{
    double costoAlquiler = precioDia;
    if (this->capacidad > 5)
        costoAlquiler += (costoAlquiler * 0.25);
    if (this->antiguedad() < 5)
        costoAlquiler += (costoAlquiler * 0.30);
    return costoAlquiler * diasAlquilados;
}