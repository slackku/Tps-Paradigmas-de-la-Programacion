#ifndef IOVECTOR_H
#define IOVECTOR_H
#include <iostream>
#include <ostream>
#include "Vector.h"
using namespace std;

ostream &operator<<(ostream &salida, Vector &V)
{
    salida << "[";
    for (unsigned int i = 0; i < V.capacidad(); i++)
    {
        (V.elemento(i) == indef) ? salida << "indef" : salida << V.elemento(i);
        if (i < V.capacidad() - 1)
        {
            salida << ", ";
        }
    }
    salida << "]";
    return salida;
}

istream &operator>>(istream &entrada, Vector &V)
{
    item dato;
    for (int i = 1; i <= V.capacidad(); i++)
    {
        std::cout << "\nIngresar el valor del vector en el indice " << i << ": ";
        entrada >> dato;
        V.insertar(i - 1, dato); // V.elementos[i];
        // entrada >> elemento(V, i);
    }
    return entrada;
}
#endif