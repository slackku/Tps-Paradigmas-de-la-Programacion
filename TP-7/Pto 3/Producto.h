#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto
{
private:
    const double incremento;
    int codigo;
    double precio; // > 0
    string descripcion;

public:
    void escribirInfo();
    double calcularPrecioDeVenta(); // > 0
    int getCodigo();
};

#endif