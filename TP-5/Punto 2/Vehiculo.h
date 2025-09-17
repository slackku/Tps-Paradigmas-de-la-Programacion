#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;
class Vehiculo
{
private:
    string patente;
    string marca;
    string titular;
    double precioBase;

public:
    void listarInfo();
    string getPatente();
    string getTitular();
    double calcularCostoAlquiler(); // Abstracto [Se implementa en sus herederos]
};

#endif