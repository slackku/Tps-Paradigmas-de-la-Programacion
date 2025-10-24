#include "PeliculaNacional.h"

float PeliculaNacional::calcularCosto()
{
    float costo = this->precioBase;
    if (this->esEstreno())
        costo *= (1 - descuento);
    return costo;
}