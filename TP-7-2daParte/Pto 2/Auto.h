#ifndef AUTO_H
#define AUTO_H
#include "Vehiculo.h"
#include "Fecha.h"

class Auto : protected Vehiculo
{
private:
    int modelo;
    Fecha vencimientoVTV;
    int capacidadPasajeros;

public:
    Auto() : Vehiculo(), modelo(0), vencimientoVTV(), capacidadPasajeros(0) {};
    Auto(string t, string p, string m, double pB, int mod, Fecha f, int cap) : Vehiculo(t, p, m, pB), modelo(mod), vencimientoVTV(f), capacidadPasajeros(cap) {};
    Auto(const Auto &a) : Vehiculo(a.titular, a.patente, a.marca, a.precioBaseAlquiler), modelo(a.modelo), vencimientoVTV(a.vencimientoVTV), capacidadPasajeros(a.capacidadPasajeros) {};
    ~Auto() = default;

    int calcularAntiguedad();
    bool estaVencidaVTV();

    void listarInformacion() override;
    float calcularAlquiler() override;
};

#endif