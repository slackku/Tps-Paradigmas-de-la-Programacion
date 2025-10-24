#ifndef PELICULA_INTERNACIONAL_H
#define PELICULA_INTERNACIONAL_H
#include "Pelicula.h"

class PeliculaInternacional : public Pelicula
{
private:
    static constexpr float incremento = 0.30;
    string paisDeOrigen;

public:
    PeliculaInternacional() : Pelicula() {};
    PeliculaInternacional(string s, Persona *p, Fecha f, float pr, string pais) : Pelicula(s, p, f, pr), paisDeOrigen(pais) {};
    void listarInformacion() override;
    float calcularCosto() override;
};

#endif