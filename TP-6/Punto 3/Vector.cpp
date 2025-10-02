#include "Vector.h"
#include <iostream>
using namespace std;

bool Vector::reservarMemoria(unsigned int n)
{
    elementos = new item[n];
    bool isReserved = elementos != nullptr;
    if (isReserved)
    {
        for (int i = 0; i < n; i++)
        {
            elementos[i] = indef;
            max = n;
        }
    }
    else
    {
        max = 0;
    }
    return isReserved;
}

Vector::Vector(int n)
{
    elementos = nullptr;
    reservarMemoria(n);
}

void Vector::redimensionar(unsigned int n)
{
    item *elemsRedim = new item[n];
    for (unsigned int i = 0; i < n; i++)
    {
        if (i < max)
        {

            elemsRedim[i] = elementos[i];
        }
        else
        {
            elemsRedim[i] = indef;
        }
    }
    item *elemsOld = elementos;
    elementos = elemsRedim;
    max = n;
    delete[] elemsOld;
}

void Vector::insertar(unsigned int p, item x)
{
    if (max >= p)
    {
        elementos[p - 1] = x;
    }
    else
    {
        redimensionar(p);
        elementos[p - 1] = x;
    }
}

unsigned int Vector::capacidad()
{
    return Vector::max;
}

item &Vector::elemento(unsigned int p)
{
    unsigned int indice = p - 1;
    if (max > indice)
    {
        return elementos[indice];
    }
    else
    {
        return elementos[0];
    }
}

void Vector::borrar(unsigned int p)
{
    if (Vector::max >= p)
    {
        Vector::elementos[p - 1] = indef;
    }
    else
    {
        Vector::redimensionar(p);
        Vector::elementos[p - 1] = indef;
    }
}

void Vector::borrar()
{
    for (unsigned int i = 0; i < this->max; i++)
    {
        elementos[i] = indef;
    }
}

Vector::~Vector()
{
    delete[] this->elementos;
    this->max = 0;
}

bool operator==(Vector &V1, Vector &V2)
{
    if (V1.capacidad() != V2.capacidad())
        return false;
    for (unsigned int i = 1; i <= V1.capacidad(); i++)
        if (V1.elemento(i) != V2.elemento(i))
            return false;
    return true;
}