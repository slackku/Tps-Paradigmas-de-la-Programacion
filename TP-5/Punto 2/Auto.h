#ifndef AUTO_H
#define AUTO_H
#include "Vehiculo.h"
#include "Fecha.h"

class Auto : public Vehiculo
{
private:
    string modelo;
    Fecha fechaVencimientoVTV;
    int capacidad;

public:
    bool estaVTVVencida();
    int antiguedad();
    double costoAlquiler(int precioDia, int diasAlquilados);
};

#endif