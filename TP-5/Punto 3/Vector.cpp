#include "Vector.h"
#include "ioVector.h"

bool Vector::reservarMemoria(unsigned int n)
{
    Vector::elementos = new item[n];
    bool isReserved = Vector::elementos != NULL;
    if (isReserved)
    {
        for (int i = 0; i < n; i++)
        {
            Vector::elementos[i] = indef;
            Vector::max = n;
        }
    }
    else
    {
        Vector::max = 0;
    }
    return isReserved;
}

void Vector::crearVector(unsigned int n)
{
    Vector::elementos = NULL;
    bool isReserved = Vector::reservarMemoria(n);
}

bool Vector::redimensionar(unsigned int n)
{
    item *elemsRedim = new item[n];
    for (unsigned int i = 0; i < n; i++)
    {
        if (i < Vector::max)
        {

            elemsRedim[i] = Vector::elementos[i];
        }
        else
        {
            elemsRedim[i] = indef;
        }
    }
    item *elemsOld = Vector::elementos;
    Vector::elementos = elemsRedim;
    Vector::max = n;
    delete[] elemsOld;
    return Vector::elementos != NULL;
}

void Vector::insertar(unsigned int p, item x)
{
    if (Vector::max >= p)
    {
        Vector::elementos[p] = x;
    }
    else
    {
        redimensionar(p);
        Vector::elementos[p] = x;
    }
}

unsigned int Vector::capacidad()
{
    return Vector::max;
}

item &Vector::elemento(unsigned int p)
{
    if (Vector::max >= p)
    {
        return Vector::elementos[p];
    }
    else
    {
        return Vector::elementos[0];
    }
}

void Vector::borrar(unsigned int p)
{
    if (Vector::max >= p)
    {
        Vector::elementos[p] = indef;
    }
    else
    {
        Vector::redimensionar(p);
        Vector::elementos[p] = indef;
    }
}

void Vector::borrar()
{
    for (unsigned int i = 0; i < this->max; i++)
    {
        elementos[i] = indef;
    }
}

void Vector::destruir()
{
    delete[] this->elementos;
    this->max = 0;
}