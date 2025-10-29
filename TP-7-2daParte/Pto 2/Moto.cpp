#include "Moto.h"

void Moto::listarInformacion()
{
    cout << "#   Moto\n"
         << "Patente: " << this->patente
         << "Marca: " << this->marca
         << "Titular: " << this->titular
         << "Precio Base Alquiler: " << this->precioBaseAlquiler
         << "Calcular Alquiler: " << this->calcularAlquiler()
         << "Cilindrada" << this->cilindrada
         << endl;
}

float Moto::calcularAlquiler()
{
    float incrementoCilindrada = 0;
    if (this->cilindrada >= CMedia && this->cilindrada < CAlta)
        incrementoCilindrada = this->precioBaseAlquiler * 0.25;
    else if (this->cilindrada >= CAlta)
        incrementoCilindrada = this->precioBaseAlquiler * 0.50;
    return this->precioBaseAlquiler + incrementoCilindrada;
}