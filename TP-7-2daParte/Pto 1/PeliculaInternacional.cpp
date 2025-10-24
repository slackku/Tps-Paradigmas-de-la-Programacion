#include "PeliculaInternacional.h"

void PeliculaInternacional::listarInformacion()
{
    Pelicula::listarInformacion();
    cout << "  Pais de Origen: " << this->paisDeOrigen << endl;
}

float PeliculaInternacional::calcularCosto()
{
    return this->precioBase * (1 + this->incremento);
}