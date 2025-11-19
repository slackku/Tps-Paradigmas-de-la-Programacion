#ifndef TEMPORAL_H_
#define TEMPORAL_H_

#include "Alquiler.h"

class Temporal : public Alquiler
{
    double const INTERES_MENSUAL = 0.015;

public:
    Temporal(int id, Fecha fechaI, Fecha fechaF, Inmueble &inm) : Alquiler(id, fechaI, fechaF, inm) {};
    double calcularCosto() override;

    ~Temporal() {};
};

#endif