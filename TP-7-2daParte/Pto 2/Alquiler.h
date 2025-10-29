#ifndef ALQUILER_H
#define ALQUILER_H
#include "Vehiculo.h"
#include "Fecha.h"

class Alquiler
{
private:
    string codigo;
    Fecha inicio;
    Fecha fin;
    string ClienteDni;
    Vehiculo *inm;

public:
    Alquiler() : codigo(""), inicio(), fin(), ClienteDni(""), inm(nullptr) {};
    Alquiler(string c, Fecha i, Fecha f, string CID, Vehiculo *v) : codigo(c), inicio(i), fin(f), ClienteDni(CID), inm(v) {};
    Alquiler(const Alquiler &a) : codigo(a.codigo), inicio(a.inicio), fin(a.fin), ClienteDni(a.ClienteDni), inm(a.inm) {};
    ~Alquiler() = default;

    void listarInformacion();
    float calcularAlquiler();
    Fecha getInicio();
    Fecha getFin();
};

#endif