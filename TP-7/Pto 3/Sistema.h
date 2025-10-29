#ifndef SISTEMA_H
#define SISTEMA_H
#include "Pedido.h"
#include "Producto.h"
#include <vector>

class Sistema
{
private:
    vector<Producto*> listaProductos;
    vector<Pedido*> listaPedidos;
    Pedido *obtenerPedido(int codigo);
    Producto *obtenerProducto(int codigo);

public:
    Sistema() = default;
    Sistema(const Sistema &s);
    ~Sistema();

    void agregarProducto(Producto* prod);
    void registrarPedido(Fecha f, string cliente, int codProd, FormaPago pago);
    void cargarFechaEntrega(int codPed, Fecha f);
    void listarPedidos(Fecha f);
};

#endif