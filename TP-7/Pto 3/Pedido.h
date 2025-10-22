#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include "Fecha.h"
using namespace std;
class Pedido
{
private:
    const int autonumerico;
    int codigoPedido;
    string idCliente;
    FormaPago formaDePago;
    Fecha fechaPedido;
    Fecha fechaEntrega;
    bool entregado;
    const int envio;
public:
    Pedido();
    Pedido(string idC, FormaPago fdP);
    Pedido(const Pedido &p);
    ~Pedido();

    void escribirInfo();
    void entregarPedido(Fecha f);
    Fecha getFechaPedido();
    int getCodigo();
    double calcularCosto();
};

enum FormaPago
{
    Debito,
    Credito
};

#endif