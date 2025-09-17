#ifndef CUENTA_H
#define CUENTA_H
class Cuenta
{
private:
    int numero;
    long int dniTitular;
    double saldo;

public:
    void crear(int num, long int titular, double monto); // monto >= 0
    bool depositar(double monto);                        // monto >= 0
    bool extraer(double monto);                          // monto >= 0
    double getSaldo();                                   // doubler >= 0
    void mostrarInformacion();
};

bool transferir(Cuenta *origen, Cuenta *destino, double monto);

#endif