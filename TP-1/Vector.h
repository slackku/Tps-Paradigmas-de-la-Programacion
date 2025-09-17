#ifndef VECTOR_H
#define VECTOR_H

#define indef -999999
typedef int item;

struct Vector
{
    item *elementos;
    unsigned int max;
};

Vector crearVector(unsigned int n = 10);
Vector insertar(Vector v, unsigned int p, item x);
unsigned int capacidad(Vector v);
item& elemento(Vector v, unsigned int p);
Vector borrar(Vector v, unsigned int p);
Vector borrar(Vector v);
Vector destruir(Vector v);
// Auxiliares
bool reservarMemoria(Vector &v, unsigned int n);
bool redimensionar(Vector &v, unsigned int n);
bool operator==(Vector V1, Vector V2);

#endif