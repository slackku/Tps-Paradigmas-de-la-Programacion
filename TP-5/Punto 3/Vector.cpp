#include "Vector.h"

bool Vector::reservarMemoria(unsigned int n)
{
    this->elementos = new item[n];
    bool isReserved = this->elementos != nullptr;
    if (isReserved)
    {
        for (int i = 0; i < n; i++)
        {
            this->elementos[i] = indef;
            this->max = n;
        }
    }
    else
    {
        this->max = 0;
    }
    return isReserved;
}

void Vector::crearVector(unsigned int n)
{
    this->elementos = nullptr;
    bool isReserved = Vector::reservarMemoria(n);
}

bool Vector::redimensionar(unsigned int n)
{
    item *elemsRedim = new item[n];
    for (unsigned int i = 0; i < n; i++)
    {
        if (i < this->max)
        {

            elemsRedim[i] = this->elementos[i];
        }
        else
        {
            elemsRedim[i] = indef;
        }
    }
    item *elemsOld = this->elementos;
    this->elementos = elemsRedim;
    this->max = n;
    delete[] elemsOld;
    return this->elementos != nullptr;
}

void Vector::insertar(unsigned int p, item x)
{
    if (this->max >= p)
    {
        this->elementos[p] = x;
    }
    else
    {
        redimensionar(p);
        this->elementos[p] = x;
    }
}

unsigned int Vector::capacidad()
{
    return this->max;
}

item &Vector::elemento(unsigned int p)
{
    if (this->max >= p)
    {
        return this->elementos[p];
    }
    else
    {
        return this->elementos[0];
    }
}

void Vector::borrar(unsigned int p)
{
    if (this->max >= p)
    {
        this->elementos[p] = indef;
    }
    else
    {
        this->redimensionar(p);
        this->elementos[p] = indef;
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

bool operator==(Vector &V1, Vector &V2)
{
    if (V1.capacidad() != V2.capacidad())
        return false;
    for (unsigned int i = 0; i < V1.capacidad(); i++)
        if (V1.elemento(i) != V2.elemento(i))
            return false;
    return true;
}