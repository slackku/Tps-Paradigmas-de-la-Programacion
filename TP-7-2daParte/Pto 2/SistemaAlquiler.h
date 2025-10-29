#ifndef SISTEMA_ALQUILER_H
#define SISTEMA_ALQUILER_H
#include "Alquiler.h"
#include <vector>

class SistemaAlquiler
{
private:
    vector<Alquiler *> alquileres;

public:
    SistemaAlquiler() = default;
    SistemaAlquiler(const SistemaAlquiler &s) : alquileres(s.alquileres) {}; // SOFT COPY - TODO, the full one
    ~SistemaAlquiler() = default;

    void crearAlquiler(Fecha ini, Vehiculo *v, string ClienDni);
    void listarAlquileres(Fecha ini, Fecha fin);
    float calcularRecaudacion(int mes, int anio);
};

#endif