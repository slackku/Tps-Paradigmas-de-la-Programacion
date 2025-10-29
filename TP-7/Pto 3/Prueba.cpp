#include "Sistema.h"

int main()
{
    vector<Producto *> allProductos;
    cout << "Creando stock maestro..." << endl;

    Producto *p1 = new Producto(1, "El numero 1", 1);
    Producto *p2 = new Producto(2, "El numero 2", 2);
    Producto *p3 = new Producto(3, "El numero 3", 3);

    allProductos.push_back(p1);
    allProductos.push_back(p2);
    allProductos.push_back(p3);

    Sistema sys;
    for (int i = 0; i < allProductos.size(); i++)
    {
        sys.agregarProducto(allProductos[i]);
    }

    Fecha fechaAhora;
    fechaAhora.setFechaActual();

    Fecha fechaPasado;
    fechaPasado.setFecha(10, 12, 2023);

    Fecha fechaPasado2;
    fechaPasado2.setFecha(10, 12, 2024);

    cout << "Registrando pedidos fechaAhora..." << endl;
    sys.registrarPedido(fechaAhora, "Solomon I", 1, Debito);
    sys.registrarPedido(fechaAhora, "Yan Carlo", 2, Credito);
    sys.registrarPedido(fechaAhora, "Miguel de Cervantes", 3, Debito);
    cout << endl;

    cout << "Registrando pedidos fechaPasado..." << endl;
    sys.registrarPedido(fechaPasado, "Solomon I", 1, Debito);
    sys.registrarPedido(fechaPasado, "Yan Carlo", 2, Debito);
    sys.registrarPedido(fechaPasado, "Miguel de Cervantes", 3, Debito);
    cout << endl;

    cout << "Registrando pedidos fechaPasado2..." << endl;
    sys.registrarPedido(fechaPasado2, "Solomon I", 1, Debito);
    sys.registrarPedido(fechaPasado2, "Yan Carlo", 2, Debito);
    sys.registrarPedido(fechaPasado2, "Miguel de Cervantes", 3, Debito);
    cout << endl;

    cout << "Listar fechaAhora..." << endl;
    sys.listarPedidos(fechaAhora);
    cout << endl;

    cout << "Listar fechaPasado..." << endl;
    sys.listarPedidos(fechaPasado);
    cout << endl;

    cout << "Listar fechaPasado2..." << endl;
    sys.listarPedidos(fechaPasado2);
    cout << endl;

    cout << "Realizando entrega pedido 1" << endl;
    sys.cargarFechaEntrega(1, fechaAhora);
    cout << "Realizando entrega pedido 4" << endl;
    sys.cargarFechaEntrega(4, fechaAhora);
    cout << "Realizando entrega pedido 7" << endl;
    sys.cargarFechaEntrega(7, fechaAhora);

    cout << "Producto id 1 estado entregado" << endl;
    sys.listarPedidos(fechaAhora);
    cout << endl;

    cout << "Producto id 4 estado entregado" << endl;
    sys.listarPedidos(fechaPasado);
    cout << endl;

    cout << "Producto id 7 estado entregado" << endl;
    sys.listarPedidos(fechaPasado2);
    cout << endl;

    cout << "Borrando los productos declarados con new..." << endl;
    for (Producto *prod : allProductos)
    {
        delete prod;
    }

    return 0;
}