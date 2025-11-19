#include "Permanente.h"

double Permanente::calcularCosto()
{
    return (this->getCantidadMeses() + 2) * this->inm->getCostoMensual();
}