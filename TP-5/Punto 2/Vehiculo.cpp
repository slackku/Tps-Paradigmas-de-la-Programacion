#include <iostream>
#include "Vehiculo.h"
using namespace std;
string Vehiculo::getPatente()
{
    return Vehiculo::patente;
}

string Vehiculo::getTitular()
{
    return Vehiculo::titular;
}

void Vehiculo::listarInfo()
{
    cout << "Patente: " << Vehiculo::getPatente() << endl;
    cout << "Titular: " << Vehiculo::getTitular() << endl;
}

