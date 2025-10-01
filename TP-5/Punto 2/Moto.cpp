#include <iostream>
#include "Moto.h"
using namespace std;

double Moto::costoAlquiler(int precioDia, int diasAlquilados)
{
    double costoAlquiler = precioDia;
    if (this->cilindrada == "medio")
        costoAlquiler += (costoAlquiler * 0.25);
    if (this->cilindrada == "alto")
        costoAlquiler += (costoAlquiler * 0.50);
    return costoAlquiler * diasAlquilados;
}

void Moto::mostrarCilindrada()
{
    cout << "Cilindrada: " << this->cilindrada << endl;
}