#include "Sistema.h"

Sistema::Sistema(const Sistema &s)
{
    this->listaPedidos = s.listaPedidos;
    this->listaProductos = s.listaProductos;
}

Sistema::~Sistema()
{
    for (int i = 0; i < this->listaPedidos.size(); i++)
    {
        delete this->listaPedidos[i];
    }
}

void Sistema::agregarProducto(Producto *prod)
{
    this->listaProductos.push_back(prod);
}

void Sistema::registrarPedido(Fecha f, string cliente, int codProd, FormaPago pago)
{
    Producto *productoObtenido = obtenerProducto(codProd);
    if (productoObtenido)
    {
        Pedido *nuevoPedido = new Pedido(f, cliente, pago, *productoObtenido);
        this->listaPedidos.push_back(nuevoPedido);
    }
}

void Sistema::cargarFechaEntrega(int codPed, Fecha f)
{
    Pedido *pedidoObtenido = obtenerPedido(codPed);
    if (pedidoObtenido)
        pedidoObtenido->entregarPedido(f);
}

void Sistema::listarPedidos(Fecha f)
{
    for (int i = 0; i < this->listaPedidos.size(); i++)
    {
        Fecha fPedido = this->listaPedidos[i]->getFechaPedido();
        if (fPedido.getAnio() == f.getAnio() &&
            fPedido.getMes() == f.getMes() &&
            fPedido.getDia() == f.getDia())
        {
            this->listaPedidos[i]->escribirInfo();
        }
    }
}

Pedido *Sistema::obtenerPedido(int codigo)
{
    for (Pedido *ped : this->listaPedidos)
    {
        if (ped->getCodigo() == codigo)
            return ped;
    }
    return nullptr;
}

Producto *Sistema::obtenerProducto(int codigo)
{
    for (Producto *prod : this->listaProductos)
    {
        if (prod->getCodigo() == codigo)
            return prod;
    }
    return nullptr;
}
