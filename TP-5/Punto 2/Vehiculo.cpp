#include <iostream>
#include "Vehiculo.h"
using namespace std;
string Vehiculo::getPatente()
{
    return this->patente;
}

string Vehiculo::getTitular()
{
    return this->titular;
}

void Vehiculo::listarInfo()
{
    cout << "Patente: " << this->getPatente() << endl;
    cout << "Titular: " << this->getTitular() << endl;
}


