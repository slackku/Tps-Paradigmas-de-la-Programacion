#include <iostream>
#include "Moto.h"
using namespace std;

double Moto::costoAlquiler(int precioDia, int diasAlquilados)
{
    double costoAlquiler = precioDia;
    if (Moto::cilindrada == "medio")
        costoAlquiler += (costoAlquiler * 0.25);
    if (Moto::cilindrada == "alto")
        costoAlquiler += (costoAlquiler * 0.50);
    costoAlquiler *= diasAlquilados;
    return costoAlquiler;
}

void Moto::mostrarCilindrada()
{
    cout << "Cilindrada: " << Moto::cilindrada << endl;
}