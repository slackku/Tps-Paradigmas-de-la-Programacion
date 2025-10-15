#include <iostream>
#include "Producto.h"
#include "Pila.h"

using namespace std;

int main() {
    Producto* prod1 = new Producto(1, "Auriculares", 1500.0);
    Producto* prod2 = new Producto(2, "Teclado", 3000.0);
    Producto* prod3 = new Producto(3, "Monitor", 20000.0);
    Producto *x;
    Pila p1;

    p1.push(prod1);
    p1.push(prod2);
    p1.push(prod3);
    
    p1.escribir();
    x = p1.top();
    x->listarInformacion();
    cout << "lal" << endl;
    return 0;
}
