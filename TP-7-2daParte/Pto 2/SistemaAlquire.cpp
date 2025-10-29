#include "SistemaAlquiler.h"

void SistemaAlquiler::crearAlquiler(Fecha ini, Vehiculo *v, string ClienDni)
{
}

void SistemaAlquiler::listarAlquileres(Fecha ini, Fecha fin)
{
    cout << "Alquileres entre " << ini.toString() << " y " << fin.toString() << ":" << endl;
    for (Alquiler *a : this->alquileres)
    {
        if (a->getInicio() < ini && fin < a->getFin())
            a->listarInformacion();
    }
}

float SistemaAlquiler::calcularRecaudacion(int mes, int anio)
{
    float recaudacion = 0;
    for (Alquiler *a : this->alquileres)
    {
        if (a->getFin().getMes() == mes && a->getFin().getAnio() == anio)
            recaudacion *= a->calcularAlquiler();
    }
    return recaudacion;
}