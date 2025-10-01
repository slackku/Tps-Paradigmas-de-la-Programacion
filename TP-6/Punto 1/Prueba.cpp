#include "Pelicula.h"

int main()
{
    // 1️⃣ Constructor por defecto
    Pelicula p1;
    cout << "Informacion de p1 (por defecto):" << endl;
    p1.listarInformacion();
    cout << "-------------------------" << endl;

    // 2️⃣ Constructor con parámetros
    Pelicula p2(1, 1, "The Sacred Kingdom", "Naoyuki Ito", true, 4000, Pelicula::N);
    cout << "Informacion de p2 (con parametros):" << endl;
    p2.listarInformacion();
    cout << "-------------------------" << endl;

    // 3️⃣ Copia de p2
    Pelicula p3(p2); // constructor copia
    cout << "Informacion de p3 (copia de p2):" << endl;
    p3.listarInformacion();
    cout << "-------------------------" << endl;

    // 4️⃣ Modificar director de p1
    p1.setDirector("Nuevo Director");
    cout << "Informacion de p1 despues de cambiar director:" << endl;
    p1.listarInformacion();
    cout << "-------------------------" << endl;

    // 5️⃣ Mostrar costo de p2
    cout << "Costo de alquiler de p2: " << p2.calcularCosto() << endl;

    return 0;
}