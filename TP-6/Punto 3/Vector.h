#ifndef VECTOR_H
#define VECTOR_H

#define indef -999999
typedef int item;

class Vector
{
private:
    item *elementos;
    int max;

public:
    Vector( int n = 10);
    ~Vector();
    void insertar(unsigned int p, item x); 
    unsigned int capacidad();              
    item &elemento(unsigned int p);        
    void borrar(unsigned int p);
    void borrar();
    // Auxiliares
    bool reservarMemoria(unsigned int n);
    void redimensionar(unsigned int n);
};

bool operator==(Vector &V1, Vector &V2);

#endif