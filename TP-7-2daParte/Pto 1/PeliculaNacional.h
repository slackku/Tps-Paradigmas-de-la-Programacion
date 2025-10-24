#ifndef PELICULA_NACIONAL_H_
#define PELICULA_NACIONAL_H_
#include "Pelicula.h"

class PeliculaNacional : public Pelicula
{
private:
    static constexpr float descuento = 0.20;

public:
    PeliculaNacional() : Pelicula() {};
    PeliculaNacional(string s, Persona *p, Fecha f, float pr) : Pelicula(s, p, f, pr) {};
    float calcularCosto() override;
};

#endif