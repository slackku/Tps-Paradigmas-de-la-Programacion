#ifndef MOTO_H
#define MOTO_H
#include "Vehiculo.h"

class Moto : public Vehiculo
{
private:
    string cilindrada;

public:
    void mostrarCilindrada();
    double costoAlquiler(int precioDia, int diasAlquilados);
};

#endif