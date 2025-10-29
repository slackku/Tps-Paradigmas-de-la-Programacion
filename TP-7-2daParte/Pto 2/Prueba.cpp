#include "SistemaAlquiler.h"
#include "Auto.h"
#include "Moto.h"

int main()
{
    cout << "Creando Motos..." << endl;

    Moto m1("Solomon I", "ABC 123", "Mr Moto", 3.99, 250);
    Moto m2("Steve", "MIN 000", "A Pixelated one", 9.99, 300);
    Moto m3("Solomon I", "ABC 123", "Mr Moto", 99.99, 800);

    cout << "Creando Autos..." << endl;
    Fecha f1(10, 10, 2024);
    Fecha f2(31, 12, 2025);
    Fecha f3(10, 10, 2026);

    Auto a1("Solomon I", "ILJ 979", "Subaru", 10.50, 2023, f3, 2);
    Auto a1("Dominic Toreto", "FAM 000", "Dodge Charger", 10.50, 2010, f1, 2);
    Auto a1("Carl Jhonson", "GTA 003", "Honda Civic", 10.50, 2016, f2, 5);

    SistemaAlquiler sys;
    Fecha FA1(20,10,2025);




    return 0;
}