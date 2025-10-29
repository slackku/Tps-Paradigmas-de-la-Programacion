#include "Alquiler.h"

void Alquiler::listarInformacion()
{
    cout << "## Alquiler"
         << "Fecha Inicio: " << getFin().toString()
         << "Fecha Fin: " << getInicio().toString()
         << "Dni Cliente: " << this->ClienteDni
         << endl;

    this->inm->listarInformacion();
}

float Alquiler::calcularAlquiler()
{
    return this->inm->calcularAlquiler() * (fin - inicio);
}

Fecha Alquiler::getInicio()
{
    return this->inicio;
}

Fecha Alquiler::getFin()
{
    return this->fin;
}