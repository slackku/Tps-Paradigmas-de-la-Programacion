#include "Conjunto.h"
#include "IteradorInverso.h"
#include "IteradorImpar.h"
#define MAX 10

int main()
{
    Conjunto c1;
    cout << "Creando Conjunto vacio. c1" << endl;
    cout << "Comprobando si esta vacio: " << (c1.esConjuntoVacio() ? "Esta Vacio" : "No Esta Vacio") << endl;

    cout << "Cargando el conjunto c1 con los elementos {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << endl;
    for (int i = 0; i < MAX; i++)
    {
        c1.agregar(i + 1);
    }
    c1.escribir();

    cout << "Creando IteradorInverso e IteradorImpar" << endl;
    IteradorInverso IN(&c1);
    IteradorImpar IM(&c1);

    cout << "Uso de Iterardor Inverso..." << endl;
    mostrarContenido(IN);
    
    cout << endl << "Uso de Iterardor Impar..." << endl;
    mostrarContenido(IM);


    return 0;
}