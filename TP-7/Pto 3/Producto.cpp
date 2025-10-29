#include "Producto.h"

Producto::Producto(int c, string d, double p) : codigo(c), descripcion(d), precio(p) {}

Producto::Producto(const Producto &p) : codigo(p.codigo), descripcion(p.descripcion), precio(p.precio) {}

void Producto::escribirInfo()
{
    cout << "Producto" << getCodigo() << "==================" << endl;
    cout << "Descripcion: " << this->descripcion << endl;
    cout << "Precio compra: $" << this->precio << endl;
    cout << "Precio venta: $" << calcularPrecioDeVenta() << endl;
}

double Producto::calcularPrecioDeVenta()
{
    return this->precio + (this->precio * this->incremento);
}

int Producto::getCodigo()
{
    return this->codigo;
}