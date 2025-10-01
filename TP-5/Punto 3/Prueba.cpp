#include "Vector.h"
#include "ioVector.h"
#include <iostream>
using namespace std;

int main()
{
    Vector v1, v2;

    // --- Crear vectores ---
    v1.crearVector();     // tamaño por defecto
    v2.crearVector(5);    // tamaño 5

    // --- Llenar vectores usando >> ---
    cout << "Ingrese 5 elementos para v1: ";
    cin >> v1;            // usa operator>>

    cout << "Ingrese 5 elementos para v2: ";
    cin >> v2;            // usa operator>>

    // --- Mostrar vectores usando << ---
    cout << "Contenido de v1: " << v1 << endl;
    cout << "Contenido de v2: " << v2 << endl;

    // --- Comparar vectores ---
    if (v1 == v2)
        cout << "v1 y v2 son iguales" << endl;
    else
        cout << "v1 y v2 son diferentes" << endl;

    // --- Borrar un elemento ---
    cout << "Borrando v1[2]..." << endl;
    v1.borrar(2);
    cout << "v1 después de borrar: " << v1 << endl;

    // --- Redimensionar vector ---
    cout << "Redimensionando v2 a tamanio 8..." << endl;
    if (v2.redimensionar(8)) {
        cout << "v2 despues de redimensionar: " << v2 << endl;
    } else {
        cout << "Error al redimensionar v2" << endl;
    }

    // --- Borrar todo el vector ---
    cout << "Borrando todos los elementos de v1..." << endl;
    v1.borrar();
    cout << "v1 ahora: " << v1 << endl;

    // --- Destruir vectores ---
    v1.destruir();
    v2.destruir();

    return 0;
}