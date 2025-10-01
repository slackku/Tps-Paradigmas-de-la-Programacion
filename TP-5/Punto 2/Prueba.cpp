#include "Auto.h"
#include "Moto.h"
#include "Fecha.h"
#include <iostream>
using namespace std;
int main()
{
    Fecha fechaVTV(12, 12, 2002);
    // --- Crear un Auto ---
    Auto miAuto(
        "ABC123",     // patente
        "Toyota",     // marca
        "Juan Perez", // titular
        10000.0,      // precioBase
        "2020",    // modelo
        fechaVTV,     // fechaVencimientoVTV
        5             // capacidad
    );

    // --- Mostrar info del Auto ---
    cout << "=== AUTO ===" << endl;
    miAuto.listarInfo();
    cout << "Antiguedad: " << miAuto.antiguedad() << " anios" << endl;
    cout << "VTV vencida? " << (miAuto.estaVTVVencida() ? "Si" : "No") << endl;
    cout << "Costo alquiler 3 dias a 200/dia: "
         << miAuto.costoAlquiler(200, 3) << endl;
    cout << endl;

    // --- Crear una Moto ---
    Moto miMoto("150cc");

    cout << "=== MOTO ===" << endl;
    miMoto.listarInfo(); // Esto llamaría al listarInfo() de Vehiculo si lo implementaste
    miMoto.mostrarCilindrada();
    cout << "Costo alquiler 2 dias a 150/dia: "
         << miMoto.costoAlquiler(150, 2) << endl;

    return 0;
}