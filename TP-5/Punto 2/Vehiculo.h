#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;
class Vehiculo
{
protected:
    string patente;
    string marca;
    string titular;
    double precioBase;

public:
    Vehiculo() {}
    Vehiculo(string p, string m, string t, double pb) : patente(p), marca(m), titular(t), precioBase(pb) {}

    void listarInfo();
    string getPatente();
    string getTitular();
    double calcularCostoAlquiler(); // Abstracto [Se implementa en sus herederos]
};

#endif