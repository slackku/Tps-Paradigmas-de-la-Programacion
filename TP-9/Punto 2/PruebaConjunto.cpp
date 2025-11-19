#include "Conjunto.h"
#include "IteradorInverso.h"
#include "IteradorImpar.h"
#define MAX 10

int main()
{
    Conjunto<int> c1;
    Conjunto<string> c2;
    cout << "Creando Conjunto vacio. c1" << endl;
    cout << "Comprobando si esta vacio: " << (c1.esConjuntoVacio() ? "Esta Vacio" : "No Esta Vacio") << endl;

    cout << "Cargando el conjunto c1 con los elementos {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << endl;
    for (int i = 0; i < MAX; i++)
    {
        c1.agregar(i + 1);
    }
    cout << "Cargando el conjunto c2 con los elementos {\"El\", \"fin\", \"es\", \"el\", \"principio\", \"y\", \"el\", \"principio\", \"es\", \"fin\"}" << endl;
    string texts[] = {"EL", "Fin", "Es", "El", "principio", "y", "el", "Principio", "es", "fin"};
    
    for (string text : texts)
    {
        c2.agregar(text);
    }

    c1.escribir();
    c2.escribir();

    cout << "Creando IteradorInverso e IteradorImpar [int y string]" << endl;
    IteradorInverso<int> InvertedIter_Nums(&c1);
    IteradorImpar<int> OddIter_Nums(&c1);

    IteradorInverso<string> InvertedIter_Strings(&c2);
    IteradorImpar<string> OddIter_String(&c2);

    cout << "Uso de los Iterardores Inversos..." << endl;
    mostrarContenido(InvertedIter_Nums);
    mostrarContenido(InvertedIter_Strings);

    cout << endl
         << "Uso de los Iterardores Impares..." << endl;
    mostrarContenido(OddIter_Nums);
    mostrarContenido(OddIter_String);
    return 0;
}