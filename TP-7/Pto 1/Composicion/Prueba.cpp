#include <iostream>
#include "Producto.h"
#include "Pila.h"

using namespace std;

int main() {
    cout << "===== PRUEBA DE PRODUCTO Y PILA =====" << endl;

    // Crear una pila con capacidad 5
    Pila pilaProductos(5);

    // Crear y apilar productos
    cout << "\n--- Agregando productos a la pila ---" << endl;
    pilaProductos.push(1001, "Mouse", 1500.00);
    pilaProductos.push(1002, "Teclado", 3500.00);
    pilaProductos.push(1003, "Monitor", 12500.00);
    pilaProductos.push(1004, "Notebook", 250000.00);
    pilaProductos.push(1005, "Impresora", 8500.00);

    // Mostrar contenido de la pila
    pilaProductos.escribir();

    // Consultar el producto en el tope
    cout << "\n--- Producto en el tope de la pila ---" << endl;
    Producto tope = pilaProductos.top();
    tope.listarInformacion();

    // Sacar un producto de la pila
    cout << "\n--- Haciendo pop() ---" << endl;
    pilaProductos.pop();

    // Mostrar pila luego del pop
    pilaProductos.escribir();

    // Pop adicionales hasta vaciar
    while (!pilaProductos.esPilavacia()) {
        cout << "\nHaciendo pop()" << endl;
        pilaProductos.pop();
        pilaProductos.escribir();
    }

    // Intentar hacer top() con pila vacía
    cout << "\n--- Intentando acceder al tope en pila vacía ---" << endl;
    Producto vacio = pilaProductos.top();
    vacio.listarInformacion();

    cout << "\n===== FIN DE PRUEBA =====" << endl;

    return 0;
}
