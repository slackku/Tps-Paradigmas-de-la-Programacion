#include "Pedido.h"

int Pedido::autonumerico = 0;

Pedido::Pedido(string idC, FormaPago fdP, Producto &producto)
{
    this->codigoPedido = ++autonumerico;
    this->idCliente = idC;
    this->producto = &producto;
    this->formaDePago = fdP;
    this->fechaPedido.setFechaActual();
    this->entregado = false;
}

Pedido::Pedido(Fecha f, string idC, FormaPago fdP, Producto &producto)
{
    this->codigoPedido = ++autonumerico;
    this->idCliente = idC;
    this->producto = &producto;
    this->formaDePago = fdP;
    this->fechaPedido = f;
    this->entregado = false;
}

Pedido::Pedido(const Pedido &p)
{
    this->codigoPedido = p.codigoPedido;
    this->idCliente = p.idCliente;
    this->producto = p.producto;
    this->formaDePago = p.formaDePago;
    this->fechaPedido = p.fechaPedido;
    this->fechaEntrega = p.fechaEntrega;
    this->entregado = p.entregado;
}

void Pedido::escribirInfo()
{
    cout << "Pedido " << this->codigoPedido << " =============" << endl;
    cout << "Cliente: " << this->idCliente << endl;
    cout << "Forma de pago: " << (this->formaDePago == 0 ? "Debito" : "Credito") << endl;
    cout << "Fecha del pedido: " << this->getFechaPedido().toString() << endl;
    cout << "Estado: " << (this->entregado ? "Entregado" : "No Entregado") << endl;
    if (this->entregado)
    {
        cout << "Fecha entrega: " << this->fechaEntrega.toString() << endl;
    }
}

void Pedido::entregarPedido(Fecha f)
{
    this->fechaEntrega.setFecha(f.getDia(), f.getMes(), f.getAnio());
    this->entregado = true;
}

Fecha Pedido::getFechaPedido()
{
    return this->fechaPedido;
}

int Pedido::getCodigo()
{
    return this->codigoPedido;
}

double Pedido::calcularCosto()
{
    float precio = this->producto->calcularPrecioDeVenta();
    if (this->formaDePago == Credito)
        precio *= 1.15;
    return precio + this->envio;
}