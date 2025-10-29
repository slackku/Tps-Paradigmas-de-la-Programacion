#ifndef MOTO_H
#define MOTO_H
#include "Vehiculo.h"

class Moto : protected Vehiculo
{
private:
    static constexpr int CMedia = 250;
    static constexpr int CAlta = 600;
    double cilindrada;

public:
    Moto() : Vehiculo(), cilindrada(0) {};
    Moto(string t, string p, string m, double pB, double c) : Vehiculo(t, p, m, pB), cilindrada(c) {};
    Moto(const Moto &m) : Vehiculo(m.titular, m.patente, m.marca, m.precioBaseAlquiler), cilindrada(m.cilindrada) {};
    ~Moto() = default;

    void listarInformacion() override;
    float calcularAlquiler() override;
};

#endif