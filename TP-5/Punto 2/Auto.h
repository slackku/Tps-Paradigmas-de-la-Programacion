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
    Auto() {}
    Auto(string p, string m, string t, double pb,
         string mod, Fecha fV, int c)
        : Vehiculo(p, m, t, pb), modelo(mod), fechaVencimientoVTV(fV), capacidad(c) {}
    bool estaVTVVencida();
    int antiguedad();
    double costoAlquiler(int precioDia, int diasAlquilados);
};

#endif