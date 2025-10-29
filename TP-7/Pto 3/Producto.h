#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto
{
private:
    const double incremento = 0.1;
    int codigo;
    double precio; // >= 0
    string descripcion;

public:
    Producto(int c = 0, string d = "", double p = 0);
    Producto(const Producto &p);
    ~Producto() = default;

    void escribirInfo();
    double calcularPrecioDeVenta(); // >= 0
    int getCodigo();
};

#endif