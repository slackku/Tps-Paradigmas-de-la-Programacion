#include <iostream>
#include "Cuenta.h"
using namespace std;

int main()
{
    Cuenta c1;
    Cuenta c2;
    c1.crear(1, 123456789, 91220.18);
    c2.crear(2, 987654321, 5000);

    c1.mostrarInformacion();
    c2.mostrarInformacion();

    bool couldExtract1 = c1.extraer(10000);
    bool couldExtract2 = c2.extraer(2000);

    c1.mostrarInformacion();
    c2.mostrarInformacion();

    bool couldTransfer = transferir(&c1, &c2, 5000);
    couldTransfer ? cout << "Se Transfirio correctamente\n"
                         << endl
                  : cout << "No se pudo realizar la transferencia\n"
                         << endl;

    c1.mostrarInformacion();
    c2.mostrarInformacion();

    return 0;
}
