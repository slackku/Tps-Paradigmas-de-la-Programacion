#include <iostream>
#include "Cuenta.h"

using namespace std;

void Cuenta::crear(int num, long int titular, double monto)
{
    numero = num;
    dniTitular = titular;
    bool couldDeposit = depositar(monto);
}

bool Cuenta::depositar(double monto)
{
    if (monto >= 0)
    {
        Cuenta::saldo += monto;
        return true;
    }
    return false;
}

double Cuenta::getSaldo()
{
    return Cuenta::saldo;
}

bool Cuenta::extraer(double monto)
{
    if (Cuenta::getSaldo() < monto)
    {
        return false;
    }
    else
    {
        Cuenta::saldo -= monto;
        return true;
    }
}

void Cuenta::mostrarInformacion()
{
    cout << "Numero de Cuenta: " << Cuenta::numero << endl;
    cout << "Dni del Titular: " << Cuenta::dniTitular << endl;
    cout << "Saldo: $" << Cuenta::saldo << "\n"
         << endl;
}

bool transferir(Cuenta *origen, Cuenta *destino, double monto)
{
    if (origen->getSaldo() >= monto)
    {
        bool couldExtract = origen->extraer(monto);
        bool couldDeposit = destino->depositar(monto);
        return couldExtract && couldDeposit;
    }
    else
    {
        return false;
    }
}
