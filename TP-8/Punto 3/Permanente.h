#ifndef PERMANENTE_H_
#define PERMANENTE_H_

#include "Alquiler.h"

class Permanente : public Alquiler
{
public:
    Permanente(int id, Fecha fechaI, Fecha fechaF, Inmueble &inm) : Alquiler(id, fechaI, fechaF, inm) {};
    double calcularCosto() override;
    ~Permanente() {};
};

#endif