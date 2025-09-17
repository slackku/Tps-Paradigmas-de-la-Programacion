#ifndef IOVECTOR_H
#define IOVECTOR_H
#include <iostream>
#include <ostream>
#include "Vector.h"
using namespace std;

ostream &operator<<(ostream &salida, Vector V)
{
    salida << "[";
    for (unsigned int i = 0; i < capacidad(V); i++)
    {
        (elemento(V, i) == indef) ? salida << "indef" : salida << elemento(V, i);
        if (i < capacidad(V) - 1)
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
    for (int i = 1; i <= capacidad(V); i++)
    {
        std::cout << "\nIngresar el valor del vector en el indice " << i << ": ";
        entrada >> dato;
        V = insertar(V, i - 1, dato); // V.elementos[i];
        // entrada >> elemento(V, i);
    }
    return entrada;
}
#endif