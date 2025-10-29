#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;

class Vehiculo
{
protected:
    string titular;
    string patente;
    string marca;
    double precioBaseAlquiler;

public:
    Vehiculo() : titular(""), patente(""), marca(""), precioBaseAlquiler(0.0) {};
    Vehiculo(string t, string p, string m, double pB) : titular(t), patente(p), marca(m), precioBaseAlquiler(pB) {};
    Vehiculo(const Vehiculo &v) : titular(v.titular), patente(v.patente), marca(v.patente), precioBaseAlquiler(v.precioBaseAlquiler) {};
    ~Vehiculo() = default;

    virtual void listarInformacion() = 0;
    virtual float calcularAlquiler() = 0;
};

#endif