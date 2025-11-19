#include "Temporal.h"

double Temporal::calcularCosto()
{
    double montoAcc = this->inm->getCostoMensual();
    int cantMeses = this->getCantidadMeses();
    for (int i = 0; i < cantMeses; i++)
    {
        montoAcc += montoAcc * this->INTERES_MENSUAL;
    }
    return montoAcc;
}