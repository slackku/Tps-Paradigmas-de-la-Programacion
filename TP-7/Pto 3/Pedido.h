#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include "Fecha.h"
#include "Producto.h"
using namespace std;

enum FormaPago
{
    Debito,
    Credito
};

class Pedido
{
private:
    static int autonumerico;
    int codigoPedido;
    string idCliente;
    Producto *producto;
    FormaPago formaDePago;
    Fecha fechaPedido;
    Fecha fechaEntrega;
    bool entregado;
    const int envio = 3000;

public:
    Pedido(string idC, FormaPago fdP, Producto &producto);
    Pedido(Fecha f, string idC, FormaPago fdP, Producto &producto);
    Pedido(const Pedido &p);
    ~Pedido() = default;

    void escribirInfo();
    void entregarPedido(Fecha f);
    Fecha getFechaPedido();
    int getCodigo();
    double calcularCosto();
};

#endif