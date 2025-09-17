#include <iostream>
#include "Vector.h"
using namespace std;

Vector crearVector(unsigned int n)
{
    Vector v;
    v.elementos = NULL;
    bool isReserved = reservarMemoria(v, n);
    if (isReserved)
    {
        for (int i = 0; i < (int)n; i++)
        {
            v.elementos[i] = indef;
        }
        v.max = n;
    }
    else
    {
        v.max = 0;
        std::cout << "Ocurrio un error al reservar memoria" << endl;
    }
    return v;
}

bool reservarMemoria(Vector &v, unsigned int n)
{
    v.elementos = new item[n];
    return v.elementos != NULL;
}

bool redimensionar(Vector &v, unsigned int n)
{
    item *elemsRedim = new item[n];
    for (unsigned int i = 0; i < n; i++)
    {
        if (i < v.max)
        {

            elemsRedim[i] = v.elementos[i];
        }
        else
        {
            elemsRedim[i] = indef;
        }
    }
    item *elemsOld = v.elementos;
    v.elementos = elemsRedim;
    v.max = n;
    delete[] elemsOld;
    return v.elementos != NULL;
}

Vector insertar(Vector v, unsigned int p, item x)
{
    if (v.max >= p)
    {
        v.elementos[p] = x;
    }
    else
    {
        redimensionar(v, p);
        v.elementos[p] = x;
    }
    return v;
}

unsigned int capacidad(Vector v)
{
    return v.max;
}

item &elemento(Vector v, unsigned int p)
{

    if (v.max >= p)
    {
        return v.elementos[p];
    }
    else
    {
        return v.elementos[0];
    }
}

Vector borrar(Vector v, unsigned int p)
{
    if (v.max >= p)
    {
        v.elementos[p] = indef;
    }
    else
    {
        redimensionar(v, p);
        v.elementos[p] = indef;
    }
    return v;
}

Vector borrar(Vector v)
{
    for (unsigned int i = 0; i < v.max; i++)
    {
        v.elementos[i] = indef;
    }
    return v;
}

Vector destruir(Vector v)
{
    delete[] v.elementos;
    v.max = 0;
    return v;
}

bool operator==(Vector V1, Vector V2)
{
    bool comparator = V1.max == V2.max;
    if (comparator)
    {
        for (unsigned int i = 0; i < V1.max; i++)
        {
            int some1 = V1.elementos[i];
            int some2 = V2.elementos[i];
            comparator = comparator && (V1.elementos[i] == V2.elementos[i]);
        }
    }
    return comparator;
}