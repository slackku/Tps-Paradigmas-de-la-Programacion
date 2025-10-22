#ifndef SISTEMA_H
#define SISTEMA_H
#include "Pedido.h"
#include "Producto.h"

class Sistema
{
private:
    Pedido *listaPedidos;
    Producto *listaProductos;
    Pedido obtenerPedido(int codigo);
    Producto obtenerProducto(int codigo);

public:
    Sistema();
    Sistema(const Sistema &s);
    ~Sistema();
    void agregarProducto(Producto prod);
    void registrarPedido(Fecha f, string cliente, int codProd, FormaPago pago);
    void cargarFechaEntrega(int codPed, Fecha f);
    void listaPerdidos(Fecha f);
};

#endif