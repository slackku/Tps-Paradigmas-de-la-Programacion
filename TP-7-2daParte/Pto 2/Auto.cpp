#include "Auto.h"

void Auto::listarInformacion()
{
    cout << "#   Moto\n"
         << "Patente: " << this->patente
         << "Marca: " << this->marca
         << "Titular: " << this->titular
         << "Precio Base Alquiler: " << this->precioBaseAlquiler
         << "Calcular Alquiler: " << this->calcularAlquiler()
         << "Modelo" << this->modelo
         << "Vencimiento VTV: " << this->vencimientoVTV.toString()
         << "Capacidad de Pasajeros: " << this->capacidadPasajeros
         << endl;
}

float Auto::calcularAlquiler()
{
    float incrementoCapacidad = 0;
    float incrementoAntiguedad = 0;
    if (this->capacidadPasajeros > 5)
        incrementoCapacidad = this->precioBaseAlquiler * 0.25;
    if (calcularAntiguedad() < 5)
        incrementoAntiguedad = this->precioBaseAlquiler * 0.30;
    return this->precioBaseAlquiler + incrementoCapacidad + incrementoAntiguedad;
}

int Auto::calcularAntiguedad()
{
    Fecha hoy;
    hoy.setFechaActual();
    return hoy.getAnio() - this->modelo;
}

bool Auto::estaVencidaVTV()
{
    Fecha hoy;
    hoy.setFechaActual();
    return this->vencimientoVTV < hoy;
}