#include "Conjunto.h"
#include "IteradorDeConjunto.h"
#define MAX 10

int main()
{
    Conjunto c1;
    cout << "Creando Conjunto vacio. c1" << endl;
    cout << "Comprobando si esta vacio: " << (c1.esConjuntoVacio() ? "Está Vacio" : "No Está Vacio") << endl;
    
    cout << "Cargando el conjunto c1 con los elementos {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << endl;
    for (int i = 1; i <= MAX; i++)
    {
        c1.agregar(i);
    }
    c1.escribir();
    
    cout << "Creando Iterador de Conjunto" << endl;
    IteradorDeConjunto IC(&c1);
    cout << "Elemento actual: " << IC.elementoActual();

    return 0;
}