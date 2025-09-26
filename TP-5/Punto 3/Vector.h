#ifndef VECTOR_H
#define VECTOR_H

#define indef -999999
typedef int item;

class Vector
{
private:
    item *elementos;
    unsigned int max;

public:
    void crearVector(unsigned int n = 10); // *
    void insertar(unsigned int p, item x); // *
    unsigned int capacidad();  // *
    item &elemento(unsigned int p); // *
    void borrar(unsigned int p);
    void borrar();
    void destruir();
    // Auxiliares
    bool reservarMemoria(unsigned int n);
    bool redimensionar(unsigned int n);
};

bool operator==(Vector V1, Vector V2);

#endif